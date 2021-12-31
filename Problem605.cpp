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
void insert(int a[], int &n, int x, int position)
{
    for (int i = n; i > position; i--)
    {
        a[i] = a[i - 1];
    }
    a[position] = x;
    n++;
}
void output(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[MAX];
    int n, x, position;
    input(a, n);
    cin >> x;
    cin >> position;
    insert(a, n, x, position);
    output(a, n);
}