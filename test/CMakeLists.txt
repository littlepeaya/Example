cmake_minimum_required(VERSION 3.1)

project(test)

if (BOARD STREQUAL MT9050)
    set(CMAKE_SYSTEM_NAME Linux)
    set(CMAKE_SYSTEM_PROCESSOR arm)

    set(SYSROOT "${TOOLS_PATH}/usr/arm-buildroot-linux-gnueabihf/sysroot")

    set(CMAKE_C_COMPILER "${TOOLS_PATH}/usr/bin/arm-linux-gnueabihf-gcc")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -I${SYSROOT}/usr/include/glib-2.0 -I${SYSROOT}/usr/lib/glib-2.0/include -L/home/littlepea/Example/test/googletest/build/lib -I/home/littlepea/Example/test/googletest/googlemock/include -I/home/littlepea/Example/test/googletest/googletest/include -Wno-abi")

    set(CMAKE_CXX_COMPILER "${TOOLS_PATH}/usr/bin/arm-linux-gnueabihf-g++")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -I${SYSROOT}/usr/include/glib-2.0 -I${SYSROOT}/usr/lib/glib-2.0/include -L/home/littlepea/Example/test/googletest/build/lib -I/home/littlepea/Example/test/googletest/googlemock/include -I/home/littlepea/Example/test/googletest/googletest/include -Wno-abi")

endif()

include_directories(${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/../)

set( SOURCES  "${CMAKE_SOURCE_DIR}/../include/*")


add_executable(test main.cc)


target_link_libraries(${PROJECT_NAME} gmock gtest gmock_main gtest_main pthread glib-2.0 httpserver jsoncpp gobject-2.0 gio-2.0 wpa_client curl rt sqlite3 asound boost_system z)

