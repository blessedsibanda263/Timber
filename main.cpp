#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    VideoMode vm({1920, 1080});
    RenderWindow window(vm, "Timber!!!");
    while (window.isOpen())
    {
        if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
        {
            window.close();
        }
        window.clear();
        window.display();
    }
    return 0;
}