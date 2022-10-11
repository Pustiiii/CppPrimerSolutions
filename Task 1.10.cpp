// In addition to the ++ operator that adds 1 to its operand,
//there is a decrement operator (--) that subtracts 1. Use the decrement
//operator to write a while that prints the numbers from ten down to zero.

#include <iostream>
int main()
{
    int num = 1, sum = 10;
    while(num <= 10){
        num++;
        std::cout << sum << std::endl;
        sum--;
    }
    return 0;
}
