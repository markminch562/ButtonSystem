//
// Created by Mark Minch  on 9/5/21.
//

#ifndef BUTTONSYSTEM_SHADERUNIT_H
#define BUTTONSYSTEM_SHADERUNIT_H

#include <iostream>
#include <map>
struct __attribute__((packed, aligned(1))) unit
{
    size_t classSize = 0;
    void*  Begin()
    {
        return this + 8;
    }
    int End()
    {
        return sizeof(classSize) + classSize*sizeof(int);
    }
    void printData()
    {
        int* temp = static_cast<int*>(Begin());
        for(int i = 0 ; i < classSize/sizeof(int); i++) {
            std::cout << *temp << std::endl;
        }
    }

};
struct Color : public unit
{
    struct temp
    {
        int x;
        int y;
        int z;
    };
    temp var = {0 ,0 ,0};
    Color(int x, int y, int z) : var{x, y, z}
    {
        classSize =  sizeof(temp);
    }
};
struct vector : public unit
{
    int x;
    int y;
    int z;

};

struct DummyData
{
    int var = 5;
    int var2 = 6;
};

void DummyFunction()
{
    Color var(5,6,7);
    std::cout<<sizeof(var)<<std::endl;
    unit* var2 = &var;
    var2->printData();
    std::cout<<sizeof(unit)<<std::endl;
    DummyData data {12, 14};
    std::cout<<&data<<std::endl;
    int* Testing2 = static_cast<int*>((void*)&data);
    std::cout<<*Testing2<<std::endl;
    std::cout<<*(Testing2 + 1)<<std::endl;
}






#endif //BUTTONSYSTEM_SHADERUNIT_H
