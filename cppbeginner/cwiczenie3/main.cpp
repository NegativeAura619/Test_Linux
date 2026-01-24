#include <iostream>


int main()
{

int x = 123;
int y;

 x = x++;
 x += 20;

//std::cout << "result" << x;

double arr[5] = {3.14, 2.15, 5.15, 15.23, 5.6};

std::cout << arr[0] << " , "  << arr[4] << std::endl; 


arr[0] = 1.15;
arr[4] = 3.123;



std::cout << arr[0] << " , "  << arr[4] << std::endl; 







return 0;
}
