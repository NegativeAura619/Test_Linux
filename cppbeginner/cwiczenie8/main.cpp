#include <iostream>
#include <string>

int main()
{

int x{123}; // automatic storage duration 
int* p = new int{x}; // heap / dynamic store duration 






delete p; 










return 0;
}
