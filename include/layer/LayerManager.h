//
// Created by skybcyang on 2020/11/27.
//

#ifndef ELEVATOR_LAYERMANAGER_H
#define ELEVATOR_LAYERMANAGER_H

#include <iostream>
#include <layer/Layer.h>
#include <layer/LayerState.h>

class LayerManager {
public:
    LayerManager(){std::cout<<"layer manager ctor"<<std::endl;};
    ~LayerManager() = default;
    void Init(uint32_t layerNum){
        for (int i=0; i<layerNum; i++) {
            auto layer = std::make_shared<Layer>(i);
            layer->Init();
            layers.push_back(std::move(layer));
        }
    };
    std::vector<LayerState> GetLayerState() {
        std::vector<LayerState> layer_state_vec;
        for (const auto& layer : layers) {
            layer_state_vec.push_back(layer->GetState());
        }
        return layer_state_vec;
    };
private:
    std::vector<std::shared_ptr<Layer>> layers;
};

#endif //ELEVATOR_LAYERMANAGER_H
