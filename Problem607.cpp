#include <iostream>
#define MAX 100
void input(int a[], int &n)
{
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
}
int find_secondmax(int a[], int n)
{
    int max = a[0];
    int sec_max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] > sec_max && a[j] < max)
        {
            sec_max = a[j];
        }
    }
    return sec_max;
}
int main()
{
    int a[MAX];
    int n;
    input(a, n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
            count++;
    }
    if (count == (n - 1))
    {
        std::cout << "0";
    }
    else
    {
        std::cout << find_secondmax(a, n);
    }
}
