#include<iostream>
#include<cmath>
using namespace std;
#define MAX 1000

bool Prime[MAX + 1];
void sieve()
{

    for (int i=0; i<=MAX; i++)
        Prime[i] = 1;

    for (int i=4; i<=MAX; i+=2 )
        Prime[i] = false;

    for (int i=3; i*i<=MAX ; i+=2 )
    {
        if (Prime[i])
        {
            for (int j=i*i; j<=MAX; j+=i)
                Prime[j] = false;
        }
    }

}
int main()
{
    sieve();
    int N,C;
    while (cin >> N >> C){
    cout << N << ' ' << C << ': ';
    int K = 0;
    for (int i=1; i<N; i++)
    {
        if(Prime[i])
        {
            K++;
        }
    }

    if (K % 2 == 0)
    {
        int count = C*2;
            for (int i=1; i<N; i++)
            {
                if(Prime[i])
                {
                    cout << i << ' ';
                    count--;
                }
                if (count == 0 )
                    break;
            }
        }
    }

    }


