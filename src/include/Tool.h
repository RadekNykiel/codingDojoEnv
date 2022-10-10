#pragma once

class ToolInterface
{
public:
    virtual int f(int x) = 0;
};

class MyTool : public ToolInterface
{
public:
    int f(int x) override;
};