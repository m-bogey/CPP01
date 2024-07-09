#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>

class Weapon {
    public:
        Weapon(const std::string &initialType);
        const std::string& getType() const;
        void setType(const std::string& newtype);
    private:
        std::string type;
};

#endif