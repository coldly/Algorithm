#include <iostream>
#include <typeinfo>
using namespace std;
class Shape {
	public:
	Shape() { }
	Shape(int a, int b) {
		width = a;
		height = b;
	}
	virtual void area() { }
	int width;
	int height;
};
class Rectangle: public Shape {
	public:
	Rectangle(int width, int height): Shape(width, height) {
	}
	void area(){
		cout << "rectangle area: " << width * height << endl;
	}
	string display() {
		return "class Rectangle";
	}	
};
class Triangle: public Shape {
	public:
	Triangle(int width, int height) {
		this->width = width;
		this->height = height;
	}
	void area() {
		cout << "triangle area: " << width * height / 2 << endl;
	}
	string display() {
		return "class Triangle";
	}	
};
void display(Shape &object) {
	Shape *p = &object;
	Rectangle *rp = dynamic_cast<Rectangle*>(p);
	Triangle *tp = dynamic_cast<Triangle*>(p);
	if (rp != 0) {
		cout << rp->display() << endl;
	}
	if (tp != 0) {
		cout << tp->display() << endl;
	}
}
int main() {
	Rectangle r(3, 7);
	Triangle t(5, 8);
	Shape *p = &r;
	p->area();
	p = &t;
	p->area();
	display(r);
	display(t);
	cout << typeid(r).name() << endl;
	cout << typeid(t).name() << endl;
	return 0;
}
