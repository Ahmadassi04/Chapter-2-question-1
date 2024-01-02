#include <iostream>

int readNumber(){

    int x{};
    std::cout << "Enter a number: ";
    std::cin >> x;

    return x;
}

void writeAnswer(int x){

    std::cout << "The answer is: " << x << '\n';

}

int main(){

    int y{readNumber()};
    int z{readNumber()};

    int sum(y + z);

    writeAnswer(sum);

return 0;
}






