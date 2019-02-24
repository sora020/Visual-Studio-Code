#include<iostream>

int main(int argc, char **argv) {
    int n;
    char ch;
    bool prime = true;
    do {
        std::cout << "Enter a Number: ";
        std::cin >> n;
        if (n == 0 || n == 1) {
            std::cout << "Neither composite nor prime" << std::endl;
        } else {
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    prime = false;
                    break;
                } else
                    prime = true;
            }
            if (prime)
                std::cout << n << " is a prime number" << std::endl;
            else
                std::cout << n << " is not a prime number" << std::endl;
        }
        std::cout << "Enter your choice y/n";
        std::cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    return 0;
}