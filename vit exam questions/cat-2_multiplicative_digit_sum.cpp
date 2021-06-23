
// Multiplicative Digital Image
// A digital image can be represented as a collection of picture elements or pixels. Each pixel is a small rectangle element that has red, green and blue components, where each colour component has a value ranging from 0 to 255. Pixel (0,0,0) represents black and (255,255,255) represents white. Digital images can be made big (zooming out) by multiplying the pixels with a positive integer (called zooming value) greater than 1.  Provide function increment with one and three parameters to multiply the pixel value of the three colors. When the function with one argument is called multiply all the three colors by same value and when the function with three arguments is called, multiply the current pixels: red by the value of first parameter, green by the value of the second parameter and blue by the value of the third parameter.

// Input format:

// Enter color values of current pixel

// Red

// Green

// Blue

// Enter the zooming value for function with one parameter

// single value

// Enter the zooming values for function with three parameters

// value 1

// value2

// value 3

 

// Output format:

// Display color values of pixel after calling function with one parameter

// Display color values of pixel after calling function with three parameters

#include<iostream>
using namespace std;
class dimage
{

	int red;
	int green;
	int blue;
	public:
	void get();
	void print();
	void effect(int);
	void effect(int,int,int);
};
void dimage :: get() {
    cin>>red>>green>>blue;
} 
void dimage :: print() {
    
}
void dimage :: effect(int r) {
    cout<<r*red<<endl<<r*green<<endl<<r*blue<<endl;
     red *= r; green *= r; blue *= r;
}
void dimage :: effect(int r, int g, int b) {
    cout<<red*r<<endl<<green*g<<endl<<blue*b;
}
int main()
{
	dimage d1;
	d1.get();
	int zoom;
	cin>>zoom;
	int ir,ig,ib;
	cin>>ir>>ig>>ib;
	d1.effect(zoom);
	d1.print();
	d1.effect(ir,ig,ib);
	d1.print();
}