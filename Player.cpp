//
// Created by charles on 24/01/18.
//

#include "Player.h"

Player::Player()
{
    body.setSize(sf::Vector2f(100.0,100.0));
    body.setPosition(sf::Vector2f(200.0,200.0));

    playerTexture.loadFromFile("player_texture.png");
    body.setTexture(&playerTexture);
}

Player::~Player()
{

}

sf::RectangleShape Player::getBody()
{
    return body;
}

void Player::move()
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    {
        body.move(sf::Vector2f(0.1,0.0));
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
    {
        body.move(sf::Vector2f(-0.1,0.0));
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
    {
        body.move(sf::Vector2f(0.0,-0.1));
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
    {
        body.move(sf::Vector2f(0.0,0.1));
    }
}
