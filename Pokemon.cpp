#include "Pokemon.h"

Pokemon::Pokemon(std::string name) : _level(_MIN_PKM_LVL_), _name(name)
{ }

Pokemon::Pokemon(std::string name, unsigned int level) : _name(name)
{
    if(level >= _MIN_PKM_LVL_ and level <= _MAX_PKM_LVL_){
        _level = level;
    }
}

std::string Pokemon::getName() const{
    return _name;
}
