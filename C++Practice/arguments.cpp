#include <iostream>
using namespace std;

float fToC (float degreesF = 32.0);

int main(){
float fahrenheit, centigrade;
cout << "Enter a Fahrenheit Temp:\t";
cin >> fahrenheit;
centigrade = fToC(fahrenheit); // calling a function is similar in javascript
cout << fahrenheit << "F is " << centigrade << "C";
cout << endl << "Freezing point " << fToC() << " C";

    return 0;
}

float fToC(float degreesF){
    float degreesC = ((5.0/9.0) * (degreesF - 32.0));
    return degreesC;
}