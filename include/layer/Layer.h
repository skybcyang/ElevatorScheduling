//
// Created by skybcyang on 2020/11/27.
//

#ifndef ELEVATOR_LAYER_H
#define ELEVATOR_LAYER_H

#include <queue>
#include <Person.h>
#include <layer/LayerState.h>

class Layer {
public:
    explicit Layer(size_t layer) {
        std::cout<<"layer ctor"<<std::endl;
        state.current_layer = layer;
    }
    ~Layer() = default;
    void Init() {}
    void AddPerson(const Person& person) {
        if (person.GetTargetFloor() < state.current_layer) {
            state.down_button.TurnOnButton();
            state.down_queue.push(person);
        }
        else {
            state.up_button.TurnOnButton();
            state.up_queue.push(person);
        }
    }
    LayerState GetState() {
        return state;
    }
private:
    LayerState state;
};


#endif //ELEVATOR_LAYER_H
