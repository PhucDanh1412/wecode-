#include <iostream>
using namespace std;
#define MAX 100
void input(int a[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
int delete_array(int a[], int &n, int x)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            for (int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
            i--;
            count++;
        }
    }
    if(count==0)
        return -1;
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
    int n, x;
    input(a, n);
    cin >> x;
    delete_array(a, n, x);
    output(a, n);
}