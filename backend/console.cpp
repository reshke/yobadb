
#include <iostream>
#include <yobalog.h>
#include <string>
#include "clientinteractor.h"


const std::string hellomsg = "\n"
" Welcome to Yoba DB! \n"
"The world most yoba database 💪💪💪💪\n"
"enjoy your data 💅💅💅\n\n";

int console() {

    std::cout << hellomsg;

    for (;;) {
        reply("");
        std::string query;
        getline(std::cin, query);

        if (query.size()) {
            yobalog(YobaLogLevel::DEBUG5, "got query " + query + "\n");
        }
    }

    return 0;
}