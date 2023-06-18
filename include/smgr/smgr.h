#include "smgr/storage_coord.h"
#include "memory"

class StorageManager {
    virtual void CreateTable(storage_coord coord) = 0;
};

std::shared_ptr<StorageManager> loadSmgr();