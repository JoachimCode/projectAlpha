#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "My window", sf::Style::Default);
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(60);
    sf::Clock clock;


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

    }

    return 0;
}
