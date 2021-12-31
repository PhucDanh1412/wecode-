#include <iostream>
using namespace std;

int largest_input()
{
    int x;
    int max = 0;
    cin >> x;
    if (x > max)
        x = max;
    if (x == 0)
    {
        cout << max;
    }
    largest_input();
}
int main()
{
    cout << largest_input();
}