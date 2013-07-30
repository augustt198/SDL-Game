//
//  button.cpp
//  SDL_Game
//
//  Created by staff on 7/21/13.
//  Copyright (c) 2013 staff. All rights reserved.
//

#include "button.h"

Button::Button(int mHeight, int mWidth, int mX, int mY, string mTitle)
{
    height = mHeight;
    width = mWidth;
    x = mX;
    x = mY;
    title = mTitle;
    
}

bool Button::Click()
{
    //return true or false
}

bool Button::Highlight()
{
    //return true or false
}

void Button::Action(string type)
{
    
    //something TBD later... 
}
Button::~Button()
{
    
}
