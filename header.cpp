#include <iostream>
#include <SDL_image.h>
#include "header.h"
#include <SDL.h>
using namespace std;

void logSDLError(ostream& os, const string &msg, bool fatal)
{
     os << msg << " Error: " << SDL_GetError() << endl;
     if (fatal)
     {
         SDL_Quit();
         exit(1);
     }
}
void initSDL(SDL_Window* &window, SDL_Renderer* &renderer, const int SCREEN_WIDTH, const int SCREEN_HEIGHT,const string WINDOW_TITLE)
{
     if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
        logSDLError(cout, "SDL_Init", true);
     window = SDL_CreateWindow(WINDOW_TITLE.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
     //window = SDL_CreateWindow(WINDOW_TITLE.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_FULLSCREEN_DESKTOP);
     if (window == nullptr) logSDLError(cout, "CreateWindow", true);
     //Khi thông thường chạy với môi trường bình thường ở nhà
        renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
     //Khi chạy ở máy thực hành WinXP ở trường (máy ảo)
        //renderer = SDL_CreateSoftwareRenderer(SDL_GetWindowSurface(window));
     if (renderer == nullptr) logSDLError(cout, "CreateRenderer", true);
     SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");
     SDL_RenderSetLogicalSize(renderer, SCREEN_WIDTH, SCREEN_HEIGHT);
}

void quitSDL(SDL_Window* window, SDL_Renderer* renderer)
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
void waitUntilKeyPressed()
{
     SDL_Event e;
     while (true)
     {
         if ( SDL_WaitEvent(&e) != 0 && (e.type == SDL_KEYDOWN || e.type == SDL_QUIT) )
            return;
         SDL_Delay(100);
     }
}
SDL_Texture* loadTexture(string path, SDL_Renderer* renderer)
{
    SDL_Texture* newTexture = nullptr;
    SDL_Surface* loadSurface = IMG_Load(path.c_str());
    if(loadSurface == nullptr)
    {
        cout << "Unable to load image " << path << " SDL_Image Error: " << IMG_GetError() << endl;
    }
    else
    {
        newTexture = SDL_CreateTextureFromSurface(renderer, loadSurface);
        if(newTexture == nullptr)
        {
            cout << "Unable to create texture from " << path << " SDL_Error: " << SDL_GetError() << endl;
        }
        SDL_FreeSurface(loadSurface);
    }
    return newTexture;
}
bool CrashInto(int x, int y, int w, int h, int ox, int oy, int ow, int oh) // kiểm tra va chạm
{
    bool flag = false;
    if(x + w > ox && x < ox + ow && y + h > oy && y < oy + oh)
        flag = true;
    return flag;
}
