cmake_minimum_required(VERSION 3.16)
project(hello LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

qt_standard_project_setup()

qt_add_executable(hello
    main.cpp
    window.cpp window.h
    greeter.cpp greeter.h
)

set_target_properties(hello PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)

target_link_libraries(hello PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
)

# Resources:
set(hello_resource_files
    "images/hello.png"
)

qt_add_resources(hello "hello"
    PREFIX
        "/"
    FILES
        ${hello_resource_files}
)
