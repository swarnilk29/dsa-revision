// // code testing file


// #include<bits/stdc++.h>
// using namespace std;

// int main (){
//     int n;
//     cout << "Enter number : ";
//     cin >> n;

//     int i = 2;

//     while (i<n){
//         if (n%i == 0){
//             cout << "Not a Prime Number";
//         }
//         else {
//             cout << "It is a Prime Number";
//         }
        
//     }

// }


#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    if (n <= 1) {
        cout << "Not Prime";
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            count++;
            break;
        }
    }

    if (count == 0)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}
