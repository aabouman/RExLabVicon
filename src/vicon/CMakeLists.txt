CMAKE_MINIMUM_REQUIRED (VERSION 2.8.12)

set(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")
PROJECT(vicon)

# SET(CMAKE_CXX_FLAGS "-g -Wall -Werror -std=c++11")
set(CMAKE_CXX_STANDARD 11)


find_package(cppzmq REQUIRED)
find_package(Protobuf REQUIRED)
include_directories(${Protobuf_INCLUDE_DIRS})

# # Include tinytoml 
# find_path(
#     TOML_INCLUDE_DIR 
#     NAMES "toml.h"
#     PATHS "${CMAKE_CURRENT_SOURCE_DIR}/extern/tinytoml/include/toml"
# )
# include_directories(${TOML_INCLUDE_DIR})
# message("-- Found tinytoml: ${TOML_INCLUDE_DIR}")


add_subdirectory(extern/simple_vicon)

set(PROTO_MESSAGE_DIR ../../gen/msgs)
set(TINYTOML_DIR extern/tinytoml)
# set(HEADERS ${PROTO_MESSAGE_DIR}/message.pb.h ${PROTO_MESSAGE_DIR}/message.pb.cc ${TINYTOML_DIR}/include/toml)
set(HEADERS ${PROTO_MESSAGE_DIR}/message.pb.h ${PROTO_MESSAGE_DIR}/message.pb.cc)

add_library(vicon_driver_zmq src/ViconDriverZMQ.cpp include/ViconDriverZMQ.h ${HEADERS})
target_include_directories(vicon_driver_zmq PUBLIC include ${PROTO_MESSAGE_DIR} ${TOML_INCLUDE_DIR})
target_link_libraries(vicon_driver_zmq PUBLIC vicon_driver)

add_executable(example src/server.cpp ${HEADERS})
target_include_directories(example PUBLIC ${PROTOBUF_INCLUDE_DIRS} ${PROTO_MESSAGE_DIR})
target_link_libraries(example ${PROTOBUF_LIBRARIES} cppzmq vicon_driver_zmq)
