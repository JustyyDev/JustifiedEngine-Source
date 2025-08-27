cmake_minimum_required(VERSION 3.16)
project(JustifiedEngine)

set(CMAKE_CXX_STANDARD 17)

# Engine core
add_subdirectory(engine)

# Editor (C++/ImGui, can add C# or Python bindings later)
add_subdirectory(editor)

# Optionally, add bindings and templates dirs as needed