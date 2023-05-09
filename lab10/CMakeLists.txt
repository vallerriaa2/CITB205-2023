cmake_minimum_required(VERSION 3.16)

project(lab10 LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

qt_standard_project_setup()

qt_add_executable(lab10 main.cpp)

set_target_properties(lab10 PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)

target_link_libraries(lab10 PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
)