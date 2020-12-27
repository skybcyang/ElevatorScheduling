cmake_minimum_required (VERSION 3.17.0)

project(elevator)
include_directories("include")

set(CMAKE_CXX_STANDARD 20)

add_executable(elevator
        main.cpp
        include/common/DCI.h
        include/layer/Layer.h
        include/layer/LayerManager.h
        include/person/Person.h
        include/DefaultSetting.h
        include/common/Singleton.h
        include/common/nocopyable.h
        include/IWorkTask.h
        include/elevator/Elevator.h
        include/elevator/ElevatorManager.h include/WorkQueue.h include/scheduler/Scheduler.h include/elevator/ElevatorInstruction.h include/scheduler/Strategy.h include/layer/LayerState.h include/elevator/ElevatorState.h include/person/Producer.h test/test_.cpp include/person/ProduceStrategy.h third_party/catch.hpp)

