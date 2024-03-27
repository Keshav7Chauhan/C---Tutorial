// A copy constructor is a member function that initializes an object using another object of the same class.

#include <iostream>
using namespace std;
class Wall
{
private:
  double length;
  double height;

public:
  Wall(double len, double hgt)
  {
    length = len;
    height = hgt;
  }
  Wall(Wall &obj)
  {
    length = obj.length;
    height = obj.height;
  }
  double calculateArea()
  {
    return length * height;
  }
};
int main()
{
  Wall wall(10.5, 8.6);
  cout << "Area of Wall : " << wall.calculateArea() << endl;
  return 0;
}