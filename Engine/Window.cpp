/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Window.cpp
 * Author: jake
 * 
 * Created on May 17, 2019, 9:11 PM
 */

#include "Window.h"

Window::Window() {
}

Window::Window(const Window& orig) {
}

Window::~Window() {
}

int Window::createWindow() {
    window = SDL_CreateWindow("untitled",SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,640,480,SDL_WINDOW_OPENGL);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED || SDL_RENDERER_PRESENTVSYNC);
    
    return 0;
}

void Window::distroyWindow() {
    SDL_DestroyWindow(window);
}


SDL_Window* Window::getWindow() {
    return window;
}

SDL_Renderer* Window::getRenderer() {
    return renderer;
}

