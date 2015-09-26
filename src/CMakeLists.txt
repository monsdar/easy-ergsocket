

#find the needed thirdparty
set (C2SDK "D:/Concept2/Software Development Kit" CACHE PATH "Sets the directory where the C2 SDK headers reside")
FILE(GLOB C2SDK_LIBRARIES ${C2SDK}/*.lib)

set (EASYERG_LIBRARY "E:/Github/build_easy-erg/src/Release/easy-erg.lib" CACHE FILEPATH "Sets the path to the easy-erg library")
set (EASYERG_INCLUDES "E:/Github/easy-erg/src" CACHE PATH "Sets the path to the easy-erg includes")

set (PROTO_INCLUDES "E:/Github/protobuf-2.6.1/src" CACHE PATH "Sets the path to the Protobuf includes")
set (PROTO_LIBRARY "E:/Github/protobuf-2.6.1/vsprojects/Release/libprotobuf.lib" CACHE PATH "Sets the path to the Protobuf library")
FILE (GLOB PROTO_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/../proto/generated/*.cc)
FILE (GLOB PROTO_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/../proto/generated/*.h)

set (ZMQ_LIBRARY "E:/Github/zmq/lib/libzmq-v120-mt-4_0_4.lib" CACHE FILEPATH "Sets the path to the ZMQ library")
set (ZMQ_INCLUDES "E:/Github/zmq/include" CACHE PATH "Sets the path to the ZMQ includes")

#gather our files
FILE (GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/impl/*.cpp)
FILE (GLOB HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*.h)

#build the executable
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../proto/generated ${EASYERG_INCLUDES} ${C2SDK} ${ZMQ_INCLUDES} ${PROTO_INCLUDES})
add_executable (easy-ergsocket ${SOURCES} ${HEADERS} ${PROTO_SOURCES} ${PROTO_HEADERS})
target_link_libraries(easy-ergsocket ${C2SDK_LIBRARIES} ${EASYERG_LIBRARY} ${ZMQ_LIBRARY} ${PROTO_LIBRARY})
