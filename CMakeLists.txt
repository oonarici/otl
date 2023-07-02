cmake_minimum_required(VERSION 3.10.0)

project(OTL)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(src/omap)

target_include_directories(${PROJECT_NAME} 
                PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/omap/)

target_link_directories(${PROJECT_NAME} 
                PRIVATE /src/omap/)

target_link_libraries(${PROJECT_NAME} omap)

