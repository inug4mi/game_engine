#pragma once

#include <SFML/Graphics.hpp>

namespace GEngine{
    class Constants{
    public:
        int SCREEN_WIDTH;
        int SCREEN_HEIGHT;
    
        const sf::Color BG_COLOR = sf::Color(15,15,15); 
        const sf::Color GRID_COLOR = sf::Color(30,30,30);
        const sf::Color TEXT_COLOR = sf::Color(20,20,20);
        const sf::Color RED = sf::Color(255,20,20);
};
}