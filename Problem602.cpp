#include <bits/stdc++.h>
#define MAX 1000
using namespace std;
void input(int a[], int &n)
{
    cout << "nhap vao so n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
void hoanvi(int &a, int &b)
{
    int danh = a;
    a = b;
    b = danh;
}
void sort1(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                hoanvi(a[i], a[j]);
}
void sort2(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j])
                hoanvi(a[i], a[j]);
}
void output_chan(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] << "   ";
        }
    }
}
void output_le(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            cout << a[i] << "   ";
        }
    }
}
int main()
{
    char option[100];
    gets(option);
    while (option == 'yes")
    {
        int a[MAX];
        int n;
        input(a, n);
        cout << "so chan tang dan la: ";
        sort1(a, n);
        output_chan(a, n);
        cout << endl;
        cout << "so le giam dan la: ";
        sort2(a, n);
        output_le(a, n);
        gets(option);
    }
}