#include <iostream> 
using namespace std;

class shapeClass
{
public:

	int width = 0, height = 0, Area = 0;

	shapeClass()
	{
		int w = 0, h = 0, a = 0;
		w = width;
		h = height;
		a = Area;
	}

	void setWidthand()
	{
		cout << "Enter width : ";  cin >> width;
	}

	void setHeight()
	{
		cout << "Enter height : ";  cin >> height;
	}

};

class rectangleClass : public shapeClass
{
public:

	void getArea()
	{
		Area = width * height;
		cout << "Area : " << Area << endl;
	}
};

int main()
{
	int W, H, A;
	W = 0;
	H = 0;
	A = 0;

	rectangleClass Set;
	Set.setWidthand();
	Set.setHeight();
	Set.getArea();
}