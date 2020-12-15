//
// Created by skybcyang on 2020/12/9.
//

#ifndef ELEVATOR_ELEVATORWORKTASK_H
#define ELEVATOR_ELEVATORWORKTASK_H

#include <WorkTask.h>
#include "Elevator.h"
// 电梯需要的状态 1.打开电梯门，当自己运行到楼梯间的时候，接收到指令需要打开

namespace ElevatorWorkTask {
    ElevatorWorkTask(Layer& l) : layer(l) {}
    struct OpenTask : WorkTask {
        void do_work() override {
            elevator.OpenDoor();
        }
    private:
        Elevator& elevator;
    }
    struct CloseTask : WorkTask {

    }
    struct RunningTask : WorkTask {

    }
}

#endif //ELEVATOR_ELEVATORWORKTASK_H
