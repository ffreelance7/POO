#include "arreglopersona.h"

arreglopersona::arreglopersona(int x)
{
    tamanio=x;
   // int *pa[5];
    //int **p1;
   // p1=new int*[tamanio];

    /*int e=3;
    p1=&e;
    pa[0]=p1;*/
    p=new persona*[tamanio];
}
arreglopersona::~arreglopersona(){

    delete []p;
}


