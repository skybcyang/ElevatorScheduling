#ifndef DISPATHER_HEADER
#define DISPATHER_HEADER

#include <cstdint>
#include <memory>
#include <vector>

class Elevator {
public:
    Elevator(uint32_t floorNum);
    ~Elevator();
    void Init();
private:
    uint32_t currentFloor;
};

#endif