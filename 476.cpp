#include <iostream>
using namespace std;


int main()
{
  float ary[10][4];
  int i=0;
  while (cin.get() == 'r')      //如果第一個字是r 就吃舉行左上加右下座標
  {
    cin >> ary[i][0] >> ary[i][1] >> ary[i][2] >> ary[i][3];
    cin.get();
    i++;
  }

  int j=0;
  float xy[100][2];
  while (cin.get() == '\n')     //上面如果結束 表示*被吃掉 剩下空行
  {
      cin >> xy[j][0] >> xy[j][1];
      if ((xy[j][0] > 9999) && (xy[j][1] > 9999.9)){
        cin.get();
        break;
      }
      j++;

  }

    int a,b=0;
  for (a=0; a<j; a++){
    for (b=0; b<i; b++){
        if ( xy[a][0] > ary[b][0] && xy[a][0] < ary[b][2]
            && xy[a][1] < ary[b][1] && xy[a][1] > ary[b][3]
            )
            break;
    }
    if (b == i)
        cout << "Point " << a+1 << " is not contained in any figure" << endl;
    else
        cout << "Point " << a+1 << " is contained in figure " << b+1 << endl;
  }
}




