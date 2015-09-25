

#find the needed thirdparty
set (C2SDK "D:/Concept2/Software Development Kit" CACHE PATH "Sets the directory where the C2 SDK headers reside")
FILE(GLOB C2SDK_LIBRARIES ${C2SDK}/*.lib)

set (EASYERG_LIBRARY "E:/Github/build_easy-erg/src/Release/easy-erg.lib" CACHE FILEPATH "Sets the path to the easy-erg library")
set (EASYERG_INCLUDES "E:/Github/easy-erg/src" CACHE PATH "Sets the path to the easy-erg includes")

#gather our files
FILE (GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/impl/*.cpp)
FILE (GLOB HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*.h)

#build the executable
include_directories(${EASYERG_INCLUDES} ${C2SDK})
add_executable (easy-ergsocket ${SOURCES} ${HEADERS})
target_link_libraries(easy-ergsocket ${C2SDK_LIBRARIES} ${EASYERG_LIBRARY})
