#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    VideoMode vm({1920, 1080});
    RenderWindow window(vm, "Timber!!!");

    Texture textureBackground;

    textureBackground.loadFromFile("graphics/background.png");

    Sprite spriteBackground(textureBackground);
    spriteBackground.setTexture(textureBackground);
    spriteBackground.setPosition({0, 0});

    while (window.isOpen())
    {
        if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
        {
            window.close();
        }
        window.clear();
        window.draw(spriteBackground);
        window.display();
    }
    return 0;
}