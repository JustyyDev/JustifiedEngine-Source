file(GLOB ENGINE_SRC
    "*.cpp"
    "window/*.cpp"
    "renderer/*.cpp"
    "input/*.cpp"
    "audio/*.cpp"
    "physics/*.cpp"
    "assets/*.cpp"
    "scripting/*.cpp"
)

add_library(justified_engine STATIC ${ENGINE_SRC})

target_include_directories(justified_engine PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/window
    ${CMAKE_CURRENT_SOURCE_DIR}/renderer
    ${CMAKE_CURRENT_SOURCE_DIR}/input
    ${CMAKE_CURRENT_SOURCE_DIR}/audio
    ${CMAKE_CURRENT_SOURCE_DIR}/physics
    ${CMAKE_CURRENT_SOURCE_DIR}/assets
    ${CMAKE_CURRENT_SOURCE_DIR}/scripting
)

# Replace this:
# find_package(SDL2 REQUIRED)

# Add these lines:
set(SDL2_INCLUDE_DIR "C:/libs/SDL2/include")
set(SDL2_LIBRARY "C:/libs/SDL2/lib/x64/SDL2.lib")

include_directories(${SDL2_INCLUDE_DIR})
target_link_libraries(justified_engine ${SDL2_LIBRARY})