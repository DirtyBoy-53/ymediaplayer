#Qt
# 设置moc rcc uic
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
# set(CMAKE_PREFIX_PATH "D:/Compiler/Qt/5.15.2/msvc2015_64") 
set(Qt5_DIR "D:/Compiler/Qt/5.15.2/msvc2015_64/lib/cmake/Qt5")
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)
link_libraries(Qt5::Core Qt5::Gui Qt5::Widgets)


add_executable(ymediaplayer main.cc)

add_subdirectory(GL)
add_subdirectory(global)
add_subdirectory(hv)
add_subdirectory(qt)
add_subdirectory(third)
add_subdirectory(util)

target_link_libraries(ymediaplayer
  PRIVATE
    ygl
    yglobal
    yhv
    yqt
    ythird
    yutil
  )
