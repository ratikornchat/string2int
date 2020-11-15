#include <iostream>
//#include <string>

using namespace std;

int convert(string s)
{
	int result = 0;
	int countDigit = 1;
	for (int i = s.length(); i >= 0; i--)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			int num = 0;
			num = s[i] - '0';
			result += num * countDigit;
			//cout << num << endl;
			countDigit *= 10;
		}
	}
	return result;
}

int main()
{
	string input = "";
	cin >> input;
	cout << "output: " <<convert(input) << endl;
	//system("pause");
	return 0;
}