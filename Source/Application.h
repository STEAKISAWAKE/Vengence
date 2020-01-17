#ifndef AAPPLICATION_H
#define AAPPLICATION_H


class AApplication
{
    public:
        AApplication();
        virtual ~AApplication();

        AApplication(int argc, char** argv) {};

        //Start library's, begin basic function
        void Init() {};

        //Update the UI and other features
        void Update() {};

        //Unload library's and exit application
        void Shutdown() {};

    protected:

    private:
};

#endif // AAPPLICATION_H
