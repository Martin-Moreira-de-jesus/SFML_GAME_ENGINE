//
// Created by Martin Moreira de Jesus on 17/10/2021.
//

#ifndef SFML_GAME_ENGINE_TILE_H
#define SFML_GAME_ENGINE_TILE_H

#include "BetterSprite.hpp"

class Tile {
protected:
    BetterSprite m_sprite;
    std::shared_ptr<sf::RenderWindow> m_gameWindow;
public:
    Tile(const float &posX, const float &posY, const sf::Texture &texture);

    Tile(const float &posX, const float &posY, const unsigned &size, const sf::Color &color);

    void render() const;
};


#endif //SFML_GAME_ENGINE_TILE_H
