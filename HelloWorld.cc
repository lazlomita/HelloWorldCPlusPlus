/******************************************************************************
 *  Compilation:  g++ HelloWorld.cc -o HelloWorld
 *  Execution:    HelloWorld
 *  
 *  Print Hello world in C++ programming language
 *
 ******************************************************************************/
#include <iostream>
using namespace std;

int main () {
	// Prints "Hello world" to the terminal window.
	cout << "Hello World C++" << endl << endl;
	// Run a cycle that goes from 1 to 10
	for( int i = 1; i <= 10; i = i + 1 ) {
		// Decide if the number is even or not
		if( i%2 == 0 ) {
			// Text concatenation and print
			cout << "Count is: " << i << " and it is even." << endl;
		} else {
			// Text concatenation and print
			cout << "Count is: " << i << " and it is odd." << endl;
		}
	}
	return 0;
}