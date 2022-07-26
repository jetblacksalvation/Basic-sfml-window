#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

struct playerpos {
	int x, y;

};
enum DIRECTIONS { LEFT, RIGHT, UP, DOWN }; //left is 0, right is 1, up is 2, down is 3


int vx = 0;
int vy = 0;

void input(bool keys[], sf::Event& event, sf::RenderWindow& window ) {
	while (window.pollEvent(event)) {//events

		if (event.type == sf::Event::EventType::Closed)
			window.close();
		//KEYBOARD INPUT 
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
			keys[LEFT] = true;

		}
		else keys[LEFT] = false;

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
			keys[RIGHT] = true;

		}
		else keys[RIGHT] = false;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
			keys[UP] = true;

		}
		else keys[UP] = false;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
			keys[DOWN] = true;

		}
		else keys[DOWN] = false;
	}
	if (keys[LEFT] == true)
	{
		vx = -5;
	}

	else if (keys[RIGHT] == true)
	{
		vx = 5;
	}
	else vx = 0;
	if (keys[UP] == true)
	{
		vy = -5;

	}
	else if (keys[DOWN] == true)
	{
		vy = 5;

	}

	else { vy = 0; vx; }// The laws of momentum do not apply to Mr. Pac


};


