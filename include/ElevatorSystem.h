#ifndef ELEVATOR_SYSTEM_HEADER
#define ELEVATOR_SYSTEM_HEADER

#include <elevator/ElevatorManager.h>
#include <layer/LayerManager.h>
#include <WorkQueue.h>
#include <common/DCI.h>

#include <cstdint>
#include <memory>
#include <vector>


class ElevatorSystem {
public:
    ElevatorSystem() {};
    ~ElevatorSystem() = default;

    void InitAll(uint32_t layerNum, uint32_t elevatorNum) {
        // init layer
        ROLE(LayerManager).Init(layerNum);

        // init elevator
        ROLE(ElevatorManager).Init(elevatorNum);
    }
    void Run() {
        ROLE(WorkQueue).start();
    }
    
private:
    USE_ROLE(WorkQueue);
    USE_ROLE(LayerManager);
    USE_ROLE(ElevatorManager);
};


struct ElevatorSystemObject
    : public ElevatorSystem
    , private WorkQueue
    , private LayerManager
    , private ElevatorManager {
private:
    IMPL_ROLE(WorkQueue);
    IMPL_ROLE(LayerManager);
    IMPL_ROLE(ElevatorManager);
};


#endif