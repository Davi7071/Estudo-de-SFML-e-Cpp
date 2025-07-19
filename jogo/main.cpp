#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::ContextSettings settings;
    settings.antiAliasingLevel = 8;
    
    sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "Andarilho", sf::Style::Default, sf::State::Windowed, settings);
    
    sf::RectangleShape rectangle({ 120.f,120.f });
    
    sf::Texture playerTexture;
    if (!playerTexture.loadFromFile("C:/Users/User/source/repos/jogo/jogo/Assets/Player/Textures/spritesheet.png", false))
    {
        std::cout << "Falha no carregamento" << std::endl;
    }

    sf::Sprite sprite(playerTexture);
    int XIndex = 0;
    int YIndex = 0;
    sprite.setTextureRect(sf::IntRect({ XIndex * 64, YIndex * 64 }, { 64, 64 }));
    sprite.scale(sf::Vector2f(2, 2));
    
    while (window.isOpen())
    {
        while (const std::optional<sf::Event> event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }

            if (auto keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (keyPressed->scancode == sf::Keyboard::Scancode::W)
                {
                    sf::Vector2f position = sprite.getPosition();
                    sprite.setPosition(position + sf::Vector2f(0, -10));
                }
                if (keyPressed->scancode == sf::Keyboard::Scancode::A)
                {
                    sf::Vector2f position = sprite.getPosition();
                    sprite.setPosition(position + sf::Vector2f(-10, 0));
                }
                if (keyPressed->scancode == sf::Keyboard::Scancode::S)
                {
                    sf::Vector2f position = sprite.getPosition();
                    sprite.setPosition(position + sf::Vector2f(0, 10));
                }
                if (keyPressed->scancode == sf::Keyboard::Scancode::D)
                {
                    sf::Vector2f position = sprite.getPosition();
                    sprite.setPosition(position + sf::Vector2f(10, 0));
                }
            }
        }
        window.clear(sf::Color::Black);
        window.draw(sprite);
        window.display();
    }  
    return 0;
    }
    
