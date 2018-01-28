#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Animation.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(512, 512), "Tower Defense", sf::Style::Close | sf::Style::Titlebar);

    Player player1;
    Animation animation;

    while(window.isOpen())
    {
        sf::Event evnt;
        while(window.pollEvent(evnt))
        {
            if(evnt.type == evnt.Closed)
            {
                window.close();
            }
        }

        player1.move();

        window.clear(sf::Color::White);
        window.draw(player1.getBody());
        window.display();
    }

    return 0;
}