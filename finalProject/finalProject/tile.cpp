#include "tile.hpp"
#include <iostream>

Tile::Tile(int value, int posX, int posY) : value(value), positionX(posX), positionY(posY) {}
Tile::Tile(){ }

void Tile::render(SDL_Renderer* renderer, TTF_Font* font, int tileSize) {
    SDL_Rect rect = { positionX, positionY, tileSize, tileSize };
    SDL_SetRenderDrawColor(renderer, 12, 153, 245, 255);
    SDL_RenderFillRect(renderer, &rect);
    SDL_Color color = { 250, 252, 252, 255 };  
    std::string text = std::to_string(value);
    SDL_Surface* surface = TTF_RenderText_Solid(font, text.c_str(), color);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_Rect textRect = { positionX + tileSize/2 - surface->w/2, positionY + tileSize/2 - surface->h/2, surface->w, surface->h };
    SDL_RenderCopy(renderer, texture, nullptr, &textRect);
    SDL_FreeSurface(surface);
    SDL_DestroyTexture(texture);
}
void Tile::setPosition( int posX, int posY){
    positionX = posX;
    positionY = posY;
}
