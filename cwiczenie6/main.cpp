#include <iostream>
#include <string>

int main()
{



double mydouble = 3.14;
double& myreference = mydouble;
int x;
int y;
double* p = mydouble;

myreference = 6.28;

std::cout  << "values:"  << mydouble << "and" << myreference << std::endl; 


mydouble = 9.27;


std::cout  << "values:"  << mydouble << "and" << myreference << std::endl; 

std::cout << "pointer value" << *p  << std::endl;










return 0;
}
