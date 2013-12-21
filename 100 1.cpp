#include<iostream>
using namespace std;

long long ans(long long n)
{
    long long counter = 1;
    while (true)
    {
        if (n == 1)
        {
            break;
        }
        else if (n%2 != 0)
        {
            n = 3 * n + 1;
            counter ++;
        }
        else
        {
            n = n / 2;
            counter++;
        }
    }
        return counter;
}

int main()
{
    long long a,b;
   while(cin >> a >> b){
        cout << a << ' ' << b << ' ';
    if (b > a)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    long long max = 1;
    for (int i=b; i<=a; i++)
        if (max < ans(i))
        {
            max = ans(i);
        }
        cout << max << endl;
    }
}

