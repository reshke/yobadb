#pragma once

#include <vector>
#include <string>

struct ColumnSchema {
    std::string colname;
    /* type */
    std::string type;
};

typedef std::vector<ColumnSchema> Schema;
