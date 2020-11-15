#include <iostream>
//#include <string>

using namespace std;

int convert(string s)
{
	//-----------------------------------------------------------------
	//When entering the value that is greater than the MAX of integer, this code will not return the correct value
	//But since the instruction didn't mention anything about user prompting, so nothing will be happen when integer input is exceeded the MAX
	//One thing that can be done to make this case looks better is setting the result to zero(0) by the code in //*
	//But since zero(0) is not the correct value anyway, I assume that returning any other incorrect value will not make any difference
	//-----------------------------------------------------------------
	int result = 0;
	int countDigit = 1;
	for (int i = s.length(); i >= 0; i--)//start from the end to find the smaller digit
	{
		if (s[i] >= '0' && s[i] <= '9')//check if character is a number
		{
			int num = 0;
			num = s[i] - '0';//find value of a numeric character by comparing to 0, it is kept in a variable just to make things clear
			result += num * countDigit;//multiply number with its digit to make the correct value, then add each digit in the result
			//cout << num << endl;
			countDigit *= 10;//move to the greater digit
			//******************************
			//if (countDigit > 1000000000)
			//{
			//	return 0;
			//}
			//******************************
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