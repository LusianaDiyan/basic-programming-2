#include<iostream>

using namespace std;

//1.
/*
class Box {
public:
	double length;
	double breadth;
	double height;
};

int main() {
	Box Box1;
	Box Box2;
	double volume1 = 0.0;
	double volume2 = 0.0;

	Box1.height = 5.0;
	Box1.length = 6.0;
	Box1.breadth = 7.0;

	Box2.height = 10.0;
	Box2.length = 12.0;
	Box2.breadth = 13.0;

	volume1 = Box1.height * Box1.length * Box1.breadth;
	volume2 = Box2.height * Box2.length * Box2.breadth;
	cout << "Volume of Box1 :" << volume1 << endl;
	cout << "\nVolume of Box2 :" << volume2 << endl;
	system("pause");
}
*/

//2.
/*
class Box {
public:
	double length;
	double breadth;
	double height;

	double getVolume(void);
	void setLength(double len);
	void setBreadth(double bre);
	void setHeight(double hei);
};
double Box::getVolume(void) {
	return length * breadth*height;
}
void Box::setLength(double len) {
	length = len;
}
void Box::setHeight(double hei) {
	height = hei;
}
void Box::setBreadth(double bre) {
	breadth = bre;
}
int main() {
	Box Box1;
	Box Box2;
	double volume = 0.0;

	Box1.setLength(6.0);
	Box1.setBreadth(7.0);
	Box1.setHeight(5.0);

	Box2.setLength(12.0);
	Box2.setBreadth(13.0);
	Box2.setHeight(10.0);

	volume = Box1.getVolume();
	cout << "Volume of Box1 : " << volume << endl;

	volume = Box2.getVolume();
	cout << "Volume of Box2 : " << volume << endl;

	system("pause");
}
*/

//3.
/*
class Line {
public:
	double length;

	void setLength(double len);
	double getLength(void);
};
double Line::getLength(void) {
	return length;
}
void Line::setLength(double len) {
	length = len;
}
int main() {
	Line line;

	line.setLength(6.0);
	cout << "Length of line : " << line.getLength() << endl;

	line.length = 10.0;
	cout << "Length of line : " << line.length << endl;

	system("pause");
}
*/

//4
/*
class Box {
public:
	double length;
	void setWidth(double wid);
	double getWidth(void);

private:
	double width;
};
double Box::getWidth(void) {
	return width;
}
void Box::setWidth(double wid) {
	width = wid;
}
int main() {
	Box box;

	box.length = 10.0;
	cout << "Length of box : " << box.length << endl;

	box.setWidth(10.0);
	cout << "Width of box : " << box.getWidth() << endl;

	system("pause");
}
*/

//5
/*
class Box {
protected:
	double width;
};
class SmallBox :Box {
public:
	void setSmallWidth(double wid);
	double getSmallWidth(void);
};
void SmallBox::setSmallWidth(double wid) {
	width = wid;
}
double SmallBox::getSmallWidth(void) {
	return width;
}
int main() {
	SmallBox box;
	box.setSmallWidth(5.0);
	cout << "Width of box : " << box.getSmallWidth() << endl;

	system("pause");
}
*/

//6.
/*
class Line
{
public:
	void setLength(double len);
	double getLength(void);
	Line(); // This is the constructor
private:
	double length;
};
void Line::setLength(double len)
{
	length = len;
}
double Line::getLength(void)
{
	return length;
}
Line::Line(void)
{
	cout << "Object is being created" << endl;
}
int main()
{
	Line line;

	line.setLength(6.0);
	cout << "Length of line : " << line.getLength() << endl;
	system("pause");
}
*/

//7
/*
class Line
{
public:
	void setLength(double len);
	double getLength(void);
	Line(double len); // This is the constructor
private:
	double length;
};
void Line::setLength(double len)
{
	length = len;
}
double Line::getLength(void)
{
	return length;
}
Line::Line(double len): length(len)
{
cout << "Object is being created, length = " << len << endl;
}
int main()
{
	Line line(10.0);
	
	cout << "Length of line : " << line.getLength() << endl;
	line.setLength(6.0);
	cout << "Length of line : " << line.getLength() << endl;
	system("pause");
}
*/

//8
/*
class Line
{
public:
	void setLength(double len);
	double getLength(void);
	Line(); // This is the constructor declaration
	~Line(); // This is the destructor: declaration
private:
	double length;
};
Line::Line(void)
{
	cout << "Object is being created" << endl;
}
Line::~Line(void)
{
	cout << "Object is being deleted" << endl;
}
void Line::setLength(double len)
{
	length = len;
}
double Line::getLength(void)
{
	return length;
}

int main()
{
	Line line;
	
	line.setLength(6.0);
	cout << "Length of line : " << line.getLength() << endl;
	system("pause");
}
*/

//9
/*
class Line
{
public:
	int getLength(void);
	Line(int len); // simple constructor
	Line(const Line &obj); // copy constructor
	~Line(); // destructor
private:
	int *ptr;
};

Line::Line(int len)
{
	cout << "Normal constructor allocating ptr" << endl;
	// allocate memory for the pointer;
	ptr = new int;
	*ptr = len;
}
Line::Line(const Line &obj)
{
	cout << "Copy constructor allocating ptr." << endl;
	ptr = new int;
	*ptr = *obj.ptr; // copy the value
}
Line::~Line(void)
{
	cout << "Freeing memory!" << endl;
	delete ptr;
}
int Line::getLength(void)
{
	return *ptr;
}
void display(Line obj)
{
	cout << "Length of line : " << obj.getLength() << endl;
}

int main()
{
	Line line(10);
	display(line);
	system("pause");
}
*/

/*
class Line
{
public:
	int getLength(void);
	Line(int len); // simple constructor
	Line(const Line &obj); // copy constructor
	~Line(); // destructor
private:
	int *ptr;
};
// Member functions definitions including constructor
Line::Line(int len)
{
	cout << "Normal constructor allocating ptr" << endl;
	// allocate memory for the pointer;
	ptr = new int;
	*ptr = len;
}
Line::Line(const Line &obj)
{
	cout << "Copy constructor allocating ptr." << endl;
	ptr = new int;
	*ptr = *obj.ptr; // copy the value
}
Line::~Line(void)
{
	cout << "Freeing memory!" << endl;
	delete ptr;
}
int Line::getLength(void)
{
	return *ptr;
}
void display(Line obj)
{
	cout << "Length of line : " << obj.getLength() << endl;
}

int main()
{
	Line line1(10);
	Line line2 = line1; // This also calls copy constructor
	display(line1);
	display(line2);
	system("pause");
}
*/

//10
/*
class Box {
	double width;

public:
	friend void printWidth(Box box);
	void setWidth(double wid);
};
void Box::setWidth(double wid) {
	width = wid;
}
void printWidth(Box box) {
	cout << "Width of box : " << box.width << endl;
}
int main() {
	Box box;

	box.setWidth(10.0);
	printWidth(box);

	system("pause");
}
*/

//11
/*
inline int Max(int x, int y) {
	return (x > y) ? x : y;
}
int main() {
	cout << "Max (20,10): " << Max(20, 10) << endl;
	cout << "Max (0,200): " << Max(0, 200) << endl;
	cout << "Max (100,1010): " << Max(100, 1010) << endl;

	system("pause");
}
*/

//12
/*
class Box
{
public:
	Box(double l = 2.0, double b = 2.0, double h = 2.0)
	{
		cout << "Constructor called." << endl;
		length = l;
		breadth = b;
		height = h;
	}
	double Volume()
	{
		return length * breadth * height;
	}
	int compare(Box box)
	{
		return this->Volume() > box.Volume();
	}
private:
	double length; 
	double breadth; 
	double height; 
};
int main(void)
{
	Box Box1(3.3, 1.2, 1.5);
	Box Box2(8.5, 6.0, 2.0); 
	if (Box1.compare(Box2))
	{
		cout << "Box2 is smaller than Box1" << endl;
	}
	else
	{
		cout << "Box2 is equal to or larger than Box1" << endl;
	}
	system("pause");
}
*/
/*
class Box
{
public:
	
	Box(double l = 2.0, double b = 2.0, double h = 2.0)
	{
		cout << "Constructor called." << endl;
		length = l;
		breadth = b;
		height = h;
	}
	double Volume()
	{
		return length * breadth * height;
	}
private:
	double length; 
	double breadth; 
	double height; 
};
int main(void)
{
	Box Box1(3.3, 1.2, 1.5); 
	Box Box2(8.5, 6.0, 2.0); 
	Box *ptrBox; 
	ptrBox = &Box1;
	cout << "Volume of Box1: " << ptrBox->Volume() << endl;
	ptrBox = &Box2;
	cout << "Volume of Box2: " << ptrBox->Volume() << endl;
	system("pause");
}
*/
//13
/*
class Box
{
public:
	// Constructor definition
	Box(double l = 2.0, double b = 2.0, double h = 2.0)
	{
		cout << "Constructor called." << endl;
		length = l;
		breadth = b;
		height = h;
	}
	double Volume()
	{
		return length * breadth * height;
	}
private:
	double length; // Length of a box
	double breadth; // Breadth of a box
	double height; // Height of a box
};
int main(void)
{
	Box Box1(3.3, 1.2, 1.5); 
	Box Box2(8.5, 6.0, 2.0); 
	Box *ptrBox; 
	ptrBox = &Box1;
	
	cout << "Volume of Box1: " << ptrBox->Volume() << endl;
	
	ptrBox = &Box2;
	
	cout << "Volume of Box2: " << ptrBox->Volume() << endl;
	system("pause");
}
*/

//14

class Box
{
public:
	static int objectCount;
	// Constructor definition
	Box(double l = 2.0, double b = 2.0, double h = 2.0)
	{
		cout << "Constructor called." << endl;
		length = l;
		breadth = b;
		height = h;
		
		objectCount++;
	}
	double Volume()
	{
		return length * breadth * height;
	}
private:
	double length; // Length of a box
	double breadth; // Breadth of a box
	double height; // Height of a box
};
int Box::objectCount = 0; //Definisi
int main(void)
{
	Box Box1(3.3, 1.2, 1.5);
	Box Box2(8.5, 6.0, 2.0); 
	cout << "Total objects: " << Box::objectCount << endl;
	system("pause");
}


//15
/*
class Box
{
public:
	static int objectCount;
	Box(double l = 2.0, double b = 2.0, double h = 2.0)
	{
		cout << "Constructor called." << endl;
		length = l;
		breadth = b;
		height = h;
		objectCount++;
	}
	double Volume()
	{
		return length * breadth * height;
	}
	static int getCount()
	{
		return objectCount;
	}
private:
	double length; 
	double breadth; 
	double height; 
};
int Box::objectCount = 0;

int main(void)
{
	
	cout << "Inital Stage Count: " << Box::getCount() << endl;
	Box Box1(3.3, 1.2, 1.5); 
	Box Box2(8.5, 6.0, 2.0); 
	
	cout << "Final Stage Count: " << Box::getCount() << endl;
	system("pause");
}
*/