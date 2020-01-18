#include "Window.h"

AWindow::AWindow()
{
    //ctor
}

AWindow::~AWindow()
{
    //dtor
}

bool AWindow::OpenWindow()
{
    sdl_window = SDL_CreateWindow(
          "Vengence",
          SDL_WINDOWPOS_UNDEFINED,
          SDL_WINDOWPOS_UNDEFINED,
          1080,
          720,
          SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE
    );

    if(sdl_window == nullptr)
    {
        //Print to log that the window could not be created
        return false;
    }

    return true;
}

void AWindow::CloseWindow()
{
    if(sdl_window != nullptr)
    {
        SDL_DestroyWindow(sdl_window);
    }
    else
    {
        //Log/Print that the window was not open.
    }
}
