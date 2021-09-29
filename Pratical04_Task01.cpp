#include <iostream>
#include "first.h"
#include "second.h"

using namespace std;


int main()
{
int a = First::add(45,78);
float b = Second::add(454.5, 45.4);
cout << a <<" " << b;

return 0;
}
