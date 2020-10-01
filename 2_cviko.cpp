//C++ vstup vystup
#include <iostream>
#include <string>
//C vstup vystup
#include<cstdio>
//C 
#include<fstream>

using namespace std;
int main() {
	
	int 	a =22;
	
	double 	b =4.5000000000;
	double 	c =4.500000000100;
	double 	d =c-b;
	
	bool 	e =c>b;
	
	char	f[]={'a','h','o','j',};
	double	x[]={1.5,2.0,7.5};
	
	char	jmeno[]="Ilya";
	
	//C++
	string	prijmeni ="Chaban";
	
	
	cout << "Ahoj " << jmeno << ' ' << prijmeni << endl;
	cout << "Delka prijmeni je :" << prijmeni.length() << endl;
	cout << "Zadej nove prijmeni:";
	//cin >> prijmeni;
	cout << "Nove prijmeni:" << " " << prijmeni << endl; 
	
	unsigned int vek;
	cin >> vek;
	cout << "Vek=" << vek << endl;
	
	//Vystup do souboru 
	ofstream soubor;
	soubor.open("soubor.txt", ios::app);
	
	soubor << jmeno << prijmeni << endl; 
	soubor << "Vek = " << vek; 
	
	soubor.close();
	
	//C
	printf("jmeno: %s\n", jmeno);
	//scanf
	return 0;
}