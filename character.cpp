#include "character.h"




void Character::init(){
    texture.loadFromFile("roguelikeChar_transparent.png");
}
void Character::set_pos(int _x,int _y){
    x=_x;
    y=_y;
}

Character::Character(int _x, int _y ){
    this->init();
    x=_x;
    y=_y;
    body= {0,0};
    sf::IntRect rect={body[0]*17,body[1]*17,16,16};
    sprite = sf::Sprite(texture,rect);
}
void Character::move(int direction){
    switch(direction){
        case 0:
            y-=1;
            break;
        case 1:
            x+=1;
            break;
        case 2:
            y+=1;
            break;
        case 3:
            x-=1;
            break;

    }
    sprite.setPosition(x,y);
}