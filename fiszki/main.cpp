#include <iostream>
#include <string>
#include <cstdlib>


int main()
{

std::string f = "placeholder";

std::string english[2] = {"jeden","dwa"};
std::string dutch[2] = {"one","two"};
int a = {0};

srand(time(0));

int b = rand() 0 % 2;

std::cout << "podaj tlumaczenie slowa " << english[b] << std::endl;
std::cin >> f;

for(int i = 0;  i<2;  i++)
{
auto characterfound = dutch[i].find(f);

if(characterfound !=std::string::npos && i == b )

{

std::cout <<"brawo zgadles "<< std::endl;
a = i;

}
else
{
std::cout << "slowa nie znaleziono " << std::endl;
}}









return 0;
};
