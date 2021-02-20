cmake_minimum_required(VERSION 3.19)
project(empire)

set(CMAKE_CXX_STANDARD 17)

add_library(empire_engine src/empire.cpp src/empire.h src/window/window.cpp src/window/window.h src/errors/error_status.h src/component/component_interface.h src/renderer/vulkan_renderer.cpp src/renderer/vulkan_renderer.h src/renderer/shader_loader.cpp src/renderer/shader_loader.h)

# Vulkan
find_package(Vulkan REQUIRED)
message("Vulkan included at ${Vulkan_INCLUDE_DIRS}")

# GLM
find_package(glm REQUIRED)
message("GLM included at ${GLM_INCLUDE_DIRS}")

# GLFW
find_package(glfw3 REQUIRED)
message("Found GLFW3 in ${glfw3_DIR}")

# GLEW
find_package(GLEW REQUIRED)
message("Found GLEW in ${GLEW_INCLUDE_DIR}")

# Put all libraries into a variable
set(LIBS glfw ${Vulkan_LIBRARIES} glm GLEW ${EMPIRE_LIBRARY})

add_custom_target(compileShader COMMAND bash ./scripts/compile_shaders.sh )

configure_file(res/shaders/default_vert.spv ${CMAKE_CURRENT_BINARY_DIR}/res/shaders/default_vert.spv COPYONLY)
configure_file(res/shaders/default_frag.spv ${CMAKE_CURRENT_BINARY_DIR}/res/shaders/default_frag.spv COPYONLY)

# external includes
target_include_directories(empire_engine PUBLIC ${glfw3_DIR} ${Vulkan_INCLUDE_DIRS} ${GLM_INCLUDE_DIRS} ${GLEW_INCLUDE_DIR} )

# link
target_link_libraries(empire_engine ${LIBS})