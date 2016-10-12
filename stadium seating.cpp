#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int classA = 15;
	int classB = 12;
	int classC = 9;
	
	int b1;
	int b2;
	int b3;
	cout << "Enter how many tickets sold for class A: ";
	cin >> b1;
	cout << "Enter how many tickets sold for class B: ";
	cin >> b2;
	cout << "Enter how many tickets sold for class C: ";
	cin >> b3;
	
	float resultclassA= classA*b1;
	float resultclassB= classB*b2;
	float resultclassC= classC*b3;
	
	cout << setprecision(2)<<fixed<<showpoint<<right;
	cout << "Class A has: "<< "$" <<setw(3)<< resultclassA<<endl;
	cout << "Class B has: "<< "$" <<setw(3)<< resultclassB<<endl;
	cout << "Class C has: "<< "$" <<setw(3)<< resultclassC<<endl;
	
	return 0;
}
