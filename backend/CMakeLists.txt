
add_subdirectory(smgr)

add_subdirectory(schema)

add_subdirectory(plan)


set(yoba_src
    ${yoba_src}
    backend/clientinteractor.cpp 
    backend/console.cpp 
    backend/executor.cpp 
    backend/qparser.cpp 
    backend/yobalog.cpp
    PARENT_SCOPE)
