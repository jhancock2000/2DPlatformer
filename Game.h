#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <stdio.h>
#include <iostream>
using namespace sf;

class Game {
public:
	Game();
	~Game();

	void init(const char* title, const int W, const int H); //init dimensions
	void events();
	void update();
	void draw();

	bool running = true;

private:
	sf::RenderWindow window;
};