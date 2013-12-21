#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        int i,countword = 0, pos = 0;
        /*while ((i = str.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY",pos)) != string::npos)
        {
            countword++;
            pos = i+1;
            if ((i = str.find_first_of(' ',pos)) == string::npos)
                break;
            else
                pos = i+1;
        }*/
        int len = str.size();
        for (int i=0; i<len; i++){
            if ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
                if( (i!=len-1 && str[i+1]>122 || str[i+1]<65 ||
                     (str[i+1]>=91 && str[i+1]<=96)) || i==len-1)
                     countword++;
        }
        cout << countword << endl;
    }
}
