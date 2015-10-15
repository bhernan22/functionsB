// Bianca Hernandez
// Created: October 13, 2015
// Summary: 
//
//******************************************

#include <iostream>
#include <string>
#include <cassert>
#include <cmath>
#include <cstdlib>

using namespace std;

double feetToInches(double val);
void feetsToInches(double& val);
double computeRectangle(double valA, double valB);
void computerArea(double valA, double valB, double& valC);
void computerArea(double valA, double valB, double& valArea, double& valPerimeter);
void stats(double valA,  double valB, double valC, double valD, double& valE, double& valF);
void calcAreaPerimeter(double radius, double& area, double& perimeter);
double calcArea(double length, double width);

int main()
{	
	const double EPS = .0001;
	double val = 5.0;
	double valA = 7.2;
	double valB = 8.3;
	double valArea = -3.7;
	double valPerimeter = 0.65;
	double valC = 5.5;
	double valD =2.9;
	double valE = 4.8;
	double valF = 1.75;
	double radius = 3.5;
	double area =  6.4;
	double perimeter = -30;
	double length = 10;
	double width = 11.1;
	
	// feetToInches
	cout << "Expected: 60" << endl;
	cout << "Actual: " << feetToInches(val) << endl << endl;
	
	// feetsToInches
	cout << "Expected: 60" << endl;
	feetsToInches(val);
	cout << "Actual: " << val << endl <<endl;
	
	// computeRectangle
	cout << "Expected: 59.76" << endl;
	cout << "Actual: " <<  computeRectangle(valA, valB) << endl << endl;
	
	// computerArea
	cout << "Expected: 59.76" << endl;
	computerArea(valA, valB, valC);
	cout << "Actual: " <<  valC << endl <<endl;
	
	//computerArea
	cout << "Expected Area: 59.76 " << endl;
	cout << "Expected Perimeter: 31" << endl;
	computerArea(valA, valB, valArea, valPerimeter);
	cout << "Actual Area: " <<  valArea << endl;
	cout << "Actual Perimeter: " << valPerimeter << endl <<endl;
	
	//stats
	cout << "Expected Sum: 78.16" << endl;
	cout << "Expected Average: 19.54" <<endl;
	stats(valA, valB, valC, valD, valE, valF);
	cout << "Actual Sum: " <<  valE << endl;
	cout << "Actual Perimeter: " << valF << endl << endl;
	
	//calcAreaPerimeter
	cout << "Expected Area: 38.465" << endl;
	cout << "Expected Perimeter: 21.98" << endl;
	calcAreaPerimeter(radius, area, perimeter);
	cout << "Actual Area: " << area << endl;
	cout << "Actual Perimeter: " << perimeter << endl <<endl;
	
	// calcArea
	cout << "Expected: 111" << endl;
	cout << "Actual: " << calcArea(length, width) << endl <<endl;
	
	return 0;
}
double feetToInches(double val)
{
	return val * 12;
}
void feetsToInches(double& val)
{
	val = val * 12;
	return ;
}
double computeRectangle(double valA, double valB)
{
	double area = valA * valB;
	return area;
}
void computerArea(double valA, double valB, double& valC)
{
	valC = valA * valB;	
}
void computerArea(double valA, double valB, double& valArea, double& valPerimeter)
{
	valArea = valA * valB;
	valPerimeter = (valA * 2) + (valB * 2);
}
void stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
	valE = (valA + valB + valC + valD);
	valF = valE / 4;
}
void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
	const double PI = 3.14;
	area = PI * pow(radius,2);
	perimeter = 2* PI * radius;
}
double calcArea(double length, double width)
{
	return length * width;
}
