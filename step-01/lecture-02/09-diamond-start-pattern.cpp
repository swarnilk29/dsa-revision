#include <bits/stdc++.h>
using namespace std;

void erect_pyramid(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";
        cout << endl;
    }
}

void inverted_pyramid(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < 2 * N - (2 * i + 1); j++)
            cout << "*";
        cout << endl;
    }
}

int main()
{
    int N;
    cout << "Enter the number of rows for the half-diamond: ";
    cin >> N;
    erect_pyramid(N);
    inverted_pyramid(N);
    return 0;
}
