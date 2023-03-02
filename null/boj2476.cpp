//https://www.acmicpc.net/problem/2476

#include <iostream>
using namespace std;

int main()
{
    //cout << "input n: ";
    int n, result{ 0 };
    cin >> n;

    while (n > 0)
    {
        //cout << "input x, y, z: ";
        int x, y, z, temp;
        cin >> x >> y >> z;

        // x == y == z
        if (x == y && y == z) temp = 10000 + 1000 * x;
        else if (x != y && y != z && x != z)
        {
            int bigInt = (x > y ? x > z ? x : z : y > z ? y : z);
            temp = bigInt * 100;
        }
        else
        {
            if (x == y) temp = 1000 + x * 100;
            else if (x == z) temp = 1000 + x * 100;
            else temp = 1000 + y * 100;
        }

        if (temp > result) result = temp;
        n--;
    }
    cout << result;
}