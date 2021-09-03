/*  Kaan Yuecel
	C++ Fall 2021
	Due: 9/15/21
	Lab 2 Exploring Output
	Lab description: This lab is designed to
	get you familiar output to the command
	prompt using C++.
*/



#include <iostream>

using namespace std;

int main()
{
	// Output schedule to screen
	const string m = "Monday";
	const string tu = "Tuesday";
	const string w = "Wednesday";
	const string th = "Thursday";
	const string f = "Friday";

	const string fct = "8:00"; // fct = first class time
	const string sct = "10:00"; // sct = second class time
	const string tct = "12:15"; // tct = third class time
	const string lct = "14:00"; // lct = last class time

	std::cout << std::endl; // space line

	const string fcn = "Calculus II 216"; // fcn = first class name
	const string scn = "C++ 162"; // scn = second class name
	const string tcn = "Composition II 106"; // tcn = third class name
	const string lcn = "Classical Physics 212"; // lcn = last class name

	std::cout << std::endl;

	cout << m << " \t\t" << fct << "\t" << fcn << endl;
	cout << m << " \t\t" << sct << "\t" << scn << endl;
	cout << m << " \t\t" << tct << "\t" << tcn << endl;
	cout << m << " \t\t" << lct << "\t" << lcn << endl << endl;


	cout << tu << " \t" << sct << "\t" << scn << endl;
	cout << tu << " \t" << lct << "\t" << lcn << endl << endl;


	cout << w << " \t" << fct << "\t" << fcn << endl;
	cout << w << " \t" << sct << "\t" << scn << endl;
	cout << w << " \t" << tct << "\t" << tcn << endl;
	cout << w << " \t" << lct << "\t" << lcn << endl << endl;


	cout << th << " \t" << sct << "\t" << scn << endl;
	cout << th << " \t" << lct << "\t" << lcn << endl << endl;


	cout << f << " \t\t" << sct << "\t" << scn << endl << endl;



	const string l1 = "   *     *      *      *"; // l1 = line1
	const string l2 = "*     *     *      *"; // l2 = line 2

	cout << l1 << endl;
	cout << l2 << endl;
	cout << l1 << endl;
	cout << l2 << endl;
	cout << l1 << endl;
	cout << l2 << endl;
	cout << l1 << endl;
	cout << l2 << endl;

	return 0;
}
