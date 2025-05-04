// Upper, Lower or Numeric ?

#include<bits/stdc++.h>
using namespace std;

int main (){
    char n;
    cout << "Enter the value for n" << endl;
    cin >> n;

    if (n>='a' && n<='z'){
        cout << "LowerCase" << endl;
    }
    else if(n>='A' && n<='Z'){
        cout << "UpperCase" << endl;
    }
    else if (n>='0' && n<='9'){
        cout << "Numeric" << endl;
    }
    return 0;
}