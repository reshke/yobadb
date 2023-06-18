
#include "qparser.h"

std::shared_ptr<YobaNode> parse(std::string qraw) {
    if (qraw[0] == 'c') {
        return std::make_shared<YobaNode>(YobaNodeType::CreateTable, nullptr);
    } else {
        /* d */

        return std::make_shared<YobaNode>(YobaNodeType::DropTable, nullptr);
    }
}