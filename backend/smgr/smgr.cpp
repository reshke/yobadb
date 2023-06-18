
#include "smgr/smgr.h"
#include "smgr/ysmgr.h"

std::shared_ptr<StorageManager> loadSmgr() {
    return std::make_shared<StorageManager>(YSmgr());
}