add_executable(unit_test unit_test.cpp)
add_test(unit_test unit_test)
target_link_libraries(unit_test my_lib)