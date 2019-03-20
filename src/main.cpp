
#include<iostream>
using namespace std;

#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
using namespace degreemath;
#else
#define _USE_MATH_DEFINES
#include "math.h"
#include<cmath>
#endif

//int main(){
//#ifdef USE_TRIGONOMETRY_DEGREE
//	str::cout<<"STOPNIE"<<std::endl;
//	std::cout<<"Sin 0: " << degreemath::sin(0)<<std::endl;
//	std::cout<<"Sin 30: " << degreemath::sin(30)<<std::endl;
//
//	std::cout<<"Cos 0: " << degreemath::cos(0)<<std::endl;
//	std::cout<<"Cos 30: " << degreemath::cos(30)<<std::endl;
//
//	std::cout<<"Tg 0: " << degreemath::tg(0)<<std::endl;
//	std::cout<<"Tg 30: " << degreemath::tg(30)<<std::endl;
//
//	std::cout<<"Ctg 0: " << degreemath::ctg(0)<<std::endl;
//	std::cout<<"Ctg 30: " << degreemath::ctg(30)<<std::endl;
//#else
//	std::cout<<"RADIANY"<<std::endl;
//	std::cout<<"Sin 30: " << std::sin(M_PI/6)<<std::endl;
//
//	std::cout<<"Cos 30: " << std::cos(M_PI/6)<<std::endl;
//
//	std::cout<<"Tg 30: " << std::tan(M_PI/6)<<std::endl;
//
//	std::cout<<"Ctg 30: " << 1/std::tan(M_PI/6)<<std::endl;
//#endif
//return 0;
//}

int main(int argc,char*argv[]){
	if (argc==3)
	{
	double result = 0;
	std::string opcja = argv[1];
	if(!opcja.compare("--sin"))
	{
#ifdef USE_TRIGONOMETRY_DEGREE
result = degreemath:sin(atof(argv[2]));
#else
		result = cos(atof(argv[2]));
#endif
		std::cout<<"wynik: "<< result <<std::endl;
	}

		if(!opcja.compare("--cos"))
	{
#ifdef USE_TRIGONOMETRY_DEGREE
result = degreemath:cos(atof(argv[2]));
#else
		result = cos(atof(argv[2]));
#endif
		std::cout<<"wynik: "<< result <<std::endl;
	}
	
			if(!opcja.compare("--tg"))
	{
#ifdef USE_TRIGONOMETRY_DEGREE
result = degreemath:tg(atof(argv[2]));
#else
		result = cos(atof(argv[2]));
#endif
		std::cout<<"wynik: "<< result <<std::endl;
	}

				if(!opcja.compare("--ctg"))
	{
#ifdef USE_TRIGONOMETRY_DEGREE
result = degreemath:tcg(atof(argv[2]));
#else
		result = cos(atof(argv[2]));
#endif
		std::cout<<"wynik: "<< result <<std::endl;
	}
	}
return 0;
}