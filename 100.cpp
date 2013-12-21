#include<iostream>
using namespace std;


int main()
{
    long long a,b,n,max=0,counter=1;
   while(cin >> a >> b){
        cout << a << ' ' << b << ' ';
    if (b > a)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    long long max = 1;
    for (long long i=b; i<=a; i++)
    {
            n=i;
            counter = 1;
       for(;;) {
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
       if(counter>max)
        max=counter;
    }
        cout << max << endl;
    }
}
