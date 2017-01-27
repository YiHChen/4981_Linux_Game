#ifndef GAME_HPP
#define GAME_HPP
#include<SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include "Window.hpp"
#include "headers/Player.h"
#include "headers/Level.h"
#include "LTexture.hpp"

class GameState;

class Game {
private:

	// Current game state
	GameState* state = NULL;
	Level level;

public:

	// Game window
	Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	SDL_Surface* screenSurface = NULL;
	SDL_Texture* levelTexture = NULL;

	Player player;


	LTexture playerTexture;
	SDL_Rect playerSpriteClips[1];


	bool init();
	bool loadMedia();
	SDL_Surface* loadSurface( std::string path );
	SDL_Texture* loadTexture( std::string path );
	void run();
	void close();

};



#endif
