#include <iostream>
#include <SDL.h>
#include "header.h"
using namespace std;

const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 600;
const string WINDOW_TITLE = "TONY'S MAZE";

int main(int argc, char** argv)
{
    SDL_Window* window;
    SDL_Renderer* renderer;

    initSDL(window, renderer, SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);
    waitUntilKeyPressed();
    quitSDL(window, renderer);
}
