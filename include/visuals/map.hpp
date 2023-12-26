#include <SFML/Graphics.hpp>


class Map{
    public:
        Map();
        ~Map();
        void draw(sf::RenderWindow &window);
    private:
        sf::Texture texture;
        sf::Sprite sprite;
};