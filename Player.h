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

    Player(sf::Vector2f, sf::Vector2f, sf::Vector2u, float, float);
    ~Player();

    sf::RectangleShape getBody();

    void update();

private:

    sf::RectangleShape body;
    sf::Texture playerTexture;
    float speed;
    unsigned int row;
    bool faceRight;

    Animation animation;



};


#endif //TEST_PLAYER_H
