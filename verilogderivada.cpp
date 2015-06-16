#include "verilogderivada.h"

verilogDerivada::verilogDerivada(string name) : verilogBase(name)
{
    cout << "constructor derivado llamado" << endl;
}



ostream& operator<< (ostream& salida, verilogDerivada* obj)
{
    return salida << "soy la clase derivada y " << obj->getName() << endl;


}
