#ifndef CONSERGE_H
#define CONSERGE_H
#include "persona.h"

class conserge:public persona{

    public:
        conserge(string,string,int x=0,int y=0,int z=0);
       //~conserge();
        void nombre();
        virtual void acupacion();
        virtual void sueldo();
        virtual void edad();

};

#endif // CONSERGE_H
