#include <iostream>
#include <string>

int main()
{

int x = 256;
int y;
int i = {0};
int arr[3] = {5,10,15}; 
bool condition = false;

const int z = 250;
const double d = 200.50;
const char c = 'c';
const std::string s = "hello";
const int c2 = z;


std::cout << z << std::endl;
std::cout << d << std::endl;
std::cout << c << std::endl;
std::cout << s << std::endl;
std::cout << c2 << std::endl;



if(condition)
{
std::cout << "condition is true" << std::endl;
}
else
{

   for (i = 0; i < 3; i++ )
    {
    std::cout << "i wynosi: " << arr[i] << std::endl;
     }

}

bool test = ( x > 100 && x < 300);
bool test1 = "true";
bool test2 = !test1;

std::cout << test2 << std::endl;


if (x > 100 || test1)
 {
   std::cout << "dziala" << std::endl;
 }

switch (3) 
{
case 1:
 std::cout << "value is 1"<< std::endl;
break;
case 2:
 std::cout << "value is 2" << std::endl;
break;
case 3:
 std::cout << "value is 3" << std::endl;
break;
default:
 std::cout << "didnt find value" << std::endl;
break;
}
return 0;
}
