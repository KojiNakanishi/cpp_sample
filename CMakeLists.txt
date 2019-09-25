cmake_minimum_required(VERSION 2.8.12)

project(cpp_sample)

set(ODE_DIR "../ode-0.16")
find_package(OpenGL)
find_package(X11)
link_directories(${ODE_DIR}/ode/src/.libs)
link_directories(${ODE_DIR}/drawstuff/src/.libs)

file(GLOB SRCS "src/*.cc"
               "src/sim/*.cc")

add_executable(${PROJECT_NAME} ${SRCS})

target_include_directories(${PROJECT_NAME} PRIVATE ${ODE_DIR}/include)

target_link_libraries(${PROJECT_NAME}
                      ode
		      drawstuff
		      ${OPENGL_LIBRARIES}
		      ${X11_LIBRARIES}
		      )

target_compile_options(${PROJECT_NAME} PRIVATE "-std=c++11" "-Wall" "-O2")
