#include <bits/stdc++.h>
using namespace std;

void pattern11(int N)
{
    int start = 1;
    for (int i = 0; i < N; i++)
    {
        start = (i % 2 == 0) ? 1 : 0;

        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;  // toggle between 1 and 0
        }
        cout << endl;
    }
}

int main()
{
    int N;
    cout << "Enter number of rows: ";
    cin >> N;
    pattern11(N);
    return 0;
}
