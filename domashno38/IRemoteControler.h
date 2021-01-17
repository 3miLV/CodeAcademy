#pragma once
#include <iostream>

class IRemoteControler{
public:
    virtual void On() = 0;
    virtual void Of() = 0;
    virtual void Play() = 0;
    virtual ~IRemoteControler(){};
};