#ifndef ELEVATOR_HEADER
#define ELEVATOR_HEADER

#include <cstdint>
#include <memory>
#include <vector>
#include "ElevatorState.h"

class Elevator {
public:
    Elevator() {std::cout<<"elevator ctor"<<std::endl;}
    ~Elevator() = default;
    void Init() {}
    void OpenDoor() {}
    void CloseDoor() {}
    void GoUpwards() {}
    void GoDownwards() {}
    ElevatorState GetState() {
        return state;
    }
private:
    ElevatorState state;
};

#endif