#include "board.hpp"
#include <random>

Board::Board(SDL_Renderer* renderer, TTF_Font* font, int windowWidth, int windowHeight, int tileSize, int gridSize) : _renderer(renderer), _font(font), windowWidth(windowWidth), windowHeight(windowHeight) {
    shuffle();
}

Board::~Board() {}

void Board::render() {
    for (int y = 0; y < gridSize; ++y) {
        for (int x = 0; x < gridSize; ++x) {
            int tileValue = tiles[y][x].value;
            SDL_Rect tileRect = {x * tileSize, y * tileSize, tileSize, tileSize};

            if (tileValue != 0) {
                tiles[y][x].render(_renderer, _font, tileSize);
            } else {
                SDL_SetRenderDrawColor(_renderer, 200, 200, 200, 255); //Blank tile
                SDL_RenderFillRect(_renderer, &tileRect);
            }
        }
    }
}

void Board::swapTiles(int firstTileX, int firstTileY, int secondTileX, int secondTileY){
    int temp = tiles[firstTileY][firstTileX].value;
    tiles[firstTileY][firstTileX].value = tiles[secondTileY][secondTileX].value;
    tiles[secondTileY][secondTileX].value = temp;
}

void Board::initializeGrid() {
    for (int y = 0; y < gridSize; ++y) {
        for (int x = 0; x < gridSize; ++x) {
            int tileValue = y * gridSize + x + 1;
            tiles[y][x].value = tileValue;
            tiles[y][x].setPosition(x * tileSize, y * tileSize);
            std::cout<< tiles[x][y].value;
        }
    }
    tiles[gridSize - 1][gridSize - 1].value = 0;
}

void Board::shuffle() {
    initializeGrid();
    
    std::random_device rd;
    std::mt19937 g(rd());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(0, 2); //Distribution in range [1, 6]

    for (int i =1; i<9; ++i){
        int firstSwapX  = dist6(rd);
        int firstSwapY = dist6(rd);
        int secondSwapX = dist6(rd);
        int secondSwapY = dist6(rd);
        swapTiles(firstSwapX, firstSwapY, secondSwapX, secondSwapY);
    }
}
void Board::moveTile(int mouseX, int mouseY) {
    int clickedTileX = mouseX/tileSize;
    int clickedTileY = mouseY/tileSize;

    int blankTileX = -1; //Find blank tile posititonX
    int blankTileY = -1; //Same w/h y
    for (int y = 0; y < gridSize; ++y) {
        for (int x = 0; x < gridSize; ++x) {
            if (tiles[y][x].value == 0) {
                blankTileX = x;
                blankTileY = y;
                break;
            }
        }
        if (blankTileX != -1) {
            break;
        }
    }
    if ((std::abs(clickedTileX - blankTileX) == 1 && clickedTileY == blankTileY) ||
        (std::abs(clickedTileY - blankTileY) == 1 && clickedTileX == blankTileX)) {
        swapTiles(clickedTileX, clickedTileY,blankTileX, blankTileY);
    }
}

bool Board::isGameWon() {
    return true;
}

bool Board::isStartButtonClicked(int mouseX, int mouseY) const {
    int buttonX = windowWidth/2 - 50;
    int buttonY = windowHeight - 50;
    return (mouseX >= buttonX && mouseX <= buttonX + 100 && mouseY >= buttonY && mouseY <= buttonY + 50);
}

void Board::renderStartButton() {
    SDL_Rect buttonRect = {windowWidth/2 - 50, windowHeight - 50, 100, 50};
    SDL_SetRenderDrawColor(_renderer, 12, 153, 245, 255);
    SDL_RenderFillRect(_renderer, &buttonRect);

    SDL_Color textColor = {255, 255, 255, 255};
    std::string text = "Start";
    SDL_Surface* textSurface = TTF_RenderText_Solid(_font, text.c_str(), textColor);
    SDL_Texture* textTexture = SDL_CreateTextureFromSurface(_renderer, textSurface);
    SDL_Rect textRect = {windowWidth/2 - textSurface->w/2, windowHeight - 40, textSurface->w, textSurface->h};
    SDL_RenderCopy(_renderer, textTexture, nullptr, &textRect);

    SDL_FreeSurface(textSurface);
    SDL_DestroyTexture(textTexture);
}


