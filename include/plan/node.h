#include <string>
#include <schema/schema.h>

enum YobaNodeType {
    CreateTable,
    DropTable
};

class YobaNode {
    YobaNodeType type;
    void *body;

    YobaNode(YobaNodeType, void * body);
};



struct YobaCreateTable {
    std::string tname;
    Schema tschema;
};

struct YobaDropTable {
    std::string tname;
};