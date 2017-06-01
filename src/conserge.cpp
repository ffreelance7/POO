#include "conserge.h"

conserge::conserge(string acu,string nom,int dia,int mes,int anio){
   ocupacin=acu;
    nombr=nom;
    eda.setbirth(dia,mes,anio);
}
void conserge::acupacion(){
    cout<<"ocuapcion : "<<ocupacin<<endl;


}
void conserge::sueldo(){
    cout<<"sueldo : "<<suelo<<endl;


}
void conserge::edad(){
    eda.print_edad();


}
void conserge::nombre(){
    cout<<"Nombre: "<<nombr<<endl;


}

