#include <iostream>
#include <cmath>
#include "Vector2.h"

int main (){
    Vector2 a(1, 1);
    Vector2 b(2, 3);
    Vector2 c = a + b;
    std::cout << c.getLen() << std::endl;
    std::cout << c.getPhi() << std::endl;
    std::cout << c.getPhiDeg() << std::endl;
    return 0;
}

















