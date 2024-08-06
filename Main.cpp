#include <SFML/Graphics.hpp>
#include "Game.h";


int main()
{
    Game game;
    game.init("Platformer", 1920, 1080);

    while (game.running) {
        game.events();
        game.update();
        game.draw();
    }

}