/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Game.cpp
 * Author: jake
 * 
 * Created on May 17, 2019, 9:32 PM
 */

#include "Game.h"

Game::Game() {
}

Game::Game(const Game& orig) {
}

Game::~Game() {
}

Game::Game(Engine* eng){
    engine = eng;
}




int Game::run() {
    SDL_Delay(2000);
    SDL_SetWindowSize(engine->window.getWindow(), 1920,1080);
    SDL_Delay(2000);
    return 0;
}

void Game::start() {

}

void Game::stop() {

}

void Game::load(Scene scenename) {
    scene = scenename;
}

void Game::loop() {
    while (!quit) {
        switch (scene) {
            case Startup:
                break;

            case MainMenu:
                break;

            case Testing:
                break;

            case Quit:
                quit = false;
                break;
        }
    }
}





