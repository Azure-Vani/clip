# Clip Library
# Copyright (C) 2015-2016 David Capello

cmake_minimum_required(VERSION 2.6)

project(clip CXX)
option(CLIP_EXAMPLES "Compile clip examples" on)

include_directories(.)
set(CLIP_SOURCES clip.cpp)

if(WIN32)
  add_definitions(-D_SCL_SECURE_NO_WARNINGS)
  list(APPEND CLIP_SOURCES clip_win.cpp)
endif()

if(APPLE)
  add_definitions(-fobjc-arc)
  list(APPEND CLIP_SOURCES clip_osx.mm)
endif()

if(UNIX)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")
  list(APPEND CLIP_SOURCES clip_x11.cpp)
endif()

add_library(clip ${CLIP_SOURCES})

if(APPLE)
  find_library(COCOA_LIBRARY Cocoa)
  target_link_libraries(clip ${COCOA_LIBRARY})
endif()

if(CLIP_EXAMPLES)
  add_subdirectory(examples)
endif()
