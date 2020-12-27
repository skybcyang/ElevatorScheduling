#ifndef ELEVATOR_HEADER
#define ELEVATOR_HEADER

#include <cstdint>
#include <memory>
#include <vector>
#include <elevator/ElevatorState.h>

class Elevator {
public:
    Elevator() {std::cout<<"elevator ctor"<<std::endl;}
    ~Elevator() = default;
    void Init() {}
    void OpenDoor() {}
    void CloseDoor() {}
    ElevatorState GetState() {
        return state;
    }
private:
    ElevatorState state;
};

#endif