/*
NUMBER6
*/

#include <iostream>

using namespace std;
int main() {
	int n1 = 0;
	int n2 = 1;
	int temp;
	
	cout << n1 << "," << n2 << "," ;
	for (int i = 3; i <=22; i++){
		temp =n1 + n2;
		n1 = n2;
		n2 = temp;
	cout <<temp;
		
	if (i < 22) {
		cout << "," ;
		
	}
	}
}
