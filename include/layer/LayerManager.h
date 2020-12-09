//
// Created by skybcyang on 2020/11/27.
//

#ifndef ELEVATOR_LAYERMANAGER_H
#define ELEVATOR_LAYERMANAGER_H

#include <iostream>
#include <layer/Layer.h>

class LayerManager {
public:
    LayerManager(){std::cout<<"layer manager ctor"<<std::endl;};
    ~LayerManager(){};
    void Init(uint32_t layerNum){
        for (int i=0; i<layerNum; i++) {
            auto layer = std::make_shared<Layer>();
            layer->Init();
            layers.push_back(std::move(layer));
        }
    };
private:
    std::vector<std::shared_ptr<Layer>> layers;
};

#endif //ELEVATOR_LAYERMANAGER_H
