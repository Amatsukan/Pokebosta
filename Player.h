#include <vector>
#include <string>
#include "Pokemon.h"
#include "Item.h"
#include <typeinfo>

class Player{
private:
    std::string _name;
    std::vector<Pokemon> _pokes;

    int numberOfPokes(){
        return _pokes.size();
    }

public:
    Player(std::string name);
    Player(std::string name, Pokemon poke);

    bool fullParty(){
        return numberOfPokes() >= 6;
    }

    bool givePokemon(Pokemon p);
};

template <typename T>
class Bag<T>{
private:
    std::vector<T> itens;
public:
    Bag();
};

template <typename T>
Bag<T>::Bag(){
    if(typeid(T) == typeid(Pokeball) or typeid(T) == typeid(Misc) or typeid(T) == typeid(Key)){
        itens = std::vector<T>();
    } else{

    }
}
