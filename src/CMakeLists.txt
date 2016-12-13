add_library(my_lib my_class.cpp)

target_include_directories(my_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(main main.cpp)
target_link_libraries(main my_lib)