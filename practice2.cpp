#include <iostream>
#include <cmath>

using namespace std;

class point{
	public:
		double x,y;
};

class vector{
	public:
		point start, end;
	
	void printVec(){
		cout << "(" << start.x << "," << start.y << ") -> (" << end.x <<
			"," << end.y << ")" << endl;
	}

	double length(){
		return sqrt(pow((end.x - start.x),2) + pow((end.y - start.y),2));
	}

	void populateVec(){
		cout << "Enter the start point in vector 1 (x,y):\n" << "x: ";
		cin >> start.x;
		cout << "y: ";
		cin >> start.y;
		cout << "Enter the end point in vector 1 (x,y):\n" << "x: ";
		cin >> end.x;
		cout << "y: ";
		cin >> end.y;
		cout << "Your vector is:\n"; 
		printVec();
		cout << "with a length of: " << length() << " units." << endl;
	}

};

vector addVec(vector vec1, vector vec2){
	vector vec;
	vec.start.x = vec1.start.x + vec2.start.x;
	vec.end.x = vec1.end.x + vec2.end.x;
	vec.start.y = vec1.start.y + vec2.start.y;
	vec.end.y = vec1.end.y + vec2.end.y;
	return vec;
}

int main(){
	vector vec1;
	vector vec2;
	char exit = 'n';

	while(exit == 'n'){
		vec1.populateVec();
		vec2.populateVec();
		cout << "The length of sum of the two vectors is: " << addVec(vec1,vec2).length() << endl;
		cout << "Are you finished calculating? (y/n) ";
		cin >> exit;
	}
	
	return 0;
}
