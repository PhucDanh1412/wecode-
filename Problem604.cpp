#include <bits/stdc++.h>
#define MAX 100
using namespace std;
void input(int a[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
bool checksnt(int n)
{
    if (n < 2)
        return 0;
    else if (n == 2)
        return 1;
    else
    {
        int count = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                count++;
        }
        if (count > 0)
            return 0;
        else
            return 1;
    }
}
int main()
{
    int a[MAX];
    int n, count = 0;
    input(a, n);
    for (int i = 0; i < n; i++)
    {
        if (checksnt(a[i]) == 1)
        {
            cout << a[i] << " ";
        }
        else if (checksnt(a[i]) == 0)
        {
            count++;
        }
    }
    if (count == n)
        cout << "0";
}