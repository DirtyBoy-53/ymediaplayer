#Qt
# 设置moc rcc uic
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_PREFIX_PATH "D:/Compiler/Qt/5.15.2/msvc2015_64") 
set(Qt5_DIR "D:/Compiler/Qt/5.15.2/msvc2015_64/lib/cmake/Qt5")
# set(CMAKE_PREFIX_PATH "F:/Computer/Qt/5.15.2/msvc2015_64")
# set(Qt5_DIR "F:/Computer/Qt/5.15.2/msvc2015_64/lib/cmake/Qt5")
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)
qt5_add_resources(QRC_FILES source.qrc)

add_library(yqt)

glob_header_directories(HEADER ${CMAKE_CURRENT_LIST_DIR})
glob_source_directories(SOURCE ${CMAKE_CURRENT_LIST_DIR})

target_sources(yqt
  PRIVATE ${SOURCE}
  PUBLIC ${HEADER}
  )



target_link_libraries(yqt PRIVATE Qt5::Core Qt5::Gui Qt5::Widgets)

target_link_libraries(yqt
  PRIVATE
    yhv
    yutil
    yglobal
    ythird
)
target_include_directories(yqt
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )