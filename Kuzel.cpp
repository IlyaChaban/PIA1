//C++ vstup vystup
#include <iostream>
#include <string>
//C vstup vystup
#include<cstdio>
//C 
#include<fstream>
#include <math.h>

using namespace std;
int main() {
		double MPI=3.14159265358979323846;
		double vyska =0;
		double polomer =0;
		double objem =0;
		double povrch=0;
		
		cout << "Zadej Vysku kuzele:";
		cin >> vyska;
		cout <<"Zadana vyska je: "<< vyska<< endl;
		
		cout << "Zadej polomer kuzele:";
		cin >> polomer;
		cout <<"Zadany polomer je: "<< polomer << endl;
		
		objem=double(1)/double(3)*MPI*polomer*polomer*vyska;
		povrch=MPI*polomer*(polomer+sqrt(polomer*polomer+vyska*vyska));
		
		cout <<"Dopocitany objem je: "<< objem <<"   "<<"Dopocitany povrch je: "<< povrch<< endl;
		ofstream soubor;
	soubor.open("soubor.txt", ios::app);
	soubor << "Zadana vyska je: " << vyska<< endl;
	soubor << "Zadany polomer je: " << polomer << endl;
	soubor << "Dopocitan objem je: " << objem  << endl; 
	soubor << "Dopocitany povrch je: " << povrch << endl;
	
	soubor.close();
		
return 0;
}