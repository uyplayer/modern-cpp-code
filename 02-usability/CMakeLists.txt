



project(02-usability)



set(SOURCES
#        nullptr.cpp
#        constexpr.cpp
#        switch.cpp
#        Constructor_Initializer_List.cpp
#        tuple.cpp
#        auto.cpp
#        decltype.cpp
#        if-constexpr.cpp
        for.cpp
        ../04-containers/std-array.cpp
)


add_executable(${PROJECT_NAME} ${SOURCES})