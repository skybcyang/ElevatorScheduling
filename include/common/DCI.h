//
// Created by skybcyang on 2020/11/27.
//

#ifndef ELEVATOR_DCI_H
#define ELEVATOR_DCI_H

#define IMPL_ROLE(x); \
x& Get##x() override { \
    return static_cast<x&>(*this); \
}

#define USE_ROLE(x); \
virtual x& Get##x() = 0;

#define ROLE(x) Get##x()

#endif //ELEVATOR_DCI_H
