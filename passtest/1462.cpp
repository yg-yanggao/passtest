#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        char a[50][50];
        memset(a, '*', sizeof(a));
        for (int i = 1 + (n - m) / 2; i <= (n - m) / 2 + m; i++)
            for (int j = 1 + (n - m) / 2; j <= (n - m) / 2 + m; j++)
                a[i][j] = ' ';
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cout << a[i][j];
            cout << endl;
        }
    }
}
