cmake_minimum_required(VERSION 3.5)

project(RGLSimulatorItemPlugin)

find_package(Choreonoid REQUIRED)

set(target RGLSimulatorItemPlugin)

set(sources RGLSimulatorItem.cpp)

set(headers RGLSimulatorItem.hpp exportdecl.hpp)

choreonoid_make_header_public(${headers})
choreonoid_make_gettext_mo_files(${target} mofiles)
choreonoid_add_plugin(${target} ${sources} ${mofiles} ${RC_SRCS} HEADERS ${headers})
target_link_libraries(${target} PUBLIC Choreonoid::CnoidBodyPlugin)
