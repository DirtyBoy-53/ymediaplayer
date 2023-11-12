

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



# #qt
# set(QT_LIB yqt)
# include_directories(${PROJECT_SOURCE_DIR}/src/qt)
# add_subdirectory(src/qt)


# #hv
# set(HV_LIB yhv)
# include_directories(${PROJECT_SOURCE_DIR}/src/hv)
# include_directories(${PROJECT_SOURCE_DIR}/src/hv/base)
# include_directories(${PROJECT_SOURCE_DIR}/src/hv/utils)
# add_subdirectory(src/hv)


# #global
# set(GLOBAL_LIB yglobal)
# include_directories(${PROJECT_SOURCE_DIR}/src/global)
# add_subdirectory(src/global)

# #util
# set(UTIL_LIB yutil)
# include_directories(${PROJECT_SOURCE_DIR}/src/util)
# add_subdirectory(src/util)

# #gl
# set(GL_LIB ygl)
# include_directories(${PROJECT_SOURCE_DIR}/src)
# include_directories(${PROJECT_SOURCE_DIR}/src/GL)
# add_subdirectory(src/GL)

# #third
# set(THIRD_LIB ythird)
# include_directories(${PROJECT_SOURCE_DIR}/src/third/spdlog)
# add_subdirectory(src/third/spdlog)

# set(SRC_APP ./main.cc)

# add_executable(ymediaplayer ${SRC_APP} ${SRC_BASE} ${SRC_UTILS})

# #lib

# link_libraries(${HV_LIB})
# link_libraries(${QT_LIB})
# link_libraries(${GLOBAL_LIB})
# link_libraries(${UTIL_LIB})
# link_libraries(${GL_LIB})
# link_libraries(${THIRD_LIB})
