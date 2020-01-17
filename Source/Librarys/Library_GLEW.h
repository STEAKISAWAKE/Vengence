#ifndef ALIBRARY_GLEW_H
#define ALIBRARY_GLEW_H

#include "Library.h"

#define GLEW_STATIC
#include <GL/glew.h>


class ALibrary_GLEW : public ALibrary
{
    public:
        ALibrary_GLEW();
        virtual ~ALibrary_GLEW();



        bool InitalizeLibrary() override;
        void ShutdownLibrary() override;

    protected:

    private:
};

#endif // ALIBRARY_GLEW_H
