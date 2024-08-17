#include <iostream>
#include <SDL.h>
#include <SDL_mixer.h>
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
struct Wall
{
    int x, y, h, w;
    Wall(int _x, int _y, int _h, int _w) : x(_x), y(_y), h(_h), w(_w)
    {

    }
    Wall()
    {

    }
    void render(SDL_Renderer* renderer)
    {
        SDL_Rect object;
        object.h = h;
        object.w = w;
        object.x = x;
        object.y = y;
        setColor(renderer, "Coral");
        SDL_RenderFillRect(renderer, &object);
    }
};
struct Obstacle
{
    int x, y, h, w;
    Obstacle(int _x, int _y, int _h, int _w) : x(_x), y(_y),h(_h), w(_w)
    {

    }
    Obstacle()
    {

    }
    void render(SDL_Renderer* renderer)
    {
        SDL_Rect rectangle;
        rectangle.h = h;
        rectangle.w = w;
        rectangle.x = x;
        rectangle.y = y;
        setColor(renderer, "Coral");
        SDL_RenderFillRect(renderer, &rectangle);
    }
};
int main(int argc, char** argv)
{
    SDL_Window* window;
    SDL_Renderer* renderer;
    initSDL(window, renderer, SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);
    Icon icon(25, 25);
    const int max_wall = 4;

    Wall w[max_wall];

    w[0] = Wall(1, 1, 600, 20);

    w[1] = Wall(60, 1, 20, 960);

    w[2] = Wall(980, 20, 580, 20);

    w[3] = Wall(20, 580, 20, 900);
    const int max_obstacle = 59;

    Obstacle o[max_obstacle];

    o[0] = Obstacle (20, 220, 5, 100);

    o[1] = Obstacle (250, 20, 150, 5);

    o[2] = Obstacle (470, 20, 100, 5);

    o[3] = Obstacle (350, 360, 120, 5);

    o[4] = Obstacle (580, 480, 100, 5);

    o[5] = Obstacle (860, 500, 5, 120);

    o[6] = Obstacle (860, 300, 5, 120);

    o[7] = Obstacle (860, 305, 100, 5);

    o[8] = Obstacle (100, 170, 5, 250);

    o[9] = Obstacle (100, 100, 70, 5);

    o[10] = Obstacle (105, 100, 5, 50);

    o[11] = Obstacle (165, 175, 100, 5);

    o[12] = Obstacle (345, 175, 100, 5);

    o[13] = Obstacle (280, 275, 5, 70);

    o[14] = Obstacle (280, 280, 100, 5);

    o[15] = Obstacle (125, 380, 5, 160);

    o[16] = Obstacle (500, 475, 5, 200);

    o[17] = Obstacle (400, 375, 120, 5); // 17

    o[18] = Obstacle (595, 375, 100, 5);

    o[19] = Obstacle (495, 370, 5, 200);

    o[20] = Obstacle (495, 270, 100, 5);

    o[21] = Obstacle (690, 170, 200, 5);

    o[22] = Obstacle (600, 165, 5, 200);

    o[23] = Obstacle (600, 70, 180, 5);

    o[24] = Obstacle (405, 270, 5, 90);

    o[25] = Obstacle (405, 90, 180, 5);

    o[26] = Obstacle (300, 90, 5, 105);

    o[27] = Obstacle (125, 385, 70, 5);

    o[28] = Obstacle (65, 455, 5, 140);

    o[29] = Obstacle (20, 50, 5, 180);

    o[30] = Obstacle (195, 50, 80, 5);

    o[31] = Obstacle (115, 220, 100, 5);

    o[32] = Obstacle (115, 315, 5, 110);

    o[33] = Obstacle (220, 225, 90, 5);

    o[34] = Obstacle (65, 305, 150, 5);

    o[35] = Obstacle (200, 455, 80, 5);

    o[36] = Obstacle (200, 535, 5, 280);

    o[37] = Obstacle (300, 90, 50, 5);

    o[38] = Obstacle (470, 120, 5, 70);

    o[39] = Obstacle (540, 120, 190, 5);

    o[40] = Obstacle (540, 310, 5, 100);

    o[41] = Obstacle (520, 480, 100, 5);

    o[42] = Obstacle (400, 475, 5, 100);

    o[43] = Obstacle (255, 490, 5, 145);

    o[44] = Obstacle (255, 430, 60, 5);

    o[45] = Obstacle (350, 360, 5, 120);

    o[46] = Obstacle (520, 70, 5, 80);

    o[47] = Obstacle (640, 20, 90, 5);

    o[48] = Obstacle (640, 110, 5, 100);

    o[49] = Obstacle (795, 65, 100, 5);

    o[50] = Obstacle (695, 65, 5, 100);

    o[51] = Obstacle (795, 85, 5, 130);

    o[52] = Obstacle (925, 85, 50, 5);

    o[53] = Obstacle (750, 245, 5, 180);

    o[54] = Obstacle (750, 245, 290, 5);

    o[55] = Obstacle (660, 415, 5, 95);

    o[56] = Obstacle (620, 530, 5, 130);

    o[57] = Obstacle (925, 190, 60, 5);

    o[58] = Obstacle (925, 190, 5, 55);
    if(Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, 2, 2048) < 0)
        cout << "Error: " << Mix_GetError() << endl;
    Mix_Music* bgm = Mix_LoadMUS("kahootlobby_22ea657b5375822.mp3");
    if(!Mix_PlayingMusic())
        Mix_PlayMusic(bgm, -1);
    else if(Mix_PausedMusic())
        Mix_ResumeMusic();
    else
        Mix_PausedMusic();

    GetScreenOpen(renderer);
    waitUntilKeyPressed();
    SDL_RenderClear(renderer);
    waitUntilKeyPressed();
    quitSDL(window, renderer);
}
