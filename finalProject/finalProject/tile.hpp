#ifndef tile_hpp
#define tile_hpp

#include <SDL2/SDL.h>
#include <SDL2_ttf/SDL_ttf.h>

class Tile {
private:
    int positionX;
    int positionY;
public:
    int value;
    Tile();
    Tile(int value, int posX, int posY);
    void render(SDL_Renderer* renderer, TTF_Font* font, int tileSize);
    void setPosition(int posX, int posY);
};

#endif /* tile_hpp */
