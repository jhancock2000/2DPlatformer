#include "Game.h"

Game::Game() {

}

Game::~Game() {

}

void Game::init(const char* title, const int W, const int H) {
	window.create(VideoMode(W, H), title);
}

void Game::events() {
	Event e;
	while (window.pollEvent(e)) {
		if (e.type == Event::Closed) {
			window.close();
		}
	}
}

void Game::update() {
	//idk??
}

void Game::draw() {
	window.clear(Color::White);
	//add drawing code here
	window.display();
}