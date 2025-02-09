// CollisionDetector.hpp
#pragma once
#include <SFML/Graphics.hpp>

namespace GEngine {
    class Collision {
    public:
        template <typename T>
        bool between(const T &shape1, const T &shape2){
            return shape1.getGlobalBounds().intersects(shape2.getGlobalBounds());
        }
    };
}
