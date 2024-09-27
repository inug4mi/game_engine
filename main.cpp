#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "renderer.hpp"
#include "shape2D.hpp"
#include "constants.hpp"
#include "text.hpp"
#include "collision.hpp"
#include "variables.hpp"
#include <vector>
#include <iostream>

int main()
{
    // engine window
    GEngine::Renderer renderer(Constants::SCREEN_WIDTH, Constants::SCREEN_HEIGHT, "Engine window");
    renderer.wsetFramerateLimit(12);

    // engine shape
    GEngine::Shape2D shape;

    // engine text
    GEngine::Text text;

    // engine collision
    GEngine::Collision collision;

    sf::VertexArray figure1 = shape.triangle(50,50,50,250,150,250,sf::Color::Yellow);
    sf::CircleShape figure2 = shape.circle(350,20,50,sf::Color::Green);
    // main loop            
    while (renderer.wisOpen())
    {
        // events
        renderer.wpollEvents();
        
        // background color
        renderer.wclear(Constants::BG_COLOR);

        renderer.wdraw(figure1);
        renderer.wdraw(figure2);
        // show content
        renderer.wdisplay();
    }

    return 0;
}
