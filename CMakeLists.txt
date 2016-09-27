cmake_minimum_required (VERSION 3.5)
project (Plez_Streamer)
add_executable(Plez_Streamer main.cpp Plez_Server.cpp Plez_Server.h)

find_package(Boost COMPONENTS system)

if (Boost_FOUND)
    message(STATUS "BOOST FOUND")
    include_directories(${Boost_INCLUDE_DIR})
    target_link_libraries(Plez_Streamer ${Boost_LIBRARIES})
endif()