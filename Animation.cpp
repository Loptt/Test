//
// Created by charles on 25/01/18.
//

#include "Animation.h"

Animation::Animation(sf::Texture *texture, sf::Vector2u imageCount, float switchTime)
{
    this->imageCount = imageCount;
    this->switchTime = switchTime;
    totalTime = 0.0f;
    currentImage.x = 0;

    textureRect.width = texture->getSize().x / imageCount.x;
    textureRect.height = texture->getSize().y / imageCount.y;
}

Animation::~Animation()
{

}
