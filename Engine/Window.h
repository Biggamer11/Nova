/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Window.h
 * Author: jake
 *
 * Created on May 17, 2019, 9:11 PM
 */

#ifndef WINDOW_H
#include <SDL2/SDL.h>
#include <iostream>
#include <cstdlib>
#define WINDOW_H

class Window {
public:
    int createWindow();
    void distroyWindow();
    
    SDL_Window* getWindow();
    SDL_Renderer* getRenderer();
    
    void blankScreen();

    void setRes(int x, int y);
    void setTitle(char* title);
    
    Window();
    Window(const Window& orig);
    virtual ~Window();
    
private:
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;
    
};

#endif /* WINDOW_H */

