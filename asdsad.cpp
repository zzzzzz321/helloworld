#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
string string1("2222zzzzzzzzzz");
string string2(string1+"xxxxx");
cout<<string1<<endl;
cout<<string2<<endl;

cout<<string1.length()<<endl;
a=atoi (string1.c_str());
cout<<a;

	system("pause");
	return 0;
}
