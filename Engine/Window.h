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
#define WINDOW_H

class Window {
public:
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;
    int createWindow();
    void distroyWindow();
    
    SDL_Window* getWindow();
    SDL_Renderer* getRenderer();

    
    Window();
    Window(const Window& orig);
    virtual ~Window();
private:
    
};

#endif /* WINDOW_H */

