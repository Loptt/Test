//
// Created by charles on 25/01/18.
//

#ifndef TEST_ANIMATION_H
#define TEST_ANIMATION_H

#include <SFML/Graphics.hpp>

class Animation
{
public:

    //Constructors and Destructors
    Animation(sf::Texture *texture, sf::Vector2u imageCount, float switchTime);
    Animation();
    ~Animation();

    void update(unsigned int row, float deltaTime);

    sf::IntRect textureRect;

private:

    sf::Vector2u imageCount;
    sf::Vector2u currentImage;

    float totalTime;
    float switchTime;

};


#endif //TEST_ANIMATION_H
