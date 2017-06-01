#ifndef BIRTDAY_H
#define BIRTDAY_H
#include <iostream>
using namespace std;
class birtday
{
    public:
        birtday();
        //birtday(int x=0,int y=0,int z=0);
        void print_birth();
        void print_edad();
        void setbirth(int,int,int);
        //virtual ~birtday()

    private:
        int mes;
        int anio;
        int dia;
};

#endif // BIRTDAY_H
