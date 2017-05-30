#ifndef TORRE_H
#define TORRE_H
#include <vector>
#include "Avion_S.h"
#include "Avion_M.h"
#include "Avion_L.h"
#include <iostream>

using namespace std;
class Torre
{
    public:

        vector<Avion *> aviones;
        Torre();

        ~Torre();

};

#endif // TORRE_H
