//
// Created by charles on 24/01/18.
//

#include "Player.h"

Player::Player(sf::Vector2f size, sf::Vector2f position, sf::Vector2u imageCount, float switchTime, float speed) :
    animation(&playerTexture, imageCount, switchTime)
{
    this->speed = speed;
    row = 0;
    faceRight = false;

    body.setSize(size);
    body.setPosition(position);

    playerTexture.loadFromFile("images/tux_from_linux.png");
    body.setTexture(&playerTexture);
}

Player::~Player()
{

}

sf::RectangleShape Player::getBody()
{
    return body;
}

void Player::update(float deltaTime)
{
    sf::Vector2f movement(0.0,0.0);

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        movement.x += speed * deltaTime;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        movement.x -= speed * deltaTime;

    if(movement.x == 0.0f)
    {
        row = 0;
    }
    else
    {
        row = 1;
        faceRight = movement.x > 0.0f;
    }


    animation.update(0, deltaTime);
}
