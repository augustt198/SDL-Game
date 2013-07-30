//
//  button.h
//  SDL_Game
//
//  Created by staff on 7/21/13.
//  Copyright (c) 2013 staff. All rights reserved.
//

#ifndef __SDL_Game__button__
#define __SDL_Game__button__

#include <iostream>
#include <string>
#include <SDL/SDL.h>

using namespace std;

class Button
{

private:
    //vars
    int height;
    int width;
    int x;
    int y;
    string title;
    SDL_Rect button = {100, 100, 100, 100};
    
    
public:
    
    //constructor and destructor
    Button(int mHeight, int mWidth, int mX, int mY, string mTitle);
    ~Button();
    
    //Methods
    bool Click();
    bool Highlight();
    void Action(string type);
    
    
};

#endif /* defined(__SDL_Game__button__) */


