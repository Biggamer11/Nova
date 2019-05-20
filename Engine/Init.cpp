/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Engine.cpp
 * Author: jake
 * 
 * Created on May 17, 2019, 8:41 PM
 */

#include "Init.h"

Engine engine;
Game game(&engine);



Init::Init() {
}

Init::Init(const Init& orig) {
}

Init::~Init() {
}


int Init::run() {

    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        printf("SDL_Init failed: %s\n", SDL_GetError());
        return 1;
    }
    
    engine.window.createWindow();
    game.run();
    
    SDL_Quit();

    return 0;
}
