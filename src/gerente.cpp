#include "gerente.h"
#include <iostream>

using namespace std;
gerente::gerente(string acu,string nom,int di,int mes,int anio){
    ocupacin=acu;
    nombr=nom;
    eda.setbirth(di,mes,anio);
}
void gerente::acupacion(){
    cout<<"ocuapcion : "<<ocupacin<<endl;


}
void gerente::sueldo(){
    cout<<"sueldo : "<<suelo<<endl;


}
void gerente::edad(){
    eda.print_edad();


}
void gerente::nombre(){
    cout<<"nombre:"<<nombr<<endl;


}

