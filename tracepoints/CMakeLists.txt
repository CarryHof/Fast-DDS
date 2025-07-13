cmake_minimum_required(VERSION 3.8)
project(soatracer_tp)

find_package(LTTngUST REQUIRED)

include_directories(include)

add_library(${PROJECT_NAME} SHARED src/soatracer_tp.cpp src/soatracer_disc_tp.cpp include/soatracer_disc_tp.h) #include/soatracer_tp.h src/provider2_tp.cpp include/provider2_tp.h) 
target_compile_options(soatracer_tp PRIVATE -fPIC)

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

#target_compile_options(${PROJECT_NAME} PRIVATE LTTngUST)
target_link_libraries(${PROJECT_NAME} PUBLIC LTTng::UST)

#set_property(SOURCE src/soatracer_tp.cpp PROPERTY COMPILE_FLAGS "-DLTTNG_UST_TRACEPOINT_CREATE_PROBES")


install(TARGETS ${PROJECT_NAME}
    EXPORT soatracer_tp-targets
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)
install(EXPORT soatracer_tp-targets
    FILE soatracer_tp-targets.cmake
    NAMESPACE soatracer_tp::
    DESTINATION lib/cmake/soatracer_tp
)
install(DIRECTORY include/ DESTINATION include)