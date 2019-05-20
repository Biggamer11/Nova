/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Engine.h
 * Author: jake
 *
 * Created on May 17, 2019, 8:41 PM
 */

#ifndef INIT_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <GL/glew.h>
#include <GL/gl.h>
#include <SDL2/SDL.h>
#include "Window.h"
#include "../Game.h"
#include "Engine.h"
#define INIT_H



class Init {
public:
    
    
  /*
     * Starting Function that will init and start the game engine. It will return a non zero number if there is an error
     */
    int run();
    
    Init();
    Init(const Init& orig);
    virtual ~Init();
private:

};

#endif /* ENGINE_H */

