#include "Librarian.h"

ALibrarian::ALibrarian()
{
    Librarys = std::vector<ALibrary>();
}

ALibrarian::~ALibrarian()
{
    //dtor
}

ALibrary* ALibrarian::GetLibrary(std::string LibraryName)
{
    bool foundLibrary = false;

    for(int i = 0; i < Librarys.size(); i++)
    {
        if(Librarys[i].Name == LibraryName)
        {
            foundLibrary = true;
            return &Librarys[i];
            break;
        }
    }


}
