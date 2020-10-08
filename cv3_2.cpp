#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	double pole[100],sum,prumer,input;
	int i,size;

	i=0;
	input=-1;
	while (input!=0){
		cout << "zadej cislo: "; 
		cin >> input; 
		pole[i]=input;
		i++;
	}
	
	i=0;
	for (i;sizeof(pole)/sizeof(double);1){
		sum+=pole[i];
		i++;
		if (pole[i]==0){
			break;
			}
	}

	i=0;
	while (pole[i]!=0){
		i++;
		size=i;
	}

	prumer =sum/size;
	cout<< prumer << endl;
	cout<< size << endl;
	return 0;
}