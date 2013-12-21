#include <iostream>
using namespace std;


int main()
{
   string code;
   while (getline(cin, code)){
    int len = code.size();
    for (int i=0; i<len; i++)
        cout << char(code[i]-7);
    cout << endl;
   }
}
