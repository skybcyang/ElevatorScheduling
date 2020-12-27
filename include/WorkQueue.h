//
// Created by skybcyang on 2020/12/9.
//

#ifndef ELEVATOR_WORKQUEUE_H
#define ELEVATOR_WORKQUEUE_H

#include <IWorkTask.h>

#include <queue>
#include <thread>
#include <unistd.h>


struct WorkQueue {
public:
    void push_task(const std::shared_ptr<IWorkTask>& task) {
        task_queue.push(task);
    }

    void round_core() {
        if (!task_queue.empty()) {
            auto task = task_queue.front();
            auto state = task->exec();
            if (state == done) {
                task_queue.pop();
            }
        }
    }

    void start(size_t total_round = 1000) {
        size_t round = 0;
        while(round < total_round) {
            size_t task_num = task_queue.size();
            std::cout<<"Round "<<round<<" have "<<task_num<<" tasks"<<std::endl;
            /////////////////////////////////////
            while (task_num > 0) {
                round_core();
                task_num--;
            }
            /////////////////////////////////////
            round++;
            sleep(1);
            if (round > 1000) {
                break;
            }
        }
    }
    void clear() {
        while(!task_queue.empty()) {
            task_queue.pop();
        }
    }
private:
    std::queue<std::shared_ptr<IWorkTask>> task_queue;
};
#endif //ELEVATOR_WORKQUEUE_H
