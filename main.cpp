#include <iostream>
#include <GLFW/glfw3.h>
#include "InputSystem.h"
#include "ShaderUnits/ShaderUnit.h"
#include <vector>
struct  nothing{
    void * var = nullptr;
};
struct Person
{
    int age = 0;
    int death = 100;
};
struct Persons : public Person
{
    int vals = 9;
};


int main() {
    std::cout << "Hello, World!" << std::endl;


    if(!glfwInit())
    {
        std::cout<<"the window was not able to be loaded exiting the program"<<std::endl;
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
    glfwMakeContextCurrent(window);
    Person mark;
    Persons John;
    ButtonFunctionality markButton(&mark, 2);
    ButtonFunctionality* Button = ButtonFunctionality::getButton(2);
    /*
    if (!window)
    {
        // Window or OpenGL context creation failed
        glfwTerminate();
        exit(EXIT_FAILURE);
    }/*
    while(true)
    {
        std::cout<<"the programe is looping"<<std::endl;

        glfwPollEvents();
    }*/
    DummyFunction();

    return 0;
}
