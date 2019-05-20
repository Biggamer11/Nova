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
    blankScreen();
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

void Window::setRes(int x, int y){
    SDL_SetWindowSize(window, x, y);
    blankScreen();
}

void Window::setTitle(char* title) {
    SDL_SetWindowTitle(window, title);
}





void Window::blankScreen() {
        // Select the color for drawing. It is set to red here.
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

        // Clear the entire screen to our selected color.
        SDL_RenderClear(renderer);

        // Up until now everything was drawn behind the scenes.
        // This will show the new, red contents of the window.
        SDL_RenderPresent(renderer);
}


