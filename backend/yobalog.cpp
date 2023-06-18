
#include <yobalog.h>

#include <iostream>

int yobalog(YobaLogLevel level, std::string msg) {
    switch (level) {
        case YobaLogLevel::DEBUG5:
        std::cout << "DEBUG5:";
        break;
        case YobaLogLevel::DEBUG4:
        std::cout << "DEBUG4:";
        break;
        case YobaLogLevel::DEBUG3:
        std::cout << "DEBUG3:";
        break;
        case YobaLogLevel::DEBUG2:
        std::cout << "DEBUG2:";
        break;
        case YobaLogLevel::DEBUG1:
        std::cout << "DEBUG1:";
        break;
    }
    std::cout << msg << "\n";
}