#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
#include "LTexture.hpp"

class Player
{
public:
    void create(); //function displays character

    void setX(float px); //set x coordinate

    void setY(float py); //set y coordinate

    void setDX(float px); //set delta x coordinate

    void setDY(float py); //set delta y coordinate

    void setVelocity(int pvel); // set velocity of player movement

    float getX(); // get x coordinate

    float getY(); // get y coordinate

    float getDX(); // get delta x coordinate

    float getDY(); //get delta y coordinate

    int	getVelocity(); // get velocity of player movement

    std::string getSpritePath();//returns path of players sprite

	Player();
	~Player();
	
	LTexture playerTexture;
	SDL_Rect playerSpriteClips[1];
	
private:
    float x = 200; //x coordinate
    float y = 200; //y coordinate
    float dx; // delta x coordinat
    float dy; //delta ycoordinate
    int velocity = 100; // velocity of player movement
    int health;
    int state; //used to select sprite to display
    std::string spritePath = "assets/texture/arrow.png";
	

};

#endif
