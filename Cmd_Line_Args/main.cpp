#include <iostream>

int main(int argc, char **argv) {
    /* first argv[] contains program name
     * argc = Number of command line argument
     * argv = contains command line argument in form of array*/
    if (argc > 1) {
        for (int i = 1; i <= argc; i++)
            std::cout << argv[i] << " ";
    } else
        std::cout << "No argument entered";
    return 0;
}