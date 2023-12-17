#include <iostream>
#include <string>
#include "String.hpp"

int main()
{
String str = "ho";
	str.insert(1, "ell");
	char c = str[2];
	c = 'A';
	str[2] = 'A';
	return 0;
}
