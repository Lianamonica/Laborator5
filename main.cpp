#include <iostream>
#include "Laborator5.h"

using namespace std;

//  Prototipuri
void schimba(int [], int);
int minim(int [], int);


int main(){
    int a[] = {12, -14, 7, 23, 5, -71, 4};
    schimba(a, 7);   //  In sir sunt 7 elemente
    int mini = minim(a, 7);
    cout << "Minimul valorilor dupa schimbarea semnelor este: " << mini << endl;
    return 0;
}
