#include "trygonometria.h"
#include<iostream>

using namespace degreemath;
using namespace std;

int main(){
	std::cout<<"Sin 0: " << degreemath::sin(0)<<std::endl;
	std::cout<<"Sin 30: " << degreemath::sin(30)<<std::endl;

	std::cout<<"Cos 0: " << degreemath::cos(0)<<std::endl;
	std::cout<<"Cos 30: " << degreemath::cos(30)<<std::endl;

	std::cout<<"Tg 0: " << degreemath::tg(0)<<std::endl;
	std::cout<<"Tg 30: " << degreemath::tg(30)<<std::endl;

	std::cout<<"Ctg 0: " << degreemath::ctg(0)<<std::endl;
	std::cout<<"Ctg 30: " << degreemath::ctg(30)<<std::endl;

return 0;
}