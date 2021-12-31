#include <iostream>
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
void delete_array(int a[], int &n, int position, int num)
{
    do
    {
        for (int i = position; i < n - 1; i++)
            a[i] = a[i + 1];
        n--;
        num--;
    } while (num > 0);
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
    int n, position, num;
    input(a, n);
    cin >> position;
    cin >> num;
    delete_array(a, n, position, num);
    output(a, n);
}