project(show_result_test)

add_executable(${PROJECT_NAME} show_result_test.cpp)

target_include_directories(${PROJECT_NAME}
PUBLIC
${Show_Result_Dir}
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
show_result
)

add_test(
    NAME draw_result_test
    COMMAND ${PROJECT_NAME}
)