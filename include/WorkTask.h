//
// Created by skybcyang on 2020/12/9.
//

#ifndef ELEVATOR_WORKTASK_H
#define ELEVATOR_WORKTASK_H

struct WorkTask {
public:
    virtual void exec() = 0;
private:
    virtual void then() = 0;
};


#endif //ELEVATOR_WORKTASK_H
