#include "Librarian_Main.h"

ALibrarian_Main::ALibrarian_Main()
{
    Librarys = std::vector<ALibrary*> { new ALibrary_SDL2(), new ALibrary_GLEW() };
}

ALibrarian_Main::~ALibrarian_Main()
{
    for(int i = 0; i < int(Librarys.size()); i++)
    {
        delete Librarys[i];
    }
}
