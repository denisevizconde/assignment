/*
NUMBER9
*/

#include <iostream>

using namespace std;
int main() {
	int rows, columns;
	
	cout << "Enter the number of rows: ";
	cin >> rows;
	cout << "Enter the number of cokumns: ";
	cin >> columns;
	
	for (int i=1; i<=rows; i++) {
		cout << "*" << endl;
	for (int j=1; j<=columns; j++) {
		cout << "*" ;
	}
}
}
