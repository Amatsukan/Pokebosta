#include <string>
#define _MAX_RATE_ 100

class Item{
protected:
    std::string _name;
    unsigned int _value;
    bool _is_tradeble;
public:
    Item(std::string name, unsigned int value, bool is_tradeble) : _name(name), _value(value), _is_tradeble(is_tradeble)
    {};

    Item() : _name(""), _value(0), _is_tradeble(false)
    {};

    std::string getName() const{
        return _name;
    }

    bool is_tradeble(){
        return _is_tradeble;
    }

    unsigned int value(){
        return _value;
    }

    unsigned int tradeValue(){
        return _value/2;
    }
};

class Pokeball : public Item{
    unsigned int rate;
};

class Key : public Item{

};

class Misc : public Item{

};
