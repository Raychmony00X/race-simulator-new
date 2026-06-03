cmake_minimum_required(VERSION 3.5)
project(RaceSimulator)
file(GLOB APP_SOURCES "*.cpp")
add_executable(${PROJECT_NAME} ${APP_SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE RaceSimulatorDynamicLib)
target_include_directories(${PROJECT_NAME} PRIVATE 
    ${CMAKE_SOURCE_DIR}/RaceSimulatorDynamicLib/include
)
message(STATUS "Building: ${PROJECT_NAME}")