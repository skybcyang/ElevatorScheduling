//
// Created by skybcyang on 2020/12/9.
//

#ifndef ELEVATOR_ELEVATORMANAGER_H
#define ELEVATOR_ELEVATORMANAGER_H

#include <elevator/Elevator.h>


class ElevatorManager {
public:
    ElevatorManager(){std::cout<<"layer manager ctor"<<std::endl;};
    ~ElevatorManager() = default;
    void Init(uint32_t layerNum){
        for (int i=0; i<layerNum; i++) {
            auto elevator = std::make_shared<Elevator>();
            elevator->Init();
            elevators.push_back(std::move(elevator));
        }
    };
    std::vector<ElevatorState> GetElevatorState() {
        std::vector<ElevatorState> elevator_state;
        for (const auto& elevator : elevators) {
            elevator_state.push_back(elevator->GetState());
        }
        return elevator_state;
    }
private:
    std::vector<std::shared_ptr<Elevator>> elevators;
};
#endif //ELEVATOR_ELEVATORMANAGER_H
