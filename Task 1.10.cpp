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
