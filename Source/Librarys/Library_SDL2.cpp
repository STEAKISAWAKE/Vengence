#include "Library_SDL2.h"

#include <iostream>

ALibrary_SDL2::ALibrary_SDL2()
{
    //ctor
    Name = "SDL2";
}

ALibrary_SDL2::~ALibrary_SDL2()
{
    //dtor
}

bool ALibrary_SDL2::InitalizeLibrary()
{
    if ( SDL_Init( SDL_INIT_EVERYTHING ) != 0 )
    {
        std::cout << "Unable to initialize SDL: %s" << SDL_GetError() << std::endl;
        return false;
    }

    SDL_GL_CreateContext(nullptr);

    // Request compatibility because GLEW doesn't play well with core contexts.
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_COMPATIBILITY);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
    SDL_GL_SetAttribute(SDL_GL_ACCELERATED_VISUAL, 1);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 32);

    return true;
}

void ALibrary_SDL2::ShutdownLibrary()
{
    SDL_Quit();
}
