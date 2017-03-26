# Sets the minimum version of CMake required to build the native
# library. You should either keep the default value or only pass a
# value of 3.4.0 or lower.

cmake_minimum_required(VERSION 3.4.1)

set( APP_SRC
     src/main/cpp/native-lib.cpp
     src/main/cpp/tools.c )

add_library( native-lib
             SHARED
             ${APP_SRC} )

find_library( log-lib
              log )

target_link_libraries( native-lib
                       ${log-lib} )
