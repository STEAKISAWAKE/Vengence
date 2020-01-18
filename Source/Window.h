#ifndef AWINDOW_H
#define AWINDOW_H

#include "Library_SDL2.h"

class AWindow
{
    public:
        AWindow();
        virtual ~AWindow();

        bool OpenWindow();
        void CloseWindow();

        SDL_Window* sdl_window;

    protected:

    private:
};

#endif // AWINDOW_H
