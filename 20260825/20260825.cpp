#include<iostream>
#include <string>
using namespace std;

class Dog
{
public:
	string Name;

	void ShowProfile()
	{
		cout << "–¼‘O:" << Name << endl;
	}
};

int main()
{
	Dog dog;
	dog.Name = "‚ä‚¤‚Ð";
	dog.ShowProfile();

	return 0;
}