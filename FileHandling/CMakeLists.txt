# set(CMAKE_CXX_STANDARD 14)
# message("CXX Standard: ${CMAKE_CXX_STANDARD}")
# set(TRIAL_VARIABLE "ANUV JAIN")
# message("${TRIAL_VARIABLE}")
# set(TRIAL_VARIABLE "${TRIAL_VARIABLE} PARAG GAONKAR IS FAN OF")
# message("${TRIAL_VARIABLE}")

# set(files a.txt b.txt c.txt)

# message("FILES: ${files}")

# foreach(file ${files})  
#     message("Filename: ${file}")
# endforeach()

message("CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
message("CMAKE_BINARY_DIR: ${CMAKE_BINARY_DIR}")

#Disable in-source builds to prevent source tree corruption
if("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
message(FATAL_ERROR "FATAL: In-source builds are not allowed. You should create a separate directory for build files.")
endif()
cmake_minimum_required(VERSION 3.9.1)

project(CMakeHello)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# # UNIX, WIN32, WINRT, CYGWIN, APPLE are environment variables as flags set by default system
# if(UNIX)
#     message("This is a ${CMAKE_SYSTEM_NAME} system")
# elseif(WIN32)
#     message("This is a Windows System")
# endif()

# # or use MATCHES to see if actual system name 
# # Darwin is Apple's system name
# if(${CMAKE_SYSTEM_NAME} MATCHES Darwin)
#     message("This is a ${CMAKE_SYSTEM_NAME} system")
# elseif(${CMAKE_SYSTEM_NAME} MATCHES Windows)
#     message("This is a Windows System")
# endif()

# # or use MATCHES to see if actual system name 
# # Darwin is Apple's system name
# if(${CMAKE_SYSTEM_NAME} MATCHES Darwin)
#     add_definitions(-DCMAKEMACROSAMPLE="Apple MacOS")
# elseif(${CMAKE_SYSTEM_NAME} MATCHES Windows)
#     add_definitions(-DCMAKEMACROSAMPLE="Windows PC")
# elseif(${CMAKE_SYSTEM_NAME} MATCHES Linux)
#     add_definitions(-DCMAKEMACROSAMPLE="Ubuntu Jammy Jellyfish")
# endif()

# telling cmake where to make the executable
# method 1
# set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
# method 2
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
# for library
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# creating the executable: method 1
# add_executable(cmake_hello hello.cpp lib/math/Operations.cpp lib/math/Operations.hpp)

# #creating the executable: method 2
set(SOURCES hello.cpp
            lib/math/Operations.hpp
            lib/math/Operations.cpp)
add_executable(cmake_hello ${SOURCES})
