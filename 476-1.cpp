#include <iostream>
using namespace std;


int main()
{

  double ary[10][4];
  int i=0;
  while (cin.get() == 'r')      //�p�G�Ĥ@�Ӧr�Or �N�Y�|�楪�W�[�k�U�y��
  {
    if( i>= 10)
        break;
    cin >> ary[i][0] >> ary[i][1] >> ary[i][2] >> ary[i][3];
    cin.get();
    i++;
  }

  int j=0;
  double x = 0.0,y = 0.0 ;
  while (cin >> x >> y)     //�W���p�G���� ���*�Q�Y�� �ѤU�Ŧ�
  {
      if ((x == 9999.9) && (y == 9999.9)){
        break;
      }
    j++;
    int count = 0;
    for (int b=0; b<i; b++){
        if ( x > ary[b][0] && x < ary[b][2]
            && y < ary[b][1] && y > ary[b][3]
            ){
            cout << "Point " << j << " is contained in figure " << b+1 << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "Point " << j << " is not contained in any figure" << endl;
  }
}
