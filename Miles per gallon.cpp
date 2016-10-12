#include <iostream>
using namespace std;

int main () {
	float gallons;
	float miles; 

	
	cout << "Enter number of gallons of gas: ";
	cin >> gallons;
	cout << "Enter the number of miles: ";
	cin >> miles;
	
	float result= miles*gallons;
	cout<<"you can travel up to: "<<result<<" miles"<<endl;
	
	return 0;
}
