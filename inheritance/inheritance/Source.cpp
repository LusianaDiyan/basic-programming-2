#include <iostream>

using namespace std;

//1
/*
class Shape
{
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
protected:
	int width;
	int height;
};

class Rectangle : public Shape
{
public:
	int getArea()
	{
		return (width * height);
	}
};
int main(void)
{
	Rectangle Rect;
	Rect.setWidth(5);
	Rect.setHeight(7);
	
	cout << "Total area: " << Rect.getArea() << endl;
	system("pause");
}
*/

//2.
/*
class Shape
{
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
protected:
	int width;
	int height;
};
// Base class PaintCost
class PaintCost
{
public:
	int getCost(int area)
	{
		return area * 70;
	}
};
// Derived class
class Rectangle : public Shape, public PaintCost
{
public:
	int getArea()
	{
		return (width * height);
	}
};
int main(void)
{
	Rectangle Rect;
	int area;
	Rect.setWidth(5);
	Rect.setHeight(7);
	area = Rect.getArea();
	
	cout << "Total area: " << Rect.getArea() << endl;
	
	cout << "Total paint cost: $" << Rect.getCost(area) << endl;
	system("pause");
}
*/

//POLYMORPHISM
//1
/*
class Shape
{
protected:
	int width, height;
public:
	Shape(int a = 0, int b = 0)
	{
		width = a;
		height = b;
	}
	int area()
	{
		cout << "Parent class area :" << endl;
		return 0;
	}
};
class Rectangle : public Shape
{
public:
	Rectangle(int a = 1, int b = 4) : Shape(a, b) { }
	int area()
	{
		cout << "Rectangle class area :" << endl;
		return (width * height);
	}
};
class Triangle : public Shape
{
public:
	Triangle(int a = 0, int b = 0) : Shape(a, b) { }
	int area()
	{
		cout << "Triangle class area :" << endl;
		return (width * height / 2);
	}
};
// Main function for the program
int main()
{
	Shape *shape;
	Rectangle rec(10, 7);
	Triangle tri(10, 5);
	
	shape = &rec;
	
	shape->area();
	
	shape = &tri;
	
	shape->area();
	system("pause");
}
*/

//2
/*
class Shape
{
protected:
	int width, height;
public:
	Shape(int a = 0, int b = 0)
	{
		width = a;
		height = b;
	}
	int area()
	{
		cout << "Parent class area :" << endl;
		return 0;
	}
};
class Rectangle : public Shape
{
public:
	Rectangle(int a = 1, int b = 4) : Shape(a, b) { }
	int area()
	{
		cout << "Rectangle class area :" << endl;
		return (width * height);
	}
};
class Triangle : public Shape
{
public:
	Triangle(int a = 0, int b = 0) : Shape(a, b) { }
	int area()
	{
		cout << "Triangle class area :" << endl;
		return (width * height / 2);
	}
};
// Main function for the program
int main()
{
	Shape *shape;
	Rectangle rec(10, 7);
	Triangle tri(10, 5);

	shape = &rec;

	shape->area();

	shape = &tri;

	shape->area();
	system("pause");
}
*/

//3
/*
class Shape
{
protected:
	int width, height;
public:
	Shape(int a = 0, int b = 0)
	{
		width = a;
		height = b;
	}
	virtual int area() = 0;
};
class Rectangle : public Shape
{
public:
	Rectangle(int a = 1, int b = 4) : Shape(a, b) { }
	int area()
	{
		cout << "Rectangle class area :" << endl;
		return (width * height);
	}
};
class Triangle : public Shape
{
public:
	Triangle(int a = 0, int b = 0) : Shape(a, b) { }
	int area()
	{
		cout << "Triangle class area :" << endl;
		return (width * height / 2);
	}
};
// Main function for the program
int main()
{
	Shape *shape;
	Rectangle rec(10, 7);
	Triangle tri(10, 5);

	shape = &rec;

	shape->area();

	shape = &tri;

	shape->area();
	system("pause");
}
*/


/*
class matriks {
private:
	int A[10][10];
	int B[10][10];
	int C[10][10];
public:
	int elemen_matriks;
	int penjumlahan() {
		return A + B;
	}
	int pengurangan() {
		return A - B;
	}
	int perkalian() {
		return A * B;
	}
	int *hasil;

	int getLength(void);
	matriks(int dim);
	~matriks();
};

matriks::matriks(int dim) {
	cout << "Result = " << endl;
	hasil = new int;
	*hasil = dim;

}
matriks::~matriks(void) {
	cout << "Freeing!" << endl;
	delete hasil;
}
int matriks::getLength(void) {
	return *hasil;
}
void tampilhasil(matriks result) {
	cout << "The Result = " << result.getLength() << endl;
}
*/

int main() {
	int i, j, k, l, m, n, hasil = 0, a;
	int A[10][10], B[10][10], C[10][10];

	cout << "Input baris matriks pertama = ";
	cin >> k;
	cout << "Input kolom matriks pertama = ";
	cin >> l;

	cout << "Input baris matriks kedua = ";
	cin >> m;
	cout << "Input kolom matriks kedua = ";
	cin >> n;

	cout << "Input matriks pertama= \n";
	for (i = 0; i < k; i++) {
		for (j = 0; j < l; j++) {
			cin >> A[i][j];
		}
	}

	cout << "Input matriks kedua= \n";
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> B[i][j];
		}
	}

	cout << "Hasil Penjumlahan = ";
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < l; j++) {
			C[i][j] = A[i][j] + B[i][j];
			cout << C[i][j] << "\t";
		}
		cout << endl;
	}

	cout << "Hasil Pengurangan = ";
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < l; j++) {
			C[i][j] = A[i][j] - B[i][j];
			cout << C[i][j] << "\t";
		}
		cout << endl;
	}

	for (i = 0; i < k; i++) {
		for (j = 0; j < n; j++) {
			for (a = 0; a < m; a++)
			{
				hasil = hasil + A[i][a] * B[i][j];
			}
			C[i][j] = hasil;
			hasil = 0;
		}
	}

	cout << "Hasil Perkalian = \n";
	for (i = 0; i < k; i++) {
		for (j = 0; j < n; j++) {
			cout << C[i][j] << "\t";
		}
		cout << endl;
	}
	
	system("pause");
}