#include "smgr/ysmgr.h"

#include "filesystem"
#include "unistd.h"
#include "string"

std::string getPath(storage_coord coord){
    return "base/" + std::to_string(coord.reloid);
}

void
YSmgr::CreateTable(storage_coord coord) {
    fopen(getPath(coord).c_str(), "w");
}