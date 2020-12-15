//
// Created by skybcyang on 2020/12/11.
//

#ifndef ELEVATOR_ELEVATORSTATE_H
#define ELEVATOR_ELEVATORSTATE_H

enum RunState : uint32_t {
    StayWithDoorOpen,
    StayWithDoorClose,
    GoUpwardsWithDoorClose,
    GoDownwardsWithDoorClose
};

struct ElevatorState {
    std::vector<int> targetFloors;
    int currentElevation = 0;
    RunState run_state;
};

#endif //ELEVATOR_ELEVATORSTATE_H
