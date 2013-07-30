//
//  main.cpp
//  SDL_Game
//
//  Created by staff on 7/21/13.
//  Copyright (c) 2013 staff. All rights reserved.
//

#include <iostream>
#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>

using namespace std;

#define WIDTH 640
#define HEIGHT 480
#define WINDOW_TITLE "SDL Game"

SDL_Surface *screen;

void render()
{
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    
}

int SDL_main(int argc, char **argv)
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    screen = SDL_SetVideoMode(WIDTH, HEIGHT, 0, SDL_OPENGL | SDL_RESIZABLE);
    
    if (!screen) {
        cout<<"Error making window: "<<SDL_GetError()<<endl;
        SDL_Quit();
        exit(2);
    }
    
    SDL_WM_SetCaption(WINDOW_TITLE, NULL);
    bool done = false;
    while(!done){
        SDL_Event event;
        
        // Respond to any events that occur
        while(SDL_PollEvent(&event))
        {
            switch(event.type)
            {
                case SDL_VIDEORESIZE:
                    screen = SDL_SetVideoMode(event.resize.w,
                                              event.resize.h, 0,
                                              SDL_OPENGL | SDL_RESIZABLE);
                    if(screen)
                    {
                        // reshape(screen->w, screen->h);
                    }
                    else
                    {
                        ; // Oops, we couldn't resize for some reason.
                        // This should never happen
                    }
                    break;
                    
                case SDL_QUIT:
                    done = true;
                    break;
                    
                    
            }
        }
        
        Uint8 *keys = SDL_GetKeyState(NULL);
        if( keys[SDLK_ESCAPE] ) {
            done = true;
        }
        
        // Draw the screen
        render();
        
        SDL_GL_SwapBuffers();
    }
    
    SDL_Quit();
    return 0;
}





