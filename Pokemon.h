#define _MAX_PKM_LVL_ 100
#define _MIN_PKM_LVL_ 1
#include <string>

class Pokemon{
private:
    int _level;
    std::string _name;

public:
    Pokemon(std::string name);

    Pokemon(std::string name, unsigned int level);

    std::string getName() const;
};
