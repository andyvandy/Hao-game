/*
This is the main controller where we will parse user inputs in the gmaeloop

*/
#include "character.h"

#include  <SFML/Graphics.hpp>
#include <string>


void gameloop(){
    int width= 200;
    int height= 200;
    sf::RenderWindow window(sf::VideoMode(width, height), "Game prototype!");
    
    Character player1(1,1);
    while (1)
    {   
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
           if (event.type == sf::Event::KeyPressed) {
        	   window.close();
           }
        }
        window.clear();
        window.draw(player1.sprite);
        window.display();
        if(!window.isOpen()){
            break;
        }
    }
}

int main(){
    gameloop();
    return 0;
}
