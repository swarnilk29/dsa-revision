// Chef can think at a speed of Y bits per second, but if that speed goes above a limit X, his brain starts making mistakes.

// 👉 Your job is to check if Chef’s current speed (Y) is above his safe limit (X).

// If Y > X, print YES (Chef will make mistakes).


#include <iostream>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
	// your code goes here
	if ( y > x){
	    cout << "Yes" << endl;
	}
	else {
	    cout <<"No" << endl;
	}
	return 0;
}
