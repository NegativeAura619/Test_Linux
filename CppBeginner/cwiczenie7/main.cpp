#include <iostream>
#include <string>

int main()
{

int x;
int y;


std::string s = "hello  c++ world";
char c = 'c';

auto found = s.find(c);

if(found != std::string::npos)
{
 std::cout << "found at " << found << std::endl;
}
else 
{
std::cout << "nie nzaleziono"  << std::endl;
}












return 0;
}
