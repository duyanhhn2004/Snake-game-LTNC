#include <iostream>
#include <SDL.h>
#include "header.h"
using namespace std;

const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 600;
const string WINDOW_TITLE = "TONY'S MAZE";

struct Icon
{
    int x = 25, y = 2, h, w;
    Icon(int _h, int _w) : h(_h), w(_w)
    {

    }
    void render(SDL_Renderer* renderer)
    {
        SDL_Rect newIcon;
        newIcon.h = h;
        newIcon.w = w;
        newIcon.x = x;
        newIcon.y = y;
        SDL_Texture* picture = loadTexture("61zEQWk7LtL-removebg-preview.png", renderer);
        SDL_RenderCopy(renderer, picture, NULL, &newIcon);
    }

    void turnLeft()
    {
        x -= 20;
        y -= 0;
    }
    void turnRight()
    {
        x += 20;
        y +=  0;
    }
    void turnUp()
    {
        x -= 0;
        y -= 20;
    }
    void turnDown()
    {
        x += 0;
        y += 20;
    }
};

int main(int argc, char** argv)
{
    SDL_Window* window;
    SDL_Renderer* renderer;
    initSDL(window, renderer, SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);
    Icon icon(25, 25);
    waitUntilKeyPressed();
    quitSDL(window, renderer);
}
