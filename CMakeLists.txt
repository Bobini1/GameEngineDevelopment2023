cmake_minimum_required(VERSION 3.25)
project(LabsOgre)

set(CMAKE_CXX_STANDARD 11)

add_executable(LabsOgre main.cpp MyEngine.cpp MyEngine.h)

find_package(OGRE 13.2.4 CONFIG REQUIRED)
find_package(SDL2 REQUIRED)

target_link_libraries(LabsOgre PUBLIC OgreMain OgreBites OgreMeshLodGenerator OgreOverlay OgrePaging OgreProperty OgreTerrain OgreVolume OgreRTShaderSystem SDL2::SDL2 SDL2::SDL2main)

target_precompile_headers(LabsOgre PUBLIC <OgreRTShaderSystem.h> <Ogre.h> <OgreApplicationContext.h> <OgreInput.h>
        <SDL.h> <iostream>)

# copy plugins.cfg and resources.cfg to build directory
file(COPY plugins.cfg DESTINATION ${CMAKE_BINARY_DIR})
file(COPY resources.cfg DESTINATION ${CMAKE_BINARY_DIR})
