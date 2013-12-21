#include <iostream>
#include <string>
using namespace std;
//將每航字串 " " 變成 `` ''

int main()
{
    string s;
    int count = 0;
    while (getline(cin,s))
    {
        int i, pos = 0;
        while( (i = s.find('"',pos)) != string::npos )  //string::npos = -1 ¥i´À´«
       {
           count++;
           if (count % 2 == 1)
           {
               s.replace(i, 1, "``");
               pos = i + 1;
           }
           else
           {
               s.replace(i, 1, "\'\'");
               pos = i + 1;
           }
       }
       cout << s << endl;

    }
}
