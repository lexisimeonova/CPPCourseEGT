#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_ttf/SDL_ttf.h>
#include "tile.hpp"

class Board {
private:
    SDL_Renderer* _renderer;
    TTF_Font* _font;
    int windowWidth;
    int windowHeight;
    int tileSize = 100;
    static const int gridSize = 3;
    Tile tiles[gridSize][gridSize];
    void swapTiles( int firstTileX, int firstTileY, int secondTileX, int secondTileY);
    
public:
    Board(SDL_Renderer* renderer, TTF_Font* font, int windowWidth, int windowHeight, int tileSize, int gridSize);
    ~Board();
    void render();
    void shuffle();
    void moveTile(int mouseX, int mouseY);
    bool isGameWon();
    bool isStartButtonClicked(int mouseX, int mouseY) const;
    void initializeGrid();
    void renderStartButton();

};

#endif /* BOARD_HPP */
