#include<iostream>
#include<cmath>
using namespace std;

double findDistance(double u,double a, double t){
	double s = u*t+((0.5)*a*pow(t,2));
	return s;
}

int main(){

	cout << findDistance(0,0.5,1);
}
