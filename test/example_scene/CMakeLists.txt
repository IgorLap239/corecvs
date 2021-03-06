cmake_minimum_required(VERSION 3.11)
set(MODULE_NAME test)
init_project(PROJECT_NAME example_scene)

find_package(Qt5 REQUIRED COMPONENTS Xml)

set(PRIVATE_HEADER_FILE
    main_example_scene.h
    )
    
set(HEADERS
    ${PRIVATE_HEADER_FILE}
    )

set(SOURCE_FILE
    main_example_scene.cpp
    )

set(SOURCES
    ${SOURCE_FILE}
    )

assign_source_group(${HEADERS} ${SOURCES})

add_executable(${PROJECT_NAME}
    ${HEADERS}
    ${SOURCES}
    )

set(ADDITIONAL_LIBS)

if(PNG_LIB)
    set(ADDITIONAL_LIBS
        ${ADDITIONAL_LIBS}
        LIBPNGwrapper
        )
    add_definitions(-DWITH_LIBPNG)
endif()

if(JPEG_LIB)
    set(ADDITIONAL_LIBS
        ${ADDITIONAL_LIBS}
        LIBJPEGwrapper
        )
    add_definitions(-DWITH_LIBJPEG)
endif()

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    stdc++fs 
    corecvs
    corecvs_utils
    Qt5::Xml
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