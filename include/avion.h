#ifndef AVION_H
#define AVION_H
#include <iostream>
using namespace std;
class avion
{
    public:
        avion();
        virtual void mensaje();
        virtual void volar();
    protected:
        string nombre;
        string marca;

};
    class jety: public avion{
    public:
        jety();
        void mensaje();
        void volar();


};
class helip:public avion{
    public:
        helip();
        void mensaje();
        //void volar();
};

#endif // AVION_H
