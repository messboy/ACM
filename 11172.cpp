/****************************************
Project:
Aurhor:  CHEN YU YUAN
Language: C++
****************************************/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num = 0;
    while (cin >> num)
    {
       int size = num*2;
       vector<long long int> box(size);
       for (int i=0; i< size; i++)
       {
           cin >> box[i];
       }

       for (int i=0; i<size; i = i+2)
       {
           if (box[i] > box[i+1])
            cout << ">\n";
           else if (box[i] < box[i+1])
            cout << "<\n";
           else
            cout << "=\n";
       }
    }
}

