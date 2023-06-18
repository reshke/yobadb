#pragma once

#include <string>

enum YobaLogLevel {
    DEBUG5,
    DEBUG4,
    DEBUG3,
    DEBUG2,
    DEBUG1
};

int yobalog(YobaLogLevel level, std::string msg);