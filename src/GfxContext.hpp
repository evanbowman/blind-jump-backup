#pragma once

#include <tuple>
#include <SFML/Graphics.hpp>

#include "Rendertype.hpp"

using drawContext = std::tuple<sf::Sprite, float, Rendertype, float>;

struct GfxContext {
    std::vector<drawContext> faces, shadows;
    std::vector<sf::Sprite> glowSprs1, glowSprs2;
    sf::RenderTexture * targetRef;
};