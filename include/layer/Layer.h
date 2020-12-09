//
// Created by skybcyang on 2020/11/27.
//

#ifndef ELEVATOR_LAYER_H
#define ELEVATOR_LAYER_H

#include <queue>
#include <Person.h>

enum ButtonState {
    ButtonOn,
    ButtonOff
};

class Button {
    ButtonState state;
};

class Layer {
public:
    Layer(){std::cout<<"layer ctor"<<std::endl;};
    ~Layer(){};
    void Init(){
    };
};


#endif //ELEVATOR_LAYER_H
