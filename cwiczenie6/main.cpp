#include <iostream>
#include <string>

int main()
{



double mydouble = 3.14;
double& myreference = mydouble;
int x;
int y;
double* p = &mydouble;

myreference = 6.28;

std::cout  << "values:"  << mydouble << "and" << myreference << std::endl; 

std::cout << "pointer value" << *p  << std::endl;

mydouble = 9.27;


std::cout  << "values:"  << mydouble << "and" << myreference << std::endl; 

std::cout << "pointer value" << *p  << std::endl;

std::string tofind = "world";
std::string s = "Hello world";

std::string::size_type found = s.find(tofind);
if(found != std::string::npos)
{
std::cout << "substring found at position: " << found << std::endl;
}
else 
{
std::cout << "substring wasnt found" << found << std::endl;
}











return 0;
}
