#include <iostream>
using namespace std;


int main()
{
  float ary[10][4];
  int i=0;
  while (cin.get() == 'r')      //�p�G�Ĥ@�Ӧr�Or �N�Y�|�楪�W�[�k�U�y��
  {
    cin >> ary[i][0] >> ary[i][1] >> ary[i][2] >> ary[i][3];
    cin.get();
    i++;
  }

  int j=0;
  float xy[100][2];
  while (cin.get() == '\n')     //�W���p�G���� ���*�Q�Y�� �ѤU�Ŧ�
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




