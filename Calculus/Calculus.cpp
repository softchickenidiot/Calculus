

#include <iostream>

using namespace std;

float f;
float F;
float h = 0.0001f;

float function(float x) {

	f = sinf(x) + x;

	return f;
}

float derivative(float x) {

	f = (function(x + h) - function(x - h)) / (2.0f * h);

	return f;
}

float integration(float x, float a = 0.0f) 
{
	F = 0.0f;

	for (float i = a; i < x; i += (x-a) * h) {
		F += ((function(i) + function(i + (x - a) * h)) * (x-a) * h) / 2.0f;
	}


	return F;
}

int main()
{
	cout << integration(2*3.1415926) << '\n';
}

