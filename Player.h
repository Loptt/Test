//
// Created by charles on 24/01/18.
//
#include <SFML/Graphics.hpp>
#include <iostream>

#ifndef TEST_PLAYER_H
#define TEST_PLAYER_H


class Player
{
public:

    Player();
    ~Player();

    sf::RectangleShape getBody();

    void move();

private:

    sf::RectangleShape body;
    sf::Texture playerTexture;

};


#endif //TEST_PLAYER_H
