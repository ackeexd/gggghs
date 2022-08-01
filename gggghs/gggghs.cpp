#include "Date.h"
int main()
{
	Date d;
	Date a(6, 4, 5);
	Date c = a + 5;
	Date m = d - a;
	Date v = a == d;
	Date b = d > a;
	Date n = a < d;
	Date h = d != a;
	a.PrintDate();
	
	
}