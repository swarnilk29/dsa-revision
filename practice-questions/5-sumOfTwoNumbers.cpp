#include<bits/stdc++.h>
using namespace std;

// //one way :- writing with return function

// int sum (int num1, int num2) {// parameters
//     int num3 = num1 + num2;
//     return num3;
// }

// int main (){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int res = sum(num1, num2 );
//     cout << res;


//second way :- writing with void function

void sum (int num1, int num2) {// parameters
    int num3 = num1 + num2;
    cout << num3;
}

int main (){
    int num1, num2;
    cin >> num1 >> num2;
    sum(num1, num2 );
}

