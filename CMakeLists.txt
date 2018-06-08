cmake_minimum_required(VERSION 3.10)
project(chap6)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES app/Pr6-1.cpp app/Pr6-2.cpp app/Pr6-3.cpp
        app/Pr6-4.cpp app/Pr6-5.cpp app/Pr6-6.cpp
        app/Pr6-7.cpp app/Pr6-8.cpp app/Pr6-9.cpp
        app/Pr6-10.cpp app/Pr6-11.cpp app/Pr6-12.cpp
        app/Pr6-13.cpp app/Pr6-14.cpp app/Pr6-15.cpp
        app/Pr6-17.cpp app/Pr6-18.cpp app/Pr6-19.cpp
        app/Pr6-20.cpp app/Pr6-21.cpp app/Pr6-22.cpp
        app/Pr6-23.cpp app/Pr6-24.cpp app/Pr6-25.cpp
        app/Pr6-26.cpp app/Pr6-27.cpp app/Pr6-28.cpp
        app/Pr6-29.cpp app/Pr6-30.cpp
        app/AreaRectangle.cpp app/HealthClubWithStub.cpp)

add_executable(Pr6-1.exe app/Pr6-1.cpp)
add_executable(Pr6-2.exe app/Pr6-2.cpp)
add_executable(Pr6-3.exe app/Pr6-3.cpp)
add_executable(Pr6-4.exe app/Pr6-4.cpp)
add_executable(Pr6-5.exe app/Pr6-5.cpp)
add_executable(Pr6-6.exe app/Pr6-6.cpp)
add_executable(Pr6-7.exe app/Pr6-7.cpp)
add_executable(Pr6-8.exe app/Pr6-8.cpp)
add_executable(Pr6-10.exe app/Pr6-10.cpp)
add_executable(Pr6-11.exe app/Pr6-11.cpp)
add_executable(Pr6-12.exe app/Pr6-12.cpp)
add_executable(Pr6-13.exe app/Pr6-13.cpp)
add_executable(Pr6-14.exe app/Pr6-14.cpp)
add_executable(Pr6-15.exe app/Pr6-15.cpp)
add_executable(Pr6-16.exe app/Pr6-16.cpp)
add_executable(Pr6-17.exe app/Pr6-17.cpp)
add_executable(Pr6-18.exe app/Pr6-18.cpp)
add_executable(Pr6-19.exe app/Pr6-19.cpp)
add_executable(Pr6-20.exe app/Pr6-20.cpp)
add_executable(Pr6-21.exe app/Pr6-21.cpp)
add_executable(Pr6-22.exe app/Pr6-22.cpp)
add_executable(Pr6-23.exe app/Pr6-23.cpp)
add_executable(Pr6-24.exe app/Pr6-24.cpp)
add_executable(Pr6-25.exe app/Pr6-25.cpp)
add_executable(Pr6-26.exe app/Pr6-26.cpp)
add_executable(Pr6-27.exe app/Pr6-27.cpp)
add_executable(Pr6-28.exe app/Pr6-28.cpp)
add_executable(Pr6-29.exe app/Pr6-29.cpp)
add_executable(Pr6-30.exe app/Pr6-30.cpp)
add_executable(AreaRectangle.exe app/AreaRectangle.cpp)
add_executable(HealthClubWithStub.exe app/HealthClubWithStub.cpp)

if (WIN32)
    set(SFML_STATIC_LIBRARIES TRUE)
endif()

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED COMPONENTS audio graphics window system)

#if (SFML_FOUND)
#    include_directories(${SFML_INCLUDE_DIR})
#    if (WIN32)
#        target_link_libraries(draw_sin.exe ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
#        target_link_libraries(draw_map.exe ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
#    else()
#        target_link_libraries(draw_sin.exe ${SFML_LIBRARIES})
#        target_link_libraries(draw_map.exe ${SFML_LIBRARIES})
#    endif()
#endif()
