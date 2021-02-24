cmake_minimum_required(VERSION 3.19)
project(empire)

set(CMAKE_CXX_STANDARD 17)

add_library(empire_engine src/Empire.h src/window/Window.cpp src/window/Window.h src/errors/ErrorStatus.h src/component/ComponentInterface.h src/renderer/VulkanRenderer.cpp src/renderer/VulkanRenderer.h src/renderer/ShaderLoader.cpp src/renderer/ShaderLoader.h src/renderer/Vertex.h src/application/Application.cpp src/application/Application.h src/log/Logger.cpp src/log/Logger.h src/log/LogLevel.h src/event/Event.h src/event/KeyEvent.h src/event/KeyPressedEvent.cpp src/event/KeyPressedEvent.h src/event/KeyReleasedEvent.cpp src/event/KeyReleasedEvent.h src/event/MouseMovedEvent.h src/event/MouseButtonReleasedEvent.cpp src/event/MouseButtonReleasedEvent.h src/event/MouseButtonPressedEvent.cpp src/event/MouseButtonPressedEvent.h src/event/MouseButtonScrolledEvent.cpp src/event/MouseButtonScrolledEvent.h src/event/EventDispatcher.h src/event/WindowResizeEvent.cpp src/event/WindowResizeEvent.h src/window/WindowData.h)

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
target_include_directories(empire_engine PUBLIC ${glfw3_DIR} ${Vulkan_INCLUDE_DIRS} ${GLM_INCLUDE_DIRS} ${GLEW_INCLUDE_DIR} src)

# link
target_link_libraries(empire_engine ${LIBS})