//
// Created by Mark Minch  on 9/3/21.
//

#ifndef BUTTONSYSTEM_INPUTSYSTEM_H
#define BUTTONSYSTEM_INPUTSYSTEM_H


#include <unordered_map>

class ButtonFunctionality
{
    static inline std::unordered_map<int, ButtonFunctionality*> ButtonMap;
    void* _classVar;
    //put in a member function here

public:
    ButtonFunctionality(void* _class, int key)
    {
        _classVar = _class;
        ButtonMap[key] = this;
    }
    static inline ButtonFunctionality* getButton(int var)
    {
        return ButtonMap[var];
    }
};


#endif //BUTTONSYSTEM_INPUTSYSTEM_H
