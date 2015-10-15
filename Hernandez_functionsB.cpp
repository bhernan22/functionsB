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
	assert(fabs(feetToInches(val)-60) < EPS ); // Test Case1
	cout << "Expected: 66" << endl; // Test Case2
	cout << "Actual: " << feetToInches(valC) << endl << endl;
	
	// feetsToInches
	feetsToInches(val);
	assert(val - 60 < EPS ); //Test case 1
	cout << "Expected: 720" << endl; // Test case 2
	feetsToInches(val);
	cout << "Actual: " << val << endl <<endl; 
	
	// computeRectangle
	assert(fabs(computeRectangle(valA, valB)-59.76) < EPS ); // Test Case1
	cout << "Expected: 15.95" << endl; // Test Case2
	cout << "Actual: " <<  computeRectangle(valC, valD) << endl << endl;
	
	// computerArea
	computerArea(valA,valB, valC);
	assert( valC - 59.76 < EPS); // Test Case1
	cout << "Expected: 8.4" << endl; // Test Case2
	computerArea(valE, valF, valC);
	cout << "Actual: " <<  valC << endl <<endl;
	
	//computerArea
	computerArea(valA, valB, valArea, valPerimeter);
	assert(valArea - 59.76 < EPS); // Test Case1
	assert(valPerimeter - 31 < EPS);
	cout << "Expected Area: 24.36 " << endl; // Test Case2
	cout << "Expected Perimeter: 22.6" << endl;
	computerArea(valC, valD, valArea, valPerimeter);
	cout << "Actual Area: " <<  valArea << endl;
	cout << "Actual Perimeter: " << valPerimeter << endl <<endl;
	
	//stats
	stats(valA, valB, valC, valD, valE, valF);
	assert(valE - 31.8 < EPS); //Test Case1
	assert(valF - 7.95 < EPS);
	cout << "Expected Sum: 36.6" << endl; // Test Case2
	cout << "Expected Average: 9.15" <<endl;
	stats(valA, valB, length, width, valE, valF);
	cout << "Actual Sum: " <<  valE << endl;
	cout << "Actual Average: " << valF << endl << endl;
	
	//calcAreaPerimeter
	calcAreaPerimeter(radius, area,perimeter);
	assert(area - 38.465 <EPS ); // Test Case1
	assert(perimeter -21.98 < EPS);
	cout << "Expected Area: 262.889" << endl; // Test Case 2
	cout << "Expected Perimeter: 57.462" << endl;
	calcAreaPerimeter(valF, area, perimeter);
	cout << "Actual Area: " << area << endl; 
	cout << "Actual Perimeter: " << perimeter << endl <<endl;
	
	// calcArea
	assert(fabs(calcArea(length, width)-111) < EPS ); // Test Case1
	cout << "Expected: 111" << endl; // Test case 2 
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
