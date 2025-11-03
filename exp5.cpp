/* C++ program to find Area using Function Overloading */
#include<iostream>
using namespace std;

// ? Function declarations (prototypes)
int area(int s);
int area(int l, int b);
float area(float r);
float area(float bs, float ht);

int main()
{
	cout<<"Name:Atharva Kishor Sarnaik"<<"\n"<<endl;
	cout<<"Roll no.36"<<"\n"<<endl;
	cout<<"Batch:S2"<<"\n"<<endl;
	cout<<"Div:B"<<"\n"<<endl;
    int s, l, b;
    float r, bs, ht;

    cout << "Enter side of a square: ";
    cin >> s;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter base and height of triangle: ";
    cin >> bs >> ht;

    cout << "Area of square is " << area(s);
    cout << "\nArea of rectangle is " << area(l, b);
    cout << "\nArea of circle is " << area(r);
    cout << "\nArea of triangle is " << area(bs, ht);

    return 0;
}

// ? Function definitions
int area(int s)
{
    return (s * s);
}

int area(int l, int b)
{
    return (l * b);
}

float area(float r)
{
    return (3.14f * r * r);
}

float area(float bs, float ht)
{
    return ((bs * ht) / 2);
}

