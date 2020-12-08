// 12-07-2020
//Dr. Tyson McMillan Class _ Tarrant County College
//Create Towers of Hanoi game
//Solving problems with recursive function which contains a call to itself.

#include <iostream>
using namespace std;

void moveDisc(int, char, char, char);
int factorialR(int);

int main()
{
	int num;
	cout << "~~ The Tower of Hanoi ~~\n" << endl;
	cout << "Enter the number of disc: ";
	cin >> num; 
	moveDisc(num, 'A', 'C', 'B'); 
	
	cout << "\n************************************************" << endl;
	cout << "Calculate the factorial of a number\n" << endl;
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << "The factorial of " << n << " is: " << factorialR(n) << endl;
	return 0;
}
// The moveDisc function displays a disc move in the "Towers of Hanoi" game
void moveDisc(int num, char fromRod, char toRod, char midRod)
{
	if (num == 1)
	{
		cout << "Move disc 1 from " << fromRod << " to " << toRod << endl;
	}
	else
	{
		moveDisc(num - 1, fromRod, midRod, toRod);
		cout << "Move disc " << num << " from " << fromRod <<" to " << toRod << endl;
		moveDisc(num - 1, midRod, toRod, fromRod);
	}
}

int factorialR(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorialR(n - 1);
}
