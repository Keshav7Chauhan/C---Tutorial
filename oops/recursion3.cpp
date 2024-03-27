// // Fibonacci

// #include <iostream>
// using namespace std;
// int fibonacci(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main()
// {
//     int n;

//     std::cout << "Enter the number of terms in the Fibonacci series: ";
//     std::cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         std::cout << fibonacci(i) << " ";
//     }

//     return 0;
// }

// Fibonacci Series in C++ Without Using Recursion
// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, n, t1 = 0, t2 = 1, T;
//     cin >> n;

//     for (i = 1; i <= n; i++)
//     {
//         cout << t1 << " ";
//         T = t1 + t2;
//         t1 = t2;
//         t2 = T;
//     }

//     return 0;
// }

// Fibonacci Series in C++ Using Recursion
// #include <iostream>
// using namespace std;

// // Recursive function for Fibonacci
// int fibonacci(int n) {
//     // If n is zero or one, return the number itself
//     if (n <= 1) {
//         return n;
//     }
//     // Recursive call to n-1 and n-2
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int n;
//     n = 10;
//     cout << fibonacci(n);
// }

