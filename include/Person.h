//
// Created by skybcyang on 2020/11/27.
//

#ifndef ELEVATOR_PERSON_H
#define ELEVATOR_PERSON_H

class Person {
public:
    Person(int target) : targetFloor(target) {}
    int GetTargetFloor() const {
        return targetFloor;
    }
private:
    int targetFloor = 0;
};

#endif //ELEVATOR_PERSON_H
