#include <iostream>
using namespace std;
class figure {
	public:
	figure(int width, int height) {
		this->width = width;
		this->height = height;
	}
	protected:
	int width, height;
};
class rectangle: protected figure {
	public:
	rectangle(int width, int height): figure(width, height) { }
	int area() {
		return width * height;
	}
};
class triangle: protected figure {
	public:
	triangle(int width, int height): figure(width, height) { }
	int area() {
		return width * height / 2;
	}
};
int main() {
	rectangle r(5, 8);
	triangle t(6, 4);
	cout << "rectangle area: " << r.area() << endl;
	cout << "triangle area: " << t.area() << endl;
	return 0;
}
