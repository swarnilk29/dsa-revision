// code testing file


#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cout << "Enter number : ";
    cin >> n;

    int i = 2;

    while (i<n){
        if (n%i == 0){
            cout << "Not a Prime Number";
        }
        else {
            cout << "It is a Prime Number";
        }
        
    }

}