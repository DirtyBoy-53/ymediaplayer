add_library(ythird "")

target_sources(ythird
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/spdlog/ylog.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/spdlog/ylog.h
  )

target_include_directories(ythird
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/spdlog
  )