#include <iostream>
using namespace std;

#include "geometric_figures.h"

int main()
{
	// вычисление параметров трапеции 
	cout << "трапеция (1.5, 8, 3, 4):" << endl;
	cout << "\tпериметр: " << trapezoidPerimeter (1.5, 8, 3, 4) << endl;
	cout << "\tдлина средней линии: " << trapezoidMiddleLine (1.5, 8, 3, 4) << endl;
	cout << "\tплощадь: " << trapezoidArea (1.5, 8, 3, 4) << endl;
}
