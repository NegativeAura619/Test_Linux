#include<string>
#include<iostream>

void customMessage(const std::string& byreference);
void printmessage();
int multiplication(int x, int y);

int main()
{

std::string message = "hello";

printmessage();
int wynik = multiplication(5, 10);

std::cout << wynik << std::endl;

customMessage(message);

return 0;
}


void printmessage()
{
std::cout << "printing" << std::endl; 
}

int multiplication(int x, int y)
{
int c = x * y;
return c;
}

void customMessage(const std::string& byreference)
{
std::cout << byreference << std::endl;
}

