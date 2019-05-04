/*
NUMBER2
*/

#include <iostream>

using namespace std;
int main () {
	int prevGallon, currGallon;
	float bill;
	float charge = 1.10;
	float lateCharge = 20;
	
	cout << "Please Enter Your Previous Gallon Consumption: " ; 
	cin >> prevGallon;
	cout << "Please Enter Your Current Gallon Consumption: " ; 
	cin >> currGallon;
	
	bill = 35;
	bill += currGallon * charge;
	
	if (prevGallon > 0 ) {
		bill += lateCharge;
	}
	
	cout << "Your Total Water Bill is: " << bill;
	
}
