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
        vector<long long int> box(2);

        for (int i=0; i<num; i++)
        {
           for (int j=0; j< 2; j++)
            {
                cin >> box[j];
            }
           if (box[0] > box[1])
            cout << ">\n";
           else if (box[0] < box[1])
            cout << "<\n";
           else
            cout << "=\n";
        }
    }
}

