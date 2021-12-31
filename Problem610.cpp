#include <iostream>
#define MAX 100
using namespace std;
void input_arrayA(int a[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void input_arrayB(int b[], int &m)
{
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
}
void sort(int &a, int &b)
{
    int danh = a;
    a = b;
    b = danh;
}
void connect(int a[], int &n, int b[], int &m, int c[], int &l)
{
    l = 0;
    int i = 0;
    int j = 0;
    while (n > 0)
    {
        c[l++] = a[i];
        i++;
        n--;
    }
    while (m > 0)
    {
        c[l++] = b[j];
        j++;
        m--;
    }
}
void sort_array(int c[], int l)
{
    for (int i = 0; i < l - 1; i++)
        for (int j = i + 1; j < l; j++)
            if (c[i] > c[j])
                sort(c[i], c[j]);
}
void output(int c[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << c[i] << " ";
    }
}
int main()
{
    int a[MAX], b[MAX], c[MAX];
    int n, m, l;
    input_arrayA(a, n);
    input_arrayB(b, m);
    connect(a, n, b, m, c, l);
    sort_array(c, l);
    output(c, l);
}