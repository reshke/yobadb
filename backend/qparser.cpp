
#include "qparser.h"

std::shared_ptr<YobaNode> parse(std::string qraw) {
    if (qraw[0] == 'c') {
        return std::make_shared<YobaNode>(YobaCreateTable, nullptr);
    } else {
        /* d */

        return std::make_shared<YobaNode>(YobaDropTable, nullptr);
    }
}