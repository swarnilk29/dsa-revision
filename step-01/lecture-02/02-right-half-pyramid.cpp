#include <bits/stdc++.h>
using namespace std;

void pattern2(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int N;
    cin >> N; // Read input from input.txt
    pattern2(N);
    return 0;
}
