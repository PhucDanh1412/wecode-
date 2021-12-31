#include <iostream>
using namespace std;
#define MAX 100
void Nhapmang(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
bool isBenford(int a[], int n)
{
    int s;
    int count_1 = 0;
    int count_3 = 0;
    for (int i = 0; i < n; i++)
    {
        while (a[i] > 0)
        {
            s = a[i] % 10;
            a[i] /= 10;
        }
        if (s == 1)
        {
            count_1++;
        }
        else if (s == 3)
        {
            count_3++;
        }
    }
    if (count_1 == 3 && count_3 == 1)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int a[MAX], n = 10;
    Nhapmang(a, n);
    if (isBenford(a, n) == true)
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;
    return 0;
}