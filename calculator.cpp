#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	double res;
	cout<<"1.Addition \n";
	cout<<"2.Subtraction \n";
	cout<<"3.Multiplication \n";
	cout<<"4.Division\n";
	cout<<"Enter your choice \n";
	cin>>z;
	cout<<"Enter number for operation \n";
	cin>>x>>y;
	switch(z){
		case 1: res = x+y;
				break;
		case 2: res = x-y;
				break;
		case 3: res = x*y;
				break;
		case 4: res = static_cast<double> (x)/y;//C++ style conversion
				break;
		default : cout<<"Invalid Option";


	}
	cout<<"Your answer is:"<<res;
	return 0 ;

}