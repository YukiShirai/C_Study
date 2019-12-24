#include <iostream>
//int main() {
//
//    int sum = 0;
//    int current = 10;
//    while (current > 0)
//    {
//        sum+=current;
//        current--;
//        std::cout << "The sum is : " << current  << std::endl;
//    }
//
//
//
//
//    std::cout << "The sum is : " << sum  << std::endl;
//    return 0;
//}


int main() {
    int val = 10;
    while (val >= 0)
        std::cout << val-- << " ";
    std::cout << std::endl;
    return 0;
}