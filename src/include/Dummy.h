#pragma once

#include "Tool.h"

#include <iostream>

class Dummy
{
private:
    ToolInterface* m_tool;
public:
    Dummy(ToolInterface* t);
    int run();
};
