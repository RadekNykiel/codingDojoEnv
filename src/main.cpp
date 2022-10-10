#include "Dummy.h"

#include "Tool.h"

int main()
{
    MyTool tool;
    Dummy dummyObj(&tool);

    std::cout << dummyObj.run() << "\n";

    return 0;
}