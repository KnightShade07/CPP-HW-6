#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>

using namespace std;

//CPW 218
//Programming Assignment 6 - Iterators
//Ethen Oliva
//Instructor: Ken Meerdink
//GitHub Repository: https://github.com/KnightShade07/CPP-HW-6
/*
	Description: This program is for testing your ability to work with iterators/pointers
	in order to figure out how to get them to work with palindromes.

	Final Tests Issue: https://github.com/KnightShade07/CPP-HW-6/issues/4
*/


bool isPalindrome(const vector<int> & v);

int main() {
	vector<int> v1False{ 1, 2, 3, 4, 1 };
	cout << boolalpha << isPalindrome(v1False) << endl;

	vector<int> v2False{ 1, 2, 3, 4, 2, 1 };
	cout << boolalpha << isPalindrome(v2False) << endl;

	vector<int> v1True{1, 2, 3, 2, 1};
	cout << boolalpha << isPalindrome(v1True) << endl;

	vector<int> v2True{ 1, 2, 3, 3, 2, 1 };
	cout << boolalpha << isPalindrome(v2True) << endl;

	system("pause");
	return 0;
}

bool isPalindrome(const vector<int> & v) {
	if ( v.size() == 0 ) {
		return true;
	}
	auto front = v.begin(); // first element of v.
	auto rear = --v.end(); // last element of v.

	// algorithm:
	// iterators front and rear move towards center.
	// if there is a mismatch, the loop ends
	// if palindrome, front and rear both get to middle.

	// as long as front and rear elements have the same value
	// and front hasn't gone past rear, increment both.
	for (; *front == *rear && front < rear; ++front, --rear) {
	}
	
	//Program was missing this if statement. Without this, it would not produce the correct results.
	//checks to see if the front and rear are the same.
	if(*front == *rear){
		return true;
	}
	
	// check positions of front and rear.
	// if there is a mismatch, it will happen
	// before front passes rear.
	return front == rear;
}