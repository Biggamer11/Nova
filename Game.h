/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Game.h
 * Author: jake
 *
 * Created on May 17, 2019, 9:32 PM
 */

#ifndef GAME_H
#include <SDL2/SDL.h>
#include "Engine.h"
#define GAME_H




class Game{
public:
    enum Scene{Startup,MainMenu,Testing,Quit};
    Scene scene;
    int run();
    Game();
    Game(const Game& orig);
    Game(Engine* eng);
    
    virtual ~Game();
private:
    bool quit = false;
    void start();
    void stop();
    void load(Scene scenename);
    void loop();
    Engine* engine;



};

#endif /* GAME_H */

