#include "torre.h"

torre::torre()
{


}
void torre::mens(){
    for(int i=0;i<avins.size();i++){
        avins[i]->mensaje();
        avins[i]->volar();
    }
   //p->mensaje();

}
void torre::addavions(avion *p){
    //avins[]
    avins.push_back(p);
}
