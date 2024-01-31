#include <iostream>
#include "clsString.h"

using namespace std;



int main()
{

    clsString string2("What ,Is ,Going .on");


    cout << clsString::RemovePunctuation("What ,Is ,Going .on") << endl;
}
