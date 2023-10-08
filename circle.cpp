#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

static int radius = 0;
const float phi3 = 3.14 ;
const float phi = 22.0 / 7.0 ;

	 

class lingkaran{
public:
	void input(){
		//input 
		cout << "input radius : ";
		cin >> radius;
	};

	void read(){
		//print a input
		cout << "\nradius : " << radius << ends ;
	};
				
	void area (){
		if (radius  %7==0){
			float luas90 = radius * radius * phi ;
			cout<< "\narea: " << luas90 ;								
		}

		else {
			float Luas = radius * radius * phi3 ;
			cout << "\narea: " <<  Luas;
		}		
	};

	void circumference(){
		if (radius %7==0){
			float kl = radius * 2 * phi ;
			cout<< "\ncircumference : " << kl ;									
		}
		else {
			float kl = radius * 2 * phi3 ;
			cout << "\ncircumference : " <<  kl;
		}	
	};
};
	
	



int main(int argc, char *argv[]) {
	lingkaran lg;
	cout<< "=====Welcome=====\n";
	cout<< "+++++Formula of circle+++++\n\n";
	cout<< "<<<<<please input data correctly^^>>>>>\n\n";
	lg.input();
	char lol[10] ;
	//choose formula
	cout << "\ncircumference(C) area(A)\n"<< ends;
	cout << "choose a formula (C/A) :";
	cin >> lol ;
	//
	lg.read();

	if (strcmp(lol,"A")== 0 || strcmp(lol,"a")== 0){
		lg.area();
		}

	else if (strcmp(lol,"C")== 0 || strcmp(lol,"c")== 0){
		lg.circumference();
		}

	else {
		//the name "formuLa.sh" is useless i write it just make it cool XD
		cout<< "\nFormula.sh : error";
	}

  return 0;
}

