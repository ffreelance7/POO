#include <string>
#include <iostream>
#include <torre.h>
#include <avion.h>
#include <arreglopersona.h>
#include <gerente.h>
#include <conserge.h>
using namespace std;


int main()
{
//    persona pers,v1,v2,v3;
    gerente c1("gerente 1","bryan"),c2("gerente 2","david",10,5,1990);
    conserge v1("consergue 1","falipe",01,12,1992),v2("conserge 2","oracio",18,1,1880);
    //persona aa;
    arreglopersona a(4);
    a.p[0]=&c1;
    a.p[1]=&c2;
    a.p[2]=&v1;
    a.p[3]=&v2;

    for(int i=0;i<4;i++){
        a.p[i]->acupacion();
        a.p[i]->nombre();
        a.p[i]->edad();
    }

    /*torre p1;
    jety v1,v2;
    helip h1,h2;
    p1.addavions(&v1);
    p1.addavions(&h1);
    p1.addavions(&h2);
    p1.addavions(&v2);
    p1.mens();*/


//    p1.mens(&v1);
  //  p1.mens(&h1);
    //for(int i=0;i<2;i++){

    //}
//    p1.mens()
//    arreglopersona(3);

    //arreglopersona[1];

    return 0;
}
