#include "birtday.h"

birtday::birtday(){


}

void birtday::print_birth(){

    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;

}
void birtday::print_edad(){
    int anioactual=2017;
    int edad;
    if(anio!=0){
        edad=anioactual-anio;
        cout<<edad<<endl;
    }else{
        cout<<"No se ingreso edad"<<endl;
    }


}
void birtday::setbirth(int x,int y,int z){
    dia=x;
    mes=y;
    anio=z;

}
