
#include "Library_GLEW.h"
#include <iostream>

ALibrary_GLEW::ALibrary_GLEW()
{
    //ctor
    Name = "GLEW";
    customInitalize = true;
}

ALibrary_GLEW::~ALibrary_GLEW()
{
    //dtor
}

bool ALibrary_GLEW::InitalizeLibrary()
{
    GLenum err = glewInit();
    if (GLEW_OK != err)
    {
      //Print error that glew failed.
      std::cout << "Could not load glew!" << glewGetErrorString(err) << std::endl;
      return false;
    }

    return true;
}

void ALibrary_GLEW::ShutdownLibrary()
{

}
