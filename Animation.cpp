//
// Created by charles on 25/01/18.
//

#include "Animation.h"

Animation::Animation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime)
{
    this->imageCount = imageCount;
    this->switchTime = switchTime;
    totalTime = 0.0f;
    currentImage.x = 0;

    textureRect.width = texture->getSize().x / imageCount.x;
    textureRect.height = texture->getSize().y / imageCount.y;
}

Animation::Animation()
{
    sf::Vector2u def(0,0);

    imageCount = def;
    switchTime = 0.0f;
    totalTime = 0.0f;
    currentImage.x = 0;

    textureRect.width = 0;
    textureRect.height = 0;
}

Animation::~Animation()
{

}

void Animation::update(unsigned int row, float deltaTime)
{
    currentImage.y = row;
    totalTime += deltaTime;

    if(totalTime >= deltaTime)
    {
        totalTime -= switchTime;
        ++currentImage.x;

        if(currentImage.x >= imageCount.x)
        {
            currentImage.x = 0;
        }
    }

    textureRect.left = currentImage.x * textureRect.width;
    textureRect.top = currentImage.y * textureRect.height;
}

void Animation::setImageCount(sf::Vector2u imageCount)
{
    this->imageCount = imageCount;
}

void Animation::setCurrentImage(sf::Vector2u currentImage)
{
    this->currentImage = currentImage;
}

void Animation::setTotalTime(float totalTime)
{
    this->totalTime = totalTime;
}

void Animation::setSwitchTime(float switchTime)
{
    this->switchTime = switchTime;
}
