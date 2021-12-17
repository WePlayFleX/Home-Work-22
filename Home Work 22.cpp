#include <iostream>

using namespace std;

bool Check(int a)
{
	int b = 2;
	if (a > 0)
	{
		while (b * b <= a)
		{
			if (a % b == 0)
			{
				return false;
			}
			b++;
		}
		return true;
	}
	else
	{
		cout << "Error " << endl;
	}
}
int main()
{
	int iNum = 0;
	cout << "Enter number: " << endl;
	cin >> iNum;
	Check(iNum);
	bool iRes;
	iRes = Check(iNum);
	cout <<"Rezult: " << iRes << endl;
	cout << endl;
	system("pause");
	return 0;
}