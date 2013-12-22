/****************************************
Project: 10346
Aurhor:  CHEN YU YUAN
Language: C++
****************************************/
#include <iostream>
using namespace std;


int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        int sum = n;
        while ( n >= k )
        {
            sum = sum + n/k;
            n = n/k + n % k;
        }
        cout << sum << endl;
    }
}
