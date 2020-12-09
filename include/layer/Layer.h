//
// Created by skybcyang on 2020/11/27.
//

#ifndef ELEVATOR_LAYER_H
#define ELEVATOR_LAYER_H

#include <queue>
#include <Person.h>

enum ButtonState : bool {
    button_on,
    button_off
};

//enum ButtonAvailable : bool {
//    available,
//    non_available
//};

struct Button {
public:
    void TurnOnButton() {
        state = button_on;
    }
    void TurnOffButton() {
        state = button_off;
    }
private:
    ButtonState state;

};

class Layer {
public:
    Layer(size_t layer) : current_layer(layer) {std::cout<<"layer ctor"<<std::endl;};
    ~Layer(){};
    void Init(){
    };
    void AddPerson(const Person& person) {
        if (person.GetTargetFloor() < current_layer) {
            down_button.TurnOnButton();
            down_queue.push(person);
        }
        else {
            up_button.TurnOnButton();
            up_queue.push(person);
        }
    }
private:
    size_t current_layer;
    Button down_button;
    Button up_button;
    std::queue<Person> down_queue;
    std::queue<Person> up_queue;
};


#endif //ELEVATOR_LAYER_H
