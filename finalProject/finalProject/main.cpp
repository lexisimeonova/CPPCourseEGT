#include "board.hpp"
#include "tile.hpp"

const int windowWidth = 300;
const int windowHeight = 380;
const int tileSize = 100;
const int gridSize = 3;

SDL_Window* window = nullptr;
SDL_Renderer* renderer = nullptr;
TTF_Font* font = nullptr;
Board* board = nullptr;
Tile tile;

bool init() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return false;
    }

    if (TTF_Init() == -1) {
        std::cout << "SDL_ttf could not initialize! SDL_ttf Error: " << TTF_GetError() << std::endl;
        return false;
    }

    font = TTF_OpenFont("/Users/aleks/Desktop/puzzleCl/OpenSansBold.ttf", 24);
    if (font == nullptr) {
        std::cout << "Failed to load font! SDL_ttf Error: " << TTF_GetError() << std::endl;
        return false;
    }

    window = SDL_CreateWindow("Slider Puzzle", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, windowWidth, windowHeight, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        std::cout << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return false;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr) {
        std::cout << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return false;
    }
     board = new Board(renderer, font, windowWidth, windowHeight, tileSize, gridSize);
    return true;
}

void closeSDL() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    TTF_CloseFont(font);
    TTF_Quit();
    SDL_Quit();
}

void render() {
    SDL_SetRenderDrawColor(renderer, 99, 135, 158, 255);
    SDL_RenderClear(renderer);
    board->render();
    board->renderStartButton();
    SDL_RenderPresent(renderer);
}

int main() {
    if (!init()) {
        std::cout << "Failed to initialize SDL!" << std::endl;
        return -1;
    }

    bool quit = false;
    int moves = 0;
    SDL_Event event;

    while (!quit) {
        while (SDL_PollEvent(&event) != 0) {
            if (event.type == SDL_QUIT) {
                quit = true;
            } else if (event.type == SDL_MOUSEBUTTONDOWN) {
                int mouseX, mouseY;
                SDL_GetMouseState(&mouseX, &mouseY);
                if (board->isGameWon() && board->isStartButtonClicked(mouseX, mouseY)) {
                    board->shuffle();
                } else {
                    board->moveTile(mouseX, mouseY);
                    moves++;
                }
            }
        }
        render();
    }
    
    closeSDL();
    std::cout << "\nTotal moves made: " << moves << std::endl;
    if (board->isGameWon() != false){
        std::cout << "Game lost!" << std::endl;
    } else{
        std::cout << "Game won!" << std::endl;
    }

    return 0;
}
