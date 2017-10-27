#include <iostream>
#include "Laborator5.h"

using namespace std;

//  Prototipuri
void schimba(int [], int);
int minim(int [], int);


int main(){
    double a[] = {12., -14.2, 7., 23., 5., -71.7, 4.};
    int rez = caut(a, 7, 23);   //  In sir sunt 7 elemente
    if (rez<0)
    cout << "Valoarea lipseste! " << endl;
    else
    cout << "Valoarea cautata este pe pozitia: " << rez + 1 << endl;
    return 0;
}
