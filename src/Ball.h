#pragma once
#include <SFML/Graphics.hpp>
class Ball
{
private:
	const int originalX;
	const int originalY;
	const int radius;
	int direction;
	double speed;
public:
	Ball(int originalX, int originalY);

	void move(double deltaTime);
	void resetBall();
	int calculateBounceDirection();
	int getRadius();
	int getDirection();
	int getSpeed();
	void setDirection(int direction);
	void setSpeed(int speed);
	

};

