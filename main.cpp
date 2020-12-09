#include <iostream>
#include "ElevatorSystem.h"
#include "common/DCI.h"


auto main() -> int
{
    ElevatorSystemObject system;
    system.InitAll(5, 1);

    system.Run();

    return 0;
}