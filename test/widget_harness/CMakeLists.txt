project (widget_harness)


set (NAME widget_harness)

set (SRC_FILES
    changeReceiver.h
    main_widget_harness.cpp
)

if (PNG_LIB)
    include(../../wrappers/libpng/sourcelist.cmake)
endif()
    
if (JPEG_LIB)
    include(../../wrappers/libjpeg/sourcelist.cmake)
endif()

add_executable(${NAME} ${SRC_FILES} ${HDR_FILES})
include_directories(${INC_PATHS})

target_link_libraries(${NAME} ${LIBS} cvs_utils stdc++fs corecvs)
