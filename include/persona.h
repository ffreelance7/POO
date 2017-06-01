#ifndef PERSONA_H

#define PERSONA_H
#include <string>
#include <iostream>
#include "birtday.h"
using namespace std;

class persona
{
    public:
        persona();
        ~persona();
        virtual void nombre();
        virtual void acupacion();
        virtual void sueldo();
        virtual void edad();
    protected:
        birtday eda;
        string nombr;
        string suelo;
        string ocupacin;
        //int eda;
        bool sexo;
};

#endif // PERSONA_H
