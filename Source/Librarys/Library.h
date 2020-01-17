#ifndef ALIBRARY_H
#define ALIBRARY_H

#include <string>

class ALibrary
{
    public:
        ALibrary();
        virtual ~ALibrary();

        std::string Name = "Unnamed Library";

        virtual bool InitalizeLibrary() { return false; }
        virtual void ShutdownLibrary() { }

    protected:

    private:
};

#endif // ALIBRARY_H
