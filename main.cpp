#include "Player.h"
#include <iostream>

int main(){
    Pokemon pok = Pokemon("biuhs");
    Player p = Player("Macaco",pok);
    for (int i = 0; i < 8; ++i)
        std::cout<<p.givePokemon(pok)<<std::endl;
}
