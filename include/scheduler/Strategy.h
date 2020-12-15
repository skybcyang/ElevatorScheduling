//
// Created by skybcyang on 2020/12/11.
//

#ifndef ELEVATOR_STRATEGY_H
#define ELEVATOR_STRATEGY_H

#include <elevator/ElevatorInstruction.h>

struct IStrategy {
    virtual std::vector<ElevatorInstruction> GetStrategy(
            std::vector<ElevatorState>, std::vector<LayerState>) = 0;
};

struct TestStrategy : IStrategy {
    std::vector<ElevatorInstruction> GetStrategy(
            std::vector<ElevatorState>, std::vector<LayerState>) override {
        std::vector<ElevatorInstruction> result;
        for (auto state : elevatorState) {
            result.push_back({});
        }
        return result;
    }
};

#endif //ELEVATOR_STRATEGY_H
