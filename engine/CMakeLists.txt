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

find_package(SDL2 REQUIRED)
target_link_libraries(justified_engine SDL2::SDL2)