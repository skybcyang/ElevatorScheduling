//
// Created by skybcyang on 2020/12/20.
//

#ifndef ELEVATOR_PRODUCESTRATEGY_H
#define ELEVATOR_PRODUCESTRATEGY_H

#include <random>

struct IProduceStrategy {
    virtual std::vector<std::shared_ptr<Person>> ProducePersonForLayers() = 0;
};

struct RandomProduceStrategy : IProduceStrategy {
    explicit RandomProduceStrategy(uint32_t layer) : layer(layer) {}
    std::vector<std::shared_ptr<Person>> ProducePersonForLayers() override {
        std::vector<std::shared_ptr<Person>> personForLayers;
        for (int i=0; i<layer; i++) {
            personForLayers.push_back(Person{});
        }
        return personForLayers;
    }

private:
    std::default_random_engine random;
    uint32_t layer;
};

struct AverageProduceStrategy : IProduceStrategy {
    explicit AverageProduceStrategy(uint32_t layer) : layer(layer) {}
    std::vector<std::shared_ptr<Person>> ProducePersonForLayers() override {
        std::vector<std::shared_ptr<Person>> personForLayers;
        for (int i=0; i<layer; i++) {
            personForLayers.push_back(Person{});
        }
        return personForLayers;
    }

private:
    uint32_t layer;
};

struct ReadFileProduceStrategy : IProduceStrategy {
    void ReadFile() {

    }
    std::vector<std::shared_ptr<Person>> ProducePersonForLayers() override {
        current_round++;
    }
private:
    size_t current_round = 0;
};

#endif //ELEVATOR_PRODUCESTRATEGY_H
