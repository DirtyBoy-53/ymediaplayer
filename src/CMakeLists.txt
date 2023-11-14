#Qt
# 设置moc rcc uic
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
# set(CMAKE_PREFIX_PATH "D:/Compiler/Qt/5.15.2/msvc2015_64") 
# set(Qt5_DIR "D:/Compiler/Qt/5.15.2/msvc2015_64/lib/cmake/Qt5")
set(CMAKE_PREFIX_PATH "F:/Computer/Qt/5.15.2/msvc2015_64")
set(Qt5_DIR "F:/Computer/Qt/5.15.2/msvc2015_64/lib/cmake/Qt5")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)
include_directories(${Qt5Widgets_INCLUDE_DIRS}
                    )

# add_subdirectory(GL)
add_subdirectory(global)
add_subdirectory(hv)
add_subdirectory(qt)
# add_subdirectory(third)
add_subdirectory(util)

# set qrc dir
# set(skin_QRC ${CMAKE_SOURCE_DIR}/skin.qrc)
# qt_add_resources(skin_RC ${skin_QRC})
# message(SKIN_RC=${skin_RC})
qt5_add_resources(qrc_FILES skin.qrc)
add_executable(ymediaplayer main.cc ${qrc_FILES})

target_link_libraries(ymediaplayer PRIVATE Qt5::Core Qt5::Gui Qt5::Widgets)

target_link_libraries(ymediaplayer
  PRIVATE
    # ygl
    yglobal
    yhv
    yqt
    ythird
    yutil
  )
