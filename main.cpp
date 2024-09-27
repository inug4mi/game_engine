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

    // variables
    GEngine::Variables variables;

    // engine shape
    GEngine::Shape2D shape;

    // engine text
    GEngine::Text text;

    // engine collision
    GEngine::Collision collision;

    // main loop
    while (renderer.wisOpen())
    {
        // events
        renderer.wpollEvents();
        
        // background color
        renderer.wclear(Constants::RED);

        // show content
        renderer.wdisplay();
    }

    return 0;
}
