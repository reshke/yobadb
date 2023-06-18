
#include "oid.h"

struct storage_coord
{
    Oid tableSpace /* always zero for now */;
    Oid dboid /* database Oid */;
    Oid reloid /* relation Oid */;
};
