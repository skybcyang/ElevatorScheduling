//
// Created by skybcyang on 2020/12/9.
//

#ifndef ELEVATOR_WORKTASK_H
#define ELEVATOR_WORKTASK_H

enum WorkTaskState : bool {
    done,
    undone
};

struct WorkTask {
public:
    virtual ~WorkTask() = 0;
    WorkTaskState exec() {
        left_round--;
        if (left_round > 0) {
            return undone;
        }
        do_work();
        return done;
    }
    WorkTask* get_then() {
        return then();
    }

protected:
    virtual void do_work() = 0;
    virtual WorkTask* then() = 0;

    size_t left_round = 0;
};


#endif //ELEVATOR_WORKTASK_H
