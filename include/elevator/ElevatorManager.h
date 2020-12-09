//
// Created by skybcyang on 2020/12/9.
//

#ifndef ELEVATOR_ELEVATORMANAGER_H
#define ELEVATOR_ELEVATORMANAGER_H

#include <elevator/Elevator.h>


class ElevatorManager {
public:
    ElevatorManager(){std::cout<<"layer manager ctor"<<std::endl;};
    ~ElevatorManager(){};
    void Init(uint32_t layerNum){
        for (int i=0; i<layerNum; i++) {
            auto layer = std::make_shared<Elevator>();
            layer->Init();
            layers.push_back(std::move(layer));
        }
    };
private:
    std::vector<std::shared_ptr<Elevator>> layers;
};
#endif //ELEVATOR_ELEVATORMANAGER_H
