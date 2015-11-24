#include "Player.h"

Player::Player(std::string name) : _name(name), _pokes(std::vector<Pokemon>())
{}

Player::Player(std::string name, Pokemon poke) : _name(name), _pokes(std::vector<Pokemon>())
{
    _pokes.push_back(poke);
}

bool Player::givePokemon(Pokemon p){
    if(!fullParty()){
        _pokes.push_back(p);
        return true;
    }

    return false;
}

