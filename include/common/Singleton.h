//
// Created by skybcyang on 2020/11/29.
//

#ifndef ELEVATOR_SINGLETON_H
#define ELEVATOR_SINGLETON_H
#include <iostream>

template <typename T>
class Singleton : public T {
public:
    template <typename ...Ts>
    static Singleton& GetInstance() {
        static auto* instance = new Singleton();
        return *instance;
    }
private:
    template <typename ...Ts>
    explicit Singleton(Ts... args) : T(std::forward<Ts>(args)...) {}
};

#endif //ELEVATOR_SINGLETON_H
