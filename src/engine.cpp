
#include "engine.hpp"

namespace GEngine {
    Engine::Engine(int width, int height, const std::string& title)
        : renderer(width, height, title) {
            constants.SCREEN_WIDTH  = width;
            constants.SCREEN_HEIGHT = height;
        }

    void Engine::run() {
        sf::VertexArray figure1 = shape.triangle(50, 50, 50, 250, 150, 250, sf::Color::Yellow);
        sf::CircleShape figure2 = shape.circle(350, 250, 50, sf::Color::Green);

        renderer.wsetFramerateLimit(12);

        while (renderer.wisOpen()) {
            renderer.wpollEvents();
            renderer.wclear(sf::Color(55,55,0));

            // render your game logic and stuff
            renderer.wdraw(figure1);
            renderer.wdraw(figure2);

            // ######

            renderer.wdisplay();
        }
    }
}
