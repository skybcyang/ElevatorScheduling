//
// Created by skybcyang on 2020/12/11.
//

#ifndef ELEVATOR_SCHEDULER_H
#define ELEVATOR_SCHEDULER_H
#include <scheduler/Strategy.h>

template <typename Strategy>
struct Scheduler {
    void GetStrategy() {
        return strategy.GetStrategy();
    }
private:
    Strategy strategy;
};

#endif //ELEVATOR_SCHEDULER_H
