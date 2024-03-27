// In programming, an abstract class in C++ has at least one pure virtual function by definition. In other words, a function that has no definition.

// Syntax:

// C-lass classname //abstract class

// {

// //data members

// public:

// //pure virtual function

// /* Other members */

// };



// #include <iostream>
// using namespace std;
// class Shape
// {
// public:
//     // All the functions of both square and rectangle are clubbed together in a single class.
//     void width(int w)
//     {
//         shape_width = w;
//     }
//     void height(int h)
//     {
//         shape_height = h;
//     }
//     int rectangle(int l, int b)
//     {
//         return (l * b);
//     }

// protected:
//     int shape_width;
//     int shape_height;
// };
// int main()
// {
//     Shape R;
//     R.width(5);
//     R.height(10);
//     cout<< " area is "<< R.rectangle << endl;
//     return 0;
// }