#ifndef VERILOGBASE_H
#define VERILOGBASE_H

#include <QObject>
#include <String>
#include <iostream>

class verilogBase
{

public:
    verilogBase(std::string name);

    std::string getName();
    int         setName(std::string name);

    friend std::ostream& operator<< (std::ostream& salida, verilogBase* obj);

private:
    std::string name;

    
};




#endif // VERILOGBASE_H
