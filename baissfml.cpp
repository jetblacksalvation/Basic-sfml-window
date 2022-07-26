// Top-Down.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include "movecheck.h"
sf::RenderWindow window({ 1200,1200 }, "baisc sfml");
//object rotation 


bool keys[] = { false, false, false, false }; //array to hold keyboard input

int main()
{
	window.setFramerateLimit(60.0);
	sf::CircleShape player(50);
	player.setFillColor(sf::Color::White);

	sf::Vector2f pos(0,0);
	player.setPosition(pos);
    sf::Event event;
    std::cout << "Hello World!\n";
    while (window.isOpen() == true) {
		input(keys, event, window);
		pos.y += vy;
		pos.x += vx;
		player.setPosition(pos);

		window.clear(sf::Color::Black);
		window.draw(player);

		window.display();

    }
}
//side relation formula--vvvv
/*
    
    sqrt(Sx^2 = x^2+y^2)/x^2

*/



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
