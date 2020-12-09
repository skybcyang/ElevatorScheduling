//
// Created by skybcyang on 2020/11/29.
//

#ifndef ELEVATOR_NOCOPYABLE_H
#define ELEVATOR_NOCOPYABLE_H

class NonCopyable
{
protected:
    NonCopyable() {}
    ~NonCopyable() {}
private:

    NonCopyable(const NonCopyable&);
    const NonCopyable& operator=(const NonCopyable&);
};

#endif //ELEVATOR_NOCOPYABLE_H
