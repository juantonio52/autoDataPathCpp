#include "verilogbase.h"

verilogBase::verilogBase(std::string name)
{
    std::cout << name << std::endl;

    this->name = name;

}

std::string verilogBase::getName()
{
    return this->name;
}

int verilogBase::setName(std::string name)
{
    this->name = name;
    return 0;
}



std::ostream& operator<< (std::ostream& salida, verilogBase* obj)
{
    return salida << "I'm base class and my name is: " << obj->getName() << std::endl;
}
