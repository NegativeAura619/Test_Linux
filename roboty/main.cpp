#include <vector>
#include <iostream>
#include <string>

class robot
{
public:
 int x,y;
 robot(int xx, int yy) : x(xx), y(yy)
  {
    move();
    x = 0;
    y = 0;
  }

void move();
};

int main()
{


robot o{0,0};


return 0;
}

void robot::move()
{
std::cout << "Initialized, starting position: " << x << y <<std::endl;
}
