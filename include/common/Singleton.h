//
// Created by skybcyang on 2020/11/29.
//

#ifndef ELEVATOR_SINGLETON_H
#define ELEVATOR_SINGLETON_H
#include <iostream>

template <typename T>
class Sington : public T {
public:
    template <typename ...Ts>
    static Sington& GetInstance() {
        static Sington* instance = new Sington();
        return *instance;
    }
private:
    template <typename ...Ts>
    Sington(Ts... args) : T(std::forward<Ts>(args)...) {}
};

#endif //ELEVATOR_SINGLETON_H
