#pragma once
//#ifndef __INTERFACE_H__
//#define __INTERFACE_H__
//<代码>
//#endif  __INTERFACE_H__
#include "Interface.hpp"

namespace My{
    Interface IRuntimeModule{
    public:
        virtual ~IRuntimeModule(){};
        virtual int Initialize()=0;    //初始化模块
        virtual void Finalize()=0;     //模块结束后进行清理
        virtual void Tick()=0;         //让驱动模块驱动该模块执行，没调用一次，模块进行一个单位的处理
    };
}
