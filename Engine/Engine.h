/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Engine.h
 * Author: jake
 *
 * Created on May 20, 2019, 4:56 PM
 */

#ifndef ENGINE_H
#include "Window.h"
#define ENGINE_H

class Engine {
public:
    Window window;
    Engine();
    Engine(const Engine& orig);
    virtual ~Engine();
private:

};

#endif /* ENGINE_H */

