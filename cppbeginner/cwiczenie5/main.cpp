#include <iostream>
#include <string>

int main()
{

int x;
int y;
int arr[5] = {10,20,30,40,50};

arr[0] = 100;


std::string s = "hello world";
std::cout << "zmienna: "<< s << std::endl;
std::cout << "dlugosc: " << s.length() << std::endl;
std::cout << "zakres: " << s.at(0) << std::endl;

if (s.at(0) == 'h') //s.at sprawdza tylko 1 znak nie zakres 
    { 
      std::cout << "zakres poprawny" << std::endl;

     }
    else {
            std::cout << "zakres niesprawdzony" << std::endl;
         }

if (s.substr(0,5) == "hello")
 {
    std::cout << "zakres od 0.5 substr porawny" << std::endl;
    std::cout << "substr: " << s.substr(0,5) << std::endl;
  }
else 
   {
     std::cout << "zakres substr niepoprawny" << std::endl;
    }

std::string s1 =  "test"; 

int i = {3};

std::cout << "bledny zakresy przy wyborze string.at(I) dlatego uzywamy at.() a nie s[]:" << std::endl;
std::cout << s1.at(i);
std::cout << std::endl;


std::string s2;
std::cout << "wpisz string" << std::endl;
std::getline(std::cin, s2);
std::cout << s2 << std::endl;



return 0;
}
