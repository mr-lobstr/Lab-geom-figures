#include <iostream>
#include <cmath>
using namespace std;

int triangleP(int sideA, int sideB, int sideC)
{
    int P;
    if (((sideA + sideB) < sideC) or ((sideA + sideC) < sideB) or ((sideB + sideC) < sideA))
        cout << "Треугольник не существует" << endl;
    else
        P = sideA + sideB + sideC;
    return P;
}

void isTriangle(int sideA, int sideB, int sideC)
{
    if (((sideA + sideB) < sideC) or ((sideA + sideC) < sideB) or ((sideB + sideC) < sideA))
        cout << "Треугольник не существует" << endl;
    else
        if ((sideA == sideB) or (sideA == sideC) or (sideB == sideC))
            cout << "Равнобедренный" << endl;

}

float triangleS(int sideA, int sideB, int sideC, int P)
{
    float S;
    if (((sideA + sideB) < sideC) or ((sideA + sideC) < sideB) or ((sideB + sideC) < sideA))
        cout << "Треугольник не существует" << endl;
    else
    {
        float p = P / 2;
        S = sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
    }
    return S;
}