#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArg, char * pszArgs[])
 {
 	//set output format for bool variables
 	//to true and false instead
 	//of 1 and 0
 	cout.setf(cout.boolalpha); // makes it say true or false
 	
 	//initialize two arguments
 	int nArg1;
 	cout <<"Input value 1:";
 	cin >> nArg1;
 	
 	int nArg2;
 	cout << "Input value 2:";
 	cin >> nArg2;
 	
 	bool b;
 	b = nArg1 == nArg2;
 	
 	 cout <<"The statement,"<< nArg1
	      <<" equals "      << nArg2
		  <<" is "          << b
		  << endl;
	system("PAUSE");
	return 0;	  
 }
