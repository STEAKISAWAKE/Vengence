#include "Application.h"

int main(int argc, char** argv)
{
    AApplication App(argc, argv);

    App.Init();
    App.Update();
    App.Shutdown();

}
