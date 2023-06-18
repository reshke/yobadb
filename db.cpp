

#include <iostream>
#include <vector>
#include <string>

#include "console.h"
#include <clientinteractor.h>

void cmdhelp() {
    std::cout << "\n"
    "Yoba DB - the world most yoba database\n"
    "\n"
    "usage:\n"
    "    <yobadbbin> run\n"
    "to see this msg run  <yobadbbin> -h\n"
    "";
}

int main(int argc, char * argv[]) {

    if (argc == 1) {
        std::cout << "no args given" << std::endl;
        return 1;
    }

    if (argc > 2) {
        std::cout << "too many args given" << std::endl;
        return 1;
    }

    std::string arg = argv[1];

    if (arg == "-h") {
        cmdhelp();
        return 0;
    }

    if (arg == "run") {
        return console();
    }

    std::cout  << "unknown action " << arg << " len " << arg.size()  << "\n";

    return 1;
}