#include <iostream>
using namespace std;

//find digits
int digits(unsigned long long d)
{
	int len = 0;
	while (d >= 1)
	{
		d /= 10;
		len++;
	}
	return len;
}

int main()
{
	unsigned long long num1, num2;
	while (cin >> num1 >> num2 )
	{
		if (num1 == 0 && num2 ==0)
			break;
	//find max digit
		int digit1, digit2,max;
		digit1 = digits(num1);
		digit2 = digits(num2);
		max = (digit1 > digit2) ? digit1 : digit2;

	//count
		int devbase = 10, counter = 0;
		for (int i=0; i<max; i++)
		{
			//
			if ((num1 % devbase + num2 % devbase) >= devbase)
				counter++;
			devbase *= 10;
		}

	//output
		if (counter == 0)
			cout << "No carry operation." << endl;
		else if (counter == 1)
			cout << counter << " carry operation." << endl;
		else
			cout << counter << " carry operations." << endl;
	}
}


