# include "HumanB.hpp"

HumanB::HumanB(const std::string& name): name(name), weapon(NULL) {}

void    HumanB::setWeapon(Weapon& newWeapon)
{
    weapon = &newWeapon;
}

void    HumanB::attack() const
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << "No weapon" << std::endl;
}