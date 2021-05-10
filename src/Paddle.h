#pragma once
#include <SFML/Graphics.hpp>
class Paddle
{
private:
	const int paddleWidth;
	const int paddleLength;
	const int paddleSpeed;
	int direction

public:
	move(double deltaTime);

};

