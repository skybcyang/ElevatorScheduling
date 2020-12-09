//
// Created by skybcyang on 2020/12/9.
//

#ifndef ELEVATOR_WORKQUEUE_H
#define ELEVATOR_WORKQUEUE_H

#include <WorkTask.h>

#include <queue>
#include <thread>
#include <unistd.h>


struct WorkQueue {
public:
    void push_task(WorkTask* task) {
        task_queue.push(task);
    }

    void round_core() {
        if (!task_queue.empty()) {
            auto task = task_queue.front();
            task->exec() == done ? push_task(task->get_then()) : push_task(task);
        }
    }

    void start() {
        size_t round = 0;
        while(1) {
            size_t task_num = task_queue.size();
            std::cout<<"Round "<<round<<" have "<<task_num<<" tasks"<<std::endl;
            while (task_num > 0) {
                round_core();
                task_num--;
            }
            round++;
            sleep(1);
            if (round > 1000) {
                break;
            }
        }

    }
private:
    std::queue<WorkTask*> task_queue;
};
#endif //ELEVATOR_WORKQUEUE_H
