#ifndef AAPPLICATION_H
#define AAPPLICATION_H

class ALibrarian_Main;
class AWindow;

class AApplication
{
    public:
        AApplication();
        virtual ~AApplication();

        AApplication(int argc, char** argv);

        //Start library's, begin basic function
        void Init();

        //Update the UI and other features
        void Update();

        //Unload library's and exit application
        void Shutdown();

    protected:

    private:
        ALibrarian_Main* Librarian_m;
        AWindow* window;

};

#endif // AAPPLICATION_H
