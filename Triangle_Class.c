//11-11-2020
// Dr.Tyson MacMillan Class_ Tarrant County College
// this program demonstrates a simple class
#include <iostream>
using namespace std;

//declaring the triangle class. 
class Triangle
{
private:
	double base;
	double height;
public:
	void setBase(double);
	void setHeight(double);
	double getBase() const;
	double getHeight() const;
	double getArea() const;
};
//a function that allows us to set the base of a given triangle
void Triangle::setBase(double b)
{
	base = b;
}
//a function that allows us to set the height of a given triangle
void Triangle::setHeight(double h)
{
	height = h;
}
//a function that returns the base of a given triangle
double Triangle::getBase() const
{
	return base;
}
//a function that returns the height of a given triangle
double Triangle::getHeight() const
{
	return height;
}
//a function that calculates and returns the area of a given triangle
double Triangle::getArea() const
{
	return base * height / 2;
}

int main()
{
	double number; //declare local variables for temporary storage of numbers
	double totalArea;
	Triangle firstTriangle; //three different instances of the triangles with different properties
	Triangle secondTriangle;
	Triangle thirdTriangle;

	cout << "What is the first triangle's base?\t"; //ask user for input about first triangle's base
	cin >> number;
	firstTriangle.setBase(number); //set the first triangle's base
	cout << "What is the first triangle's height?\t"; //ask user for input about first triangle's height
	cin >> number;
	firstTriangle.setHeight(number); //set the first triangle's height

	cout << "What is the second triangle's base?\t"; //ask user for input about second triangle's base
	cin >> number;
	secondTriangle.setBase(number); //set the second triangle's base
	cout << "What is the second triangle's height?\t"; //ask user for input about second triangle's height
	cin >> number;
	secondTriangle.setHeight(number); //set the second triangle's height

	cout << "What is the third triangle's base?\t"; //ask user for input about third triangle's base
	cin >> number;
	thirdTriangle.setBase(number); //set the third triangle's base
	cout << "What is the third triangle's height??\t"; //ask user for input about third triangle's height
	cin >> number;
	thirdTriangle.setHeight(number); //set the third triangle's height

	totalArea = firstTriangle.getArea() + secondTriangle.getArea() + thirdTriangle.getArea(); //get individual areas of each and add

	cout << "The total area of the three triangles is " << totalArea << endl; //output total area to user

	return 0; //done
}
