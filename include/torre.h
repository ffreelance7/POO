#ifndef TORRE_H
#define TORRE_H
#include <vector>
#include <avion.h>
class torre
{
    public:
        torre();
        void mens();
        void addavions(avion *);
    private:
        vector<avion *>avins;
};

#endif // TORRE_H
