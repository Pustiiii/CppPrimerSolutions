//Write a program that prompts the user for two integers.
//Print each number in the range specified by those two integers

#include <iostream>
int main()
{
    int firstNumber;
    int secondNumber;
    

    std::cout << "Please input your Numbers like this: 1  8  \n";
    std::cin >> firstNumber;
    std::cin >> secondNumber;

    while(firstNumber < secondNumber){
        firstNumber++;
        std::cout << firstNumber;
        std::cout << "\n";
    }

    while(firstNumber > secondNumber){
        firstNumber--;
        std::cout << firstNumber;
        std::cout <<"\n";
    }
}
