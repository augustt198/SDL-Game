//
//  TexCoordSys.h
//  SDL_Game
//
//  Created by staff on 7/26/13.
//  Copyright (c) 2013 staff. All rights reserved.
//

#ifndef __SDL_Game__TexCoordSys__
#define __SDL_Game__TexCoordSys__

#include <iostream>
#include "SDL/SDL.h"


class CoordSystem
{
  
private:
    int Xinterval;
    int Yinterval;
    int x;
    int y;
    int Xcoord;
    int Ycoord;
    int img_height;
    int img_width;
    SDL_Surface *img = NULL;
    
    
    
    
    
public:
    
    //constructors and destructors
    CoordSystem();
    CoordSystem(int x);
    ~CoordSystem();
    
    //methods
    int getWidth();
    
    
    
};

#endif /* defined(__SDL_Game__TexCoordSys__) */
