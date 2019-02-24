// The MIT License (MIT)

// Copyright (c) 2018 sora_061

//  Permission is hereby granted, free of charge, to any person obtaining a
//  copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation
//  the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NON INFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.

/* code */

#include <iostream>

//using namespace std;

class calculate {
public:
    void primegenerator(int, int);
};

int main(int argc, char const *argv[]) {
    int x, y;
    char choice;
    do {
        std::cout << "Enter a range to see the prime numbers between them: \n";
        std::cin >> x >> y;
        calculate c;
        c.primegenerator(x, y);

        std::cin.ignore();
        std::cin.get();
        std::cout << "\nDo you want to do it again: y/n\n";
        std::cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    return 0;
}

void calculate::primegenerator(int x, int y) {
    if (x < y) {
        for (int i = x; i <= y; i++) {
            bool prime = true;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    prime = false;
                    break;
                }
            }
            if (prime)
                std::cout << i << " ";
        }
    } else {
        for (int i = x; i >= y; i--) {
            bool prime = true;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    prime = false;
                    break;
                }
            }
            if (prime)
                std::cout << i << " ";
        }
    }
}
