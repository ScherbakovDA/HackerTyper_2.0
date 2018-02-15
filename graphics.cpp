//
// Created by denis on 15.02.18.
//
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Test");

    while (window.isOpen())
    {
        window.display();
    }
    return 0;
}
