//
// Created by skybcyang on 2020/12/9.
//

#ifndef ELEVATOR_IWORKTASK_H
#define ELEVATOR_IWORKTASK_H

enum WorkTaskState : bool {
    done,
    undone
};

struct Executable {
    virtual WorkTaskState exec() = 0;
};

struct IWorkTask : Executable {
public:
    virtual ~IWorkTask() = default;
    WorkTaskState exec() {
        if (left_round == 0) {
            return done;
        }
        left_round--;
        if (left_round > 0) {
            return undone;
        }
        do_work();
        return done;
    }

private:
    virtual void do_work() = 0;

    size_t left_round = 0;
};


#endif //ELEVATOR_IWORKTASK_H
