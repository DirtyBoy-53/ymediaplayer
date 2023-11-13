
#Qt
# 设置moc rcc uic
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
# set(CMAKE_PREFIX_PATH "D:/Compiler/Qt/5.15.2/msvc2015_64") 
set(Qt5_DIR "F:/Computer/Qt/5.15.2/msvc2015_64/lib/cmake/Qt5")
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)
link_libraries(Qt5::Core Qt5::Gui Qt5::Widgets)

add_library(yqt "")

target_sources(yqt
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/videowidget.cpp
    ${CMAKE_CURRENT_LIST_DIR}/mainwindow.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/videowidget.h
    ${CMAKE_CURRENT_LIST_DIR}/qtfunctions.h
    ${CMAKE_CURRENT_LIST_DIR}/qtheaders.h
    ${CMAKE_CURRENT_LIST_DIR}/qtstyles.h
    ${CMAKE_CURRENT_LIST_DIR}/mainwindow.h
  )

target_link_libraries(yqt
  PRIVATE
    yhv
    yutil
    yglobal
)
target_include_directories(yqt
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )