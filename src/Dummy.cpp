#include "Dummy.h"

Dummy::Dummy(ToolInterface* t)
{
    m_tool = t;
}

int Dummy::run()
{
    if (m_tool->f(10) > 0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
