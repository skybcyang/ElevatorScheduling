cmake_minimum_required (VERSION 3.17.0)

project(elevator)
include_directories("include")

set(CMAKE_CXX_STANDARD 20)

add_executable(elevator
        main.cpp
        include/common/DCI.h
        include/layer/Layer.h
        include/layer/LayerManager.h
        include/Person.h
        include/DefaultSetting.h
        include/common/Singleton.h
        include/common/nocopyable.h
        include/WorkTask.h
        include/elevator/Elevator.h
        include/elevator/ElevatorManager.h include/WorkQueue.h)