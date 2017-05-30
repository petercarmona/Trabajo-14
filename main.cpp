#include <iostream>
#include "Torre.h"

using namespace std;

int main()
{
    Torre t;
    Avion avi;
    Avion_S avi_s;
    Avion_M avi_m;
    Avion_L avi_l;
    t.aviones.push_back(& avi);
    t.aviones.push_back(& avi_s);
    t.aviones.push_back(& avi_m);
    t.aviones.push_back(& avi_l);
    for(size_t i = 0; i < t.aviones.size();i++)

    return 0;
}
