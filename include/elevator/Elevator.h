#ifndef ELEVATOR_HEADER
#define ELEVATOR_HEADER

#include <cstdint>
#include <memory>
#include <vector>

class Elevator {
public:
    Elevator(){std::cout<<"elevator ctor"<<std::endl;};
    ~Elevator(){};
    void Init(){};
private:
    std::vector<int> targetFloors;
    int currentElevation = 0;
};

#endif