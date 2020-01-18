#ifndef ALIBRARY_SDL2_H
#define ALIBRARY_SDL2_H

#include "Library.h"

#include <SDL2/SDL.h>


class ALibrary_SDL2 : public ALibrary
{
    public:
        ALibrary_SDL2();
        virtual ~ALibrary_SDL2();

        virtual bool InitalizeLibrary() override;
        virtual void ShutdownLibrary() override;

    protected:

    private:
};

#endif // ALIBRARY_SDL2_H
