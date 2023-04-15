#include "ClassName.h"
#include <iostream>

using namespace std;

ClassName::ClassName(){
	cout << "Hello" << endl;
}
ClassName::~ClassName() {
	cout << "THIS destructor" << endl;
	cout << "bye";
}