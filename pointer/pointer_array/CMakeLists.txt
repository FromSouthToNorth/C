if (USE_OPENMP)
    find_package(OpenMP)
endif ()
file(GLOB APP_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.c)
foreach (testsourcefile ${APP_SOURCES})
    string(REPLACE ".c" "" testname ${testsourcefile})
    add_executable(${testname} ${testsourcefile})
    target_link_libraries(${testname} function_timer)
    set_target_properties(${testname} PROPERTIES LINKER_LANGUAGE C)
    if (OpenMP_C_FOUND)
        target_link_libraries(${testname} OpenMP::OpenMP_C)
    endif ()
    install(TARGETS ${testname} DESTINATION "bin/pointer/pointer_array")

endforeach (testsourcefile ${APP_SOURCES})
