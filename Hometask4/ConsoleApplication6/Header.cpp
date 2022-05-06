#include<iostream>
#include<cmath>
float y1(float a, float b, float y)
{
	y = (a - b) * (a + b) / ((a + b) * (pow(a, 2) - a * b + pow(b, 2)));
	return y;
}
float y2(float a, float b, float y)
{
	y = a + log(pow(b, 2));
	return y;
}
float t1(float a, float b, float y, float t)
{
	t = 2 * y + sqrt(pow(y, 2) - a);
	std:: cout << t;
	return 0;
}
float t2(float a, float b, float y, float t)
{
	t = pow(sin(y), 2) + pow(tan(a - b),-1);
	std::cout << t;
	return 0;
}
float t3(float a, float b, float y, float t)
{
	t = pow(y * sin(a),1/3) + pow(sqrt(y * cos(b)),-1);
	std::cout << t;
	return 0;
}
void foo(float a, float b, float y)
{
	if (a <= b)
	{
		y = y1(a, b, 0);
	}
	if (a > b)
	{
		y = y2(a, b, 0);
	}
	if (y == b)
	{
		t1(a, b, y, 0);
	}
	if (y < b)
	{
		t2(a, b, y, 0);
	}
	if (y > b)
	{
		t3(a, b, y, 0);
	}
}