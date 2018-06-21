#include <iostream>
#include "../include/mathBasic.h"

int main(){
	int op1 = 4;
	int op2 = 5;
	std::cout<<"Operandos "<< op1 <<" e "<< op2 <<std::endl; 
	std::cout<<"SOMANDO: ";
	std::cout<<mbasic::MathBasic::add(op1,op2)<<std::endl;
	std::cout<<"SUBTRAINDO: ";
	std::cout<<mbasic::MathBasic::dif(op1,op2)<<std::endl;
	std::cout<<"MULTIPLICANDO: ";
	std::cout<<mbasic::MathBasic::mux(op1,op2)<<std::endl;
	std::cout<<"DIVISÃO INTEIRA: ";
	std::cout<<mbasic::MathBasic::div(op1,op2)<<std::endl;

    return 0;
}
