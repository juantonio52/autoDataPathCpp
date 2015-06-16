
#ifndef VERILOGDERIVADA_H
#define VERILOGDERIVADA_H

#include <verilogbase.h>

using namespace std;

class verilogDerivada : public verilogBase
{
public:
    verilogDerivada(string name);




  friend ostream& operator << (ostream& salida, verilogDerivada* obj);

};




#endif // VERILOGDERIVADA_H
