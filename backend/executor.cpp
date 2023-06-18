
#include "executor.h"
#include "plan/node.h"
#include "smgr/smgr.h"
#include "smgr/storage_coord.h"
#include "qparser.h"

int exe(std::string q) {
    auto rs = parse(q);
    auto smgr = loadSmgr();
    switch (rs->type) {
        case YobaNodeType::CreateTable:
        smgr->CreateTable(storage_coord{
            tableSpace: 0,
            dboid: 0,
            reloid: 1,
        });
        break;
        case YobaNodeType::DropTable:
        break;
    }
}