#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "Debug lvl:" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\nInfo lvl:" << std::endl;
    harl.complain("INFO");

    std::cout << "\nWarning lvl:" << std::endl;
    harl.complain("WARNING");

    std::cout << "\nError lvl:" << std::endl;
    harl.complain("ERROR");
}