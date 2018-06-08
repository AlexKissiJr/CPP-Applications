//============================================================================
// Name        : App01.cpp
// Author      : Alexander Kissi Jr
// Version     :
// Copyright   : Createlex
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	cout << "MyApp" << endl; // prints MyApp
	//Testing new Comment

	vector<string> names;

	names.push_back("Bob");
	names.push_back("Apple");
	names.push_back("Orange");


	for (int i = 0; i < names.size(); i++){
		cout << names[i] <<endl;
	}



	return 0;
}
