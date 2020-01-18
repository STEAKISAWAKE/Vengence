#include "Librarian.h"

#include <iostream>


ALibrarian::ALibrarian()
{
    Librarys = std::vector<ALibrary*>();
}

ALibrarian::~ALibrarian()
{
    //dtor
}

ALibrary* ALibrarian::GetLibrary(std::string LibraryName)
{
    int elementFound = 0;

    for(int i = 0; i < int(Librarys.size()); i++)
    {
        if(Librarys[i]->Name == LibraryName)
        {
            elementFound = i;
            break;
        }
    }

    return Librarys[elementFound];
}

bool ALibrarian::InitalizeLibrarys()
{
    bool failed = false;

    for(int i = 0; i < int(Librarys.size()); i++)
    {
        if(!Librarys[i]->customInitalize && Librarys[i]->InitalizeLibrary() == false)
        {
            std::cout << "Initalizing library " << Librarys[i]->Name << " failed!" << std::endl;
            //Print out the library that failed and log it
            failed = true;
            break;
        }
    }

    if(failed)
        return false;
    else
        return true;
}

void ALibrarian::ShutdownLibrarys()
{
    for(int i = 0; i < int(Librarys.size()); i++)
    {
        Librarys[i]->ShutdownLibrary();
    }
}
