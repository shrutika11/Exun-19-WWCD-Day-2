// Which line would give an error? Debug the error.
// Complexity= M

#include<iostream>

using namespace std;
int arr[10];
int main(){
	int arr[5] ={10, 11, 12 , 13, 14};
	cout << *(arr + 1) << endl;
	cout << *(arr + 0) << endl;
	cout << 1[arr] << endl;
	cout << arr++ << endl; 
	cout << arr << endl;
	cout << (arr + 1) << endl;
	return 0;
}

