#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>

int main(int argc, char* argv[]) {

    SDL_Window* window = SDL_CreateWindow("Moving Image", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);
    
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    
    SDL_SetRenderDrawColor(renderer, 211, 211, 211, 255);
    
    SDL_Surface* surface = IMG_Load("/Users/aleks/Desktop/courseCpp/SDL_ttf_Events_homework/skiing_icon.png");
       
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    
    int spriteWidth, spriteHeight; //position
    SDL_QueryTexture(texture, NULL, NULL, &spriteWidth, &spriteHeight);
    int x = 0, y = 300 - spriteHeight / 2;
    
    double speed = 100.0;
    SDL_Event event;
    bool running = true;
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
        }
        
        x += speed / 80;
        SDL_Rect dstRect = { x, y, 512, 512};
        
        if (x + spriteWidth >= 800) { //check if sprite reached the window's right side
            speed *= -1; //change direction
        }
        if (x <= 0) { //same for the other side
            speed *= -1;
        }
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, NULL, &dstRect);
        SDL_RenderPresent(renderer);
        speed *= 1.01; //increace
        SDL_Delay(1000 / 80);  // 80 frames/sec
    }
    
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    return 0;
}

