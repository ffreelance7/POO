#ifndef GERENTE_H
#define GERENTE_H
#include "persona.h"

class gerente:public persona
{
    public:
        gerente(string,string,int x=0,int y=0,int z=0);
       // ~gerente();
        virtual void nombre();
        virtual void acupacion();
        virtual void sueldo();
        virtual void edad();


};

#endif // GERENTE_H
