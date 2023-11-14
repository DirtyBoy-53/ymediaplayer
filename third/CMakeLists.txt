add_library(ythird "")

target_sources(ythird
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/spdlog/ylog.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/spdlog/ylog.h
    ${CMAKE_CURRENT_LIST_DIR}/GL/glew.h
  )

target_include_directories(ythird
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/spdlog
    ${CMAKE_CURRENT_LIST_DIR}/GL
  )