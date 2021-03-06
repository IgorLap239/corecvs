cmake_minimum_required(VERSION 3.11)
set(MODULE_NAME test)
init_project(PROJECT_NAME gcodeplayground)

set(PRIVATE_HEADER_FILES
    labelGcodeInterpreter.h 
    )

set(HEADERS
    ${PRIVATE_HEADER_FILES}
    )

set(SOURCE_FILES
    labelGcodeInterpreter.cpp  
    main_gcodeplayground.cpp 
    )

set(SOURCES
    ${SOURCE_FILES}
    )

assign_source_group(${HEADERS} ${SOURCES})

add_executable(${PROJECT_NAME}
    ${HEADERS}
    ${SOURCES}
    )

set(ADDITIONAL_LIBS)

if (PNG_LIB)
    set(ADDITIONAL_LIBS
        ${ADDITIONAL_LIBS}
        PNGwrapper
        )
endif()

if (JPEG_LIB)
    set(ADDITIONAL_LIBS
        ${ADDITIONAL_LIBS}
        LIBJPEGwrapper
        )
endif()

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    pthread
    corecvs
    ${ADDITIONAL_LIBS}
    )

set_target_properties(${PROJECT_NAME}
    PROPERTIES
    FOLDER "${MODULE_NAME}"
    )

copy_directory(${PROJECT_NAME} 
    ${PROJECT_BINARY_DIR}/${MODULE_NAME}/${PROJECT_NAME}
    ${CMAKE_BINARY_DIR}/bin/${PROJECT_NAME}
    )