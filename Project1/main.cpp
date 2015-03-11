#include <iostream>
#include<cstdlib>


using namespace std;

double getnum1(double n1, double n2)
{
	double x;
	x = n1 / n2;
	return x;
}
double getnum2(double n1, double n2)
{
	double x;
	x = n1 / n2;
	return x;
}
double add(double n1, double n2)
{
	double x;
	x = n1 + n2;
	return x;
}
double subtract(double n1, double n2)
{
	double x;
	x = n1 - n2;
	return x;
}
double multiply(double n1, double n2)
{
	double x;
	x = n1 * n2;
	return x;
}
double divide(double n1, double n2)
{
	double x;
	x = n1 / n2;
	return x;
}

void print(double result)
{
	cout << "the answer is :" << result << endl;
	int denom, spare, count = 1;
	int numer = 0;
	denom = 1;
	while (result != 0 && count < 6)
	{
		result = result * 10;
		numer *= 10;
		numer += (int)result;
		spare = (int)result;
		denom *= 10;
		result = result - spare;
		count++;
	}
	cout << "the answer in fraction form is " << endl;
	cout << numer << endl;
	cout << "------" << endl;
	cout << denom << endl;
}


int main()
{
	int ans = 5;
	double num1, num2, result;
	double numer1, denom1, numer2, denom2;
	cout << "enter first numbers numerator ";
	cin >> numer1;
	cout << "enter first number denominator ";
	cin >> denom1;
	cout << "enter second numbers numerator ";
	cin >> numer2;
	cout << "enter second number denominator ";
	cin >> denom2;
	while (ans != 0)                   
	{
		cout << "enter 1 to add; 2 to subtract; 3 to multiply; 4 to divide and 0 to EXIT" << endl;
		cin >> ans;

		if (ans != 0 &&  denom1 != 0 &&  denom2 != 0)
		{
			if (ans == 1)
			{
				num1 = getnum1(numer1, denom1);
				num2 = getnum2(numer2, denom2);
				result = add(num1, num2);
				print(result);
				system("Pause");
			}
			if (ans == 2)
			{
				num1 = getnum1(numer1, denom1);
				num2 = getnum2(numer2, denom2);
				result = subtract(num1, num2);
				print(result);
				system("Pause");
			}
			if (ans == 3)
			{
				num1 = getnum1(numer1, denom1);
				num2 = getnum2(numer2, denom2);
				result = multiply(num1, num2);
				print(result);
				system("Pause");
			}
			if (ans == 4)
			{
				num1 = getnum1(numer1, denom1);
				num2 = getnum2(numer2, denom2);
				result = divide(num1, num2);
				print(result);
				system("Pause");
			}
		}

	}system("pause");
	return 0;
}

