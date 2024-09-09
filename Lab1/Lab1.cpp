#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;
    int highest = 0;
    cout << "Enter the value for a ==> ";
    cin >> a;
    cout << "Enter the value for b ==> ";
    cin >> b;
    cout << "Enter the value for c ==> ";
    cin >> c;
    cout << "Enter the value for d ==> ";
    cin >> d;
    cout << "Enter the value for e ==> ";
    cin >> e;
    if (a > highest)
    {
        highest = a;
    }
    if (b > highest)
    {
        highest = b;
    }
    if (c > highest)
    {
        highest = c;
    }
    if (d > highest)
    {
        highest = d;
    }
    if (e > highest)
    {
        highest = e;
    }
    cout << "\nThe Highest is ==> " << highest << endl;
    int lowest = a;
    if (b < lowest)
    {
        lowest = b;
    }
    if (c < lowest)
    {
        lowest = c;
    }
    if (d < lowest)
    {
        lowest = d;
    }
    if (e < lowest)
    {
        lowest = e;
    }
    cout << "\nThe Lowest is ==> " << lowest << endl;
}