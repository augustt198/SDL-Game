//
//  LoadImage.cpp
//  SDL_Game
//
//  Created by staff on 7/21/13.
//  Copyright (c) 2013 staff. All rights reserved.
//

#include "LoadImage.h"
#include <SDL/SDL.h>
#include <SDL_image/SDL_image.h>
#include <string>
using namespace std;


void LoadImage(SDL_Surface *OptimizedImage, string filename)
{
    SDL_Surface *TempImage = NULL;
    TempImage = IMG_Load(filename.c_str() );
    
    if(TempImage != NULL)
    {
        //image loaded correctly
        OptimizedImage = SDL_DisplayFormat(TempImage);
        SDL_FreeSurface(TempImage);
        
    }
    else
    {
        cout<<"ERR: Image not loaded onto surface!"<<endl;
    }
    
}