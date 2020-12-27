//
// Created by skybcyang on 2020/11/27.
//

#ifndef ELEVATOR_LAYER_H
#define ELEVATOR_LAYER_H

#include <queue>
#include <person/Person.h>
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
            down_queue.push(person);
        }
        else {
            state.up_button.TurnOnButton();
            up_queue.push(person);
        }
    }
    LayerState GetState() {
        return state;
    }
private:
    LayerState state;
    std::queue<Person> down_queue;
    std::queue<Person> up_queue;
};


#endif //ELEVATOR_LAYER_H
