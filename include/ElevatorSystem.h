#ifndef ELEVATOR_SYSTEM_HEADER
#define ELEVATOR_SYSTEM_HEADER

#include <Elevator.h>

#include <cstdint>
#include <memory>
#include <vector>

class ElevatorSystem {
public:
    ElevatorSystem(uint32_t elevatorNum, uint32_t floorNum);
    ~ElevatorSystem();
    
private:
    std::vector<std::shared_ptr<Elevator>> elevators;
    uint32_t elevatorNum;
    uint32_t floorNum;
};

#endif