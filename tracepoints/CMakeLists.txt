cmake_minimum_required(VERSION 3.8)
project(soatracer_tp)

find_package(LTTngUST REQUIRED)

include_directories(include)

add_library(${PROJECT_NAME} STATIC src/soatracer_tp.cpp include/soatracer_tp.h)

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

#target_compile_options(${PROJECT_NAME} PRIVATE LTTngUST)
target_link_libraries(${PROJECT_NAME} PUBLIC LTTng::UST)

#set_property(SOURCE src/soatracer_tp.cpp PROPERTY COMPILE_FLAGS "-DLTTNG_UST_TRACEPOINT_CREATE_PROBES")