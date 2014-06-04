#include <iostream>
#include <cctype>

void printThings(double x0, double x1, double y0, double y1){
	std::cout << "(" << x0 << "," << y0 << ") -> (" 
		<< x1 << "," << y1 << ")" << std::endl;
}

void offset(double &x0, double &y0, double &x1, double &y1, double offsetx,
		double offsety){
	x0 += offsetx;
	y0 += offsety;
	x1 += offsetx;
	y1 += offsety;
}

int main(){
	double xstart = 1.2;
	double ystart = 0.4;
	double xend = 2.0;
	double yend = 1.6;
	printThings(xstart, xend, ystart, yend);
	offset(xstart, ystart, xend, yend, 1.0, 1.5);
	printThings(xstart, xend, ystart, yend);
	return 0;
}
