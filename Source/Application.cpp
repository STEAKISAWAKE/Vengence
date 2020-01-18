#include "Application.h"

#include "Librarian_Main.h"
#include "Window.h"

AApplication::AApplication()
{
    //ctor

    Librarian_m = new ALibrarian_Main();

}

AApplication::AApplication(int argc, char** argv)
{
    Librarian_m = new ALibrarian_Main();
}

AApplication::~AApplication()
{
    delete Librarian_m;
}

void AApplication::Init()
{
    Librarian_m->InitalizeLibrarys();

    window->OpenWindow();
    SDL_GL_CreateContext(window->sdl_window);

    //Custom library initalization for GLEW.
    Librarian_m->GetLibrary("GLEW")->InitalizeLibrary();

}

void AApplication::Update()
{
    while (true)
    {
      // SDL Events
      SDL_Event event;
      if (SDL_PollEvent(&event))
      {
        if (event.type == SDL_QUIT)
        {
          // Break out of the loop on quit
          break;
        }
      }

      //App logic


    }
}

void AApplication::Shutdown()
{

    window->CloseWindow();

    Librarian_m->ShutdownLibrarys();


}
