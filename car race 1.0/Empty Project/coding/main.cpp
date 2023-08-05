#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "kshitiz");
    sf::CircleShape shape(200.f);
    sf::RectangleShape rectangle(sf::Vector2f(120.f, 50.f));

    rectangle.setFillColor(sf::Color::White);
    shape.setFillColor(sf::Color::Yellow);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        // window.draw(shape);
        window.draw(rectangle);
        
        window.display();
    }

    return 0;
}