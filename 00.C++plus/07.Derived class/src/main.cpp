#include <iostream>
#include <string>
#include "../include/bird.h"
#include "../include/animal.h"

int main(int argc, char *argv[])
{
    std::cout << "Hello world!" << std::endl;
    Bird bird(10, "bird");
    bird.eat();
    bird.sleep();
    bird.breathe();
    bird.printInfo();
    return 0;
}
