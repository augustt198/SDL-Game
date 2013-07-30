//
//  SurfaceEngine.cpp
//  SDL_Game
//
//  Created by staff on 7/21/13.
//  Copyright (c) 2013 staff. All rights reserved.
//

#include "SurfaceEngine.h"
#include <SDL/SDL.h>
#include <iostream>

using namespace std;

//apply normal SDL_Surface
void ApplySurface(int x, int y, SDL_Surface *source, SDL_Surface *destination)
{
    SDL_Rect pos;
    pos.x = x;
    pos.y = y;
    SDL_BlitSurface(source, NULL, destination, &pos);
}

//fill rectangles
void ApplySurface(int x, int y, SDL_Rect *mRect, SDL_Surface *destination, Uint32 color)
{
    SDL_FillRect(destination, mRect, color);
    
}

void ApplySurface(){
    
}

