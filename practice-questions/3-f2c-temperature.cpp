// Convert the temperature from F to C

#include<bits/stdc++.h>
using namespace std;

int main (){

    float fahrenheit , celcius;
    cout << "Enter the temperature in F : ";
    cin >> fahrenheit;

    celcius = (5.0/9.0) * (fahrenheit - 32);
    cout << "Temperature in C is " << celcius;
    return 0;
}