#include <iostream>
#include "Person.h"
using namespace std;

int main() {

	Person person1;
	Person person2("Bob");
	Person person3("Sue", 35);

	cout << person1.to_string() << endl;
	cout << person2.to_string() << endl;
	cout << person3.to_string() << endl;

	return 0;
}
