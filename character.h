#ifndef CHARACTER_H
#define CHARACTER_H
#include <SFML/Graphics.hpp>
#include <vector>

class Character{
private:
    int x;
    int y;
    std::vector<int> body;
    bool inited;
    sf::Texture texture;
public:
    sf::Sprite sprite;
    Character(int _x, int _y );
    void set_pos(int _x,int _y);
    void init();
    void move(int direction);
    
};

#endif // CHARACTER_H