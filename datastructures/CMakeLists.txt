file(GLOB APP_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.c)

foreach (testsourcefile ${APP_SOURCES})
    string(REPLACE ".c" "" testname ${testsourcefile})
    add_executable(${testname} ${testsourcefile})
    set_target_properties(${testname} PROPERTIES
            LINKER_LANGUAGE CXX
            CXX_STANDARD 14)
    if (OpenMP_CXX_FOUND)
        target_link_libraries(${testname} OpenMP::OpenMP_CXX)
    endif ()
    install(TARGETS ${testname} DESTINATION "bin/datastrcures")
endforeach (testsourcefile ${APP_SOURCES})