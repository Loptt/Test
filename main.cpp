//
// Created by charles on 24/01/18.
//


#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Animation.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(512, 512), "Tower Defense", sf::Style::Close | sf::Style::Titlebar);

    Player player1(sf::Vector2f(100.0,150.0), sf::Vector2f(200.0,200.0), sf::Vector2u(3,9), 0.3f);

    float deltaTime;

    sf::Clock clock;

    while(window.isOpen())
    {
        deltaTime = clock.restart().asSeconds();

        sf::Event evnt;

        while(window.pollEvent(evnt))
        {
            if(evnt.type == evnt.Closed)
            {
                window.close();
            }
        }

        player1.updateAnimation(0, deltaTime);
        player1.updateTextureRect();
        player1.move();

        window.clear(sf::Color::White);
        window.draw(player1.getBody());
        window.display();

        //This is a comment
    }

    return 0;
}