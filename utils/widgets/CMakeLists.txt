set(WIDGETS_HEADER_FILES
    ${CMAKE_CURRENT_LIST_DIR}/angleEditBox.h
    ${CMAKE_CURRENT_LIST_DIR}/exponentialSlider.h
    ${CMAKE_CURRENT_LIST_DIR}/foldableWidget.h
    ${CMAKE_CURRENT_LIST_DIR}/graphPlotParametersControlWidget.h
    ${CMAKE_CURRENT_LIST_DIR}/inputSelectorWidget.h
    ${CMAKE_CURRENT_LIST_DIR}/loggerWidget.h
    ${CMAKE_CURRENT_LIST_DIR}/observationListModel.h
    ${CMAKE_CURRENT_LIST_DIR}/parameterEditorWidget.h
    ${CMAKE_CURRENT_LIST_DIR}/parameterSelector.h
    ${CMAKE_CURRENT_LIST_DIR}/parameterSlider.h
    ${CMAKE_CURRENT_LIST_DIR}/patternDetectorParametersWidget.cpp
    ${CMAKE_CURRENT_LIST_DIR}/shift3dWidget.h
    ${CMAKE_CURRENT_LIST_DIR}/transform3DSelector.h
    ${CMAKE_CURRENT_LIST_DIR}/vectorWidget.h
    ${CMAKE_CURRENT_LIST_DIR}/generated/graphPlotParameters.h
    ${CMAKE_CURRENT_LIST_DIR}/generated/graphStyle.h
    ${CMAKE_CURRENT_LIST_DIR}/generated/patternFromPoseParameters.h
    PARENT_SCOPE
    )

set(WIDGETS_SOURCE_FILES
    ${CMAKE_CURRENT_LIST_DIR}/angleEditBox.cpp
    ${CMAKE_CURRENT_LIST_DIR}/exponentialSlider.cpp
    ${CMAKE_CURRENT_LIST_DIR}/foldableWidget.cpp
    ${CMAKE_CURRENT_LIST_DIR}/graphPlotParametersControlWidget.cpp
    ${CMAKE_CURRENT_LIST_DIR}/inputSelectorWidget.cpp
    ${CMAKE_CURRENT_LIST_DIR}/loggerWidget.cpp
    ${CMAKE_CURRENT_LIST_DIR}/observationListModel.cpp
    ${CMAKE_CURRENT_LIST_DIR}/parameterEditorWidget.cpp
    ${CMAKE_CURRENT_LIST_DIR}/parameterSelector.cpp
    ${CMAKE_CURRENT_LIST_DIR}/parameterSlider.cpp
    ${CMAKE_CURRENT_LIST_DIR}/patternDetectorParametersWidget.cpp
    ${CMAKE_CURRENT_LIST_DIR}/shift3dWidget.cpp
    ${CMAKE_CURRENT_LIST_DIR}/transform3DSelector.cpp
    ${CMAKE_CURRENT_LIST_DIR}/vectorWidget.cpp
    ${CMAKE_CURRENT_LIST_DIR}/generated/graphPlotParameters.cpp
    ${CMAKE_CURRENT_LIST_DIR}/generated/patternFromPoseParameters.cpp
    PARENT_SCOPE
    )