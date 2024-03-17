#include "geometric_figures.h"

double trapezoidPerimeter (double topBase, double bottomBase, double leftRib, double rightRib)
{
	return topBase + bottomBase + leftRib + rightRib;
}

double trapezoidMiddleLine(double topBase, double bottomBase, double leftRib, double rightRib)
{
	return (topBase + bottomBase) / 2;
}

double trapezoidArea (double topBase, double bottomBase, double leftRib, double rightRib)
{
	double middleLine = (bottomBase + topBase) / 2;
	double diffBase = bottomBase - topBase;
	double leg = (pow(diffBase, 2) + pow(leftRib, 2) - pow(rightRib, 2)) / (2 * diffBase);
	double hight = sqrt(pow(leftRib, 2) - pow(leg, 2));

	return middleLine * hight;
}