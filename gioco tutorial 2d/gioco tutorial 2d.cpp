#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

using namespace std;
using namespace sf;

int main()
{
    Window window(VideoMode(640, 480), "giochino", Style::Titlebar | Style::Close) | Style::Resize;
    Event ev;

    while (window.isOpen())
    {
        while (window.pollEvent(ev))
        {

        }
    }
    return 0;
}