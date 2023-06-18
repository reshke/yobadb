#pragma once
#include <string>
#include <schema/schema.h>

enum YobaNodeType {
    CreateTable,
    DropTable
};

class YobaNode {
    public:
    YobaNodeType type;
    void *body;

    YobaNode(YobaNodeType t, void * body);
};


struct YobaCreateTable {
    std::string tname;
    Schema tschema;
};

struct YobaDropTable {
    std::string tname;
};