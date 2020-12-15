//
// Created by skybcyang on 2020/12/10.
//

#ifndef ELEVATOR_LAYERWORKTASK_H
#define ELEVATOR_LAYERWORKTASK_H

#include <WorkTask.h>

namespace LayerWorkTask {
    struct AddPersonTask : public WorkTask { // 自己循环，随机加人，后续来通过文件输入

    }
    struct LoadPersonTask : public WorkTask { // 把人装入电梯，需要知道电梯是去往哪

    }
}
#endif //ELEVATOR_LAYERWORKTASK_H
