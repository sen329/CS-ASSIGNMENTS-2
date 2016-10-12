#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	float a;
	float b;
	float c;
	float d; 
	float e; 
	
	cout<< "Enter first test score: ";
	cin >> a;
	cout << "Enter second test score: ";
	cin >> b; 
	cout << "Enter third test score: ";
	cin >> c;
	cout << "Enter fourth test score: ";
	cin >> d; 
	cout << "Enter fifth test score: ";
	cin >> e;
	
	float total=a+b+c+d+e;
	float average=total/2;
	
	cout<< setprecision(1) << fixed<< showpoint <<right;
	cout<< "The average is: "<<setw(3)<<average<<endl;
}
