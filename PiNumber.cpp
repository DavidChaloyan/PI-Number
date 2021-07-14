#include <iostream>
#include <cmath>	//cmath library for pow function 
using namespace std;
int main () 
{
	int prc=0;
	cout<<"Inster the precision "<<endl;
	cin >> prc;
	double pi=0;
for (int i= 0 ; i <prc; i++)
	{	
		pi += pow(-1,i)/(2*i+1); 	//Formula for calculating quarter of PI
	}	
	pi *= 4;				//Multiplying with 4, for getting the real PI
	cout<<"Your PI number is= "<<pi<<endl;

}
