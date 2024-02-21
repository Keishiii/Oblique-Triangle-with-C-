#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	double a, b, c;
	cout<<"Input the 3 sides (a,b,c)"<<endl;
	cout<<"Side a: ";
	cin>>a;
	cout<<"Side b: ";
	cin>>b;
	cout<<"Side c: ";
	cin>>c;
	
	double cosAlpha = (pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c);
	double cosBeta = (pow(c,2)+pow(a,2)-pow(b,2))/(2*c*a);
	double cosGamma = (pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b);
	
	double Alpha = acos(cosAlpha)*180.0/M_PI;
	double Beta = acos(cosBeta)*180.0/M_PI;
	double Gamma = acos(cosGamma)*180.0/M_PI;
	
	cout<<"Alpha: "<<Alpha<<endl;
	cout<<"Beta: "<<Beta<<endl;
	cout<<"Gamma: "<<Gamma<<endl;
	
	double mollweide = (pow(c,2)-pow(a,2)-pow(b,2))/(-2*a*b);
	mollweide = acos(mollweide)*180/M_PI;
	
	cout<<"Mollweide's Result: "<<mollweide;
	
	return 0;
}

