#include<iostream>
#include<string>
using namespace std;

class Calculator
{
public:
	double num1;
	double num2;

	//
	Calculator(double n1, double n2)
	{
		num1 = n1;
		num2 = n2;
	}

	//‰ÁZ
	double add()
	{
		return num1 + num2;
	}

	//Œ¸Z
	double subtract()
	{
		return num1 - num2;
	}

	//æZ
	double multiply()
	{
		return num1 * num2;
	}

	//œZ
	double divide()
	{
		if (num2 == 0)
		{
			cout << "0‚ÅŠ„‚é‚±‚Æ‚Í‚Å‚«‚Ü‚¹‚ñ" << endl;
			return 0;
		}
		return num1 / num2;
	}
};

int main()
{
	int number1;
	int number2;
	int select;
	cout << "”š‚ğ‚QŒÂ“ü—ÍF" << endl;
	cin >> number1, number2;
	Calculator calculator(number1, number2);
	cout << "‚Ç‚ÌŒvZ‚ğs‚¢‚Ü‚·‚©H\n1:‰ÁZ\n2:Œ¸Z\n3:æZ\n4:œZ" << endl;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "Œ‹‰ÊF" << calculator.add() << endl;
		break;
	case 2:
		cout << "Œ‹‰ÊF" << calculator.subtract() << endl;
		break;
	case 3:
		cout << "Œ‹‰ÊF" << calculator.multiply() << endl;
		break;
	case 4:
		cout << "Œ‹‰ÊF" << calculator.divide() << endl;
		break;
	default:
		cout << "–³Œø‚È‘I‘ğ‚Å‚·" << endl;
		break;
	}
}