#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include "Paddle.h"
#include "Ball.h"

class Game {
private:
	const int windowWidth;
	const int windowHeight;

	Paddle playerPaddle;
	Paddle computerPaddle;

	Ball balls[3];

	sf::Text playerScore;
	sf::Text computerScore;

	void load();
	void render();
	void update(double dt);
	void processInputs();
	void updateScore(sf::Text score);
	bool hasBallScored(Ball ball);
	bool hasBallCollided(Ball ball);
	void processBallCollision(Ball ball);


public:
	void run();
	void reset():

};