#include <iostream>
#include <string>

int ftest(int x, int y)
{
 std::cout << "inicjalizacja" << std::endl;
 x = y * x;
 std::cout << x << std::endl;
return x;
}

void fpustka(int& referencja);
  


int main()
{




int kwadrat = ftest(5, 10);



std::cout << kwadrat << std::endl;

fpustka(kwadrat);


std::cout << kwadrat << std::endl;





return 0;
}


void fpustka(int& referencja)
{
referencja ++;

}







