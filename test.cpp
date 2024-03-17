#include <iostream>
using namespace std;

#include "geometric_figures.h"

int main()
{
    //Вывод прямоугольника
    cout << "The perimeter of the rectangle is equal to: " << rectanglePerimeter(5, 8);
    cout << endl;
    cout << "The area of the rectangle is equal to: " << rectangleArea(5, 8);
    cout << endl;
    cout << "The diagonal of the rectangle is equal to: " << rectangleDiagonal(5, 8);
}
