//Write a program that uses a while to sum th numbers from
//50 to 100.


#include <iostream>
int main()
{
    int num = 0, sum = 50;
    while(num <= 50){
        num++;
        std::cout << sum << std::endl;
        sum++;
    }

    return 0;
}
