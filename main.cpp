#include <iostream>

/*Modify the main.cpp file to print your name and classroom.
 Create a new variable called z and print the sum of x, y, and z.
 Create a new variable called w and print the product of x, y, z, and w.
 Create a new variable called v and print the division of x, y and v.*/

int main()
{
  std::cout << "Hello, this is Kevin Nie from AUV Classroom number 24-115" << std::endl;

  int x = 5;
  int y = 7;
  int z = 9;
  int w = 11;
  int v = 13;

  std::cout << "The sum of " << x << ", " << y << ",and " << z << "is " << x + y + z << std::endl;
  std::cout << "The product of " << x << ", " << y << ", " << z << ", and " << w << " is " << x*y*z*w << std::endl;
  std::cout << "The division of " << x << ", " << y << ", " << v<< " is " <<x/y/v<< std::endl;

  return 0;
}

/* Subtract takes in two ints x and y and returns an int x-y*/
int subtract(int x, int y){ return x - y; }

/* Multiply takes in two ints x and y and returns an int x*y*/
int multiply(int x, int y ){ return x * y; }

/* Divide takes in two ints x and y and returns an int x/y*/
int divide(int x, int y) {
  if (y == 0)
    throw std::invalid_argument("Recieved negative value");
  return x/y;
  }
