//
// Created by skybcyang on 2020/12/11.
//

#ifndef ELEVATOR_LAYERSTATE_H
#define ELEVATOR_LAYERSTATE_H

enum ButtonState : bool {
    button_on,
    button_off
};

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

struct LayerState {
    size_t current_layer;
    Button down_button;
    Button up_button;
    std::queue<Person> down_queue;
    std::queue<Person> up_queue;
};
#endif //ELEVATOR_LAYERSTATE_H
