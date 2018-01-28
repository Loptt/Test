//
// Created by charles on 24/01/18.
//
#include <SFML/Graphics.hpp>
#include "Animation.h"

#ifndef TEST_PLAYER_H
#define TEST_PLAYER_H


class Player
{
public:

    Player(sf::Vector2f, sf::Vector2f, sf::Vector2u, float);
    ~Player();

    sf::RectangleShape getBody();

    void move();
    void updateTextureRect();

    Animation animation;

private:

    sf::RectangleShape body;
    sf::Texture playerTexture;



};


#endif //TEST_PLAYER_H
