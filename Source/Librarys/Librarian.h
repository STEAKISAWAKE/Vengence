#ifndef ALIBRARYMANAGER_H
#define ALIBRARYMANAGER_H

#include "Library.h"

#include <string>
#include <vector>

class ALibrarian
{
    public:
        ALibrarian();
        virtual ~ALibrarian();

        std::vector<ALibrary*> Librarys;

        ALibrary* GetLibrary(std::string LibraryName);

        virtual bool InitalizeLibrarys();
        virtual void ShutdownLibrarys();

    protected:

    private:
};

#endif // ALIBRARYMANAGER_H
