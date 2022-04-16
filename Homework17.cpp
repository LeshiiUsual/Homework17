
#include <iostream>
#include <math.h>

class Vector
{
private:
	double x;
	double y;
	double z;
	double Module;
public:
	Vector() : x(2), y(5), z(8)
	{}
	void PublicVector ()
	{
		std::cout << x << " " << y << " " << z << '\n';
		Module = sqrt((x * x) + (y * y) + (z * z));
		std::cout << Module;
	}
};
int main()
{
	Vector V;
	V.PublicVector();
}