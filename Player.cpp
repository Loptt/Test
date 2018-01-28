//
// Created by charles on 24/01/18.
//

#include "Player.h"

Player::Player(sf::Vector2f size, sf::Vector2f position, sf::Vector2u imageCount, float switchTime)
{
    body.setSize(size);
    body.setPosition(position);

    playerTexture.loadFromFile("images/tux_from_linux.png");
    body.setTexture(&playerTexture);

    animation.setImageCount(imageCount);
    animation.setSwitchTime(switchTime);

    animation.textureRect.width  = playerTexture.getSize().x / imageCount.x;
    animation.textureRect.height = playerTexture.getSize().y / imageCount.y;


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

void Player::updateTextureRect()
{
    body.setTextureRect(animation.textureRect);
}

