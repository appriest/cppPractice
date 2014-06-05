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
};

double length(vector vec){
	return sqrt(pow((vec.end.x - vec.start.x),2) + pow((vec.end.y - vec.start.y),2));
}

vector addVec(vector vec1, vector vec2){
	vector vec;
	vec.start.x = vec1.start.x + vec2.start.x;
	vec.end.x = vec1.end.x + vec2.end.x;
	vec.start.y = vec1.start.y + vec2.start.y;
	vec.end.y = vec1.end.y + vec2.end.y;
	return vec;
}

void populateVec(vector &vec){
	cout << "Enter the start point in vector 1 (x,y):\n" << "x: ";
	cin >> vec.start.x;
	cout << "y: ";
	cin >> vec.start.y;
	cout << "Enter the end point in vector 1 (x,y):\n" << "x: ";
	cin >> vec.end.x;
	cout << "y: ";
	cin >> vec.end.y;
}

int main(){
	vector vec1;
	vector vec2;
	char exit = 'n';

	while(exit == 'n'){
		populateVec(vec1);
		populateVec(vec2);
		cout << "The length of vec1 is: " << length(vec1) << endl;
		cout << "The length of vec2 is: " << length(vec2) << endl;
		cout << "The length of sum of the two vectors is: " << length(addVec(vec1,vec2)) << endl;
		cout << "Are you finished calculating? (y/n) ";
		cin >> exit;
	}
	
	return 0;
}
