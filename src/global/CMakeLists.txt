add_library(yglobal "")

target_sources(yglobal
#   PRIVATE

  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/appdef.h
    ${CMAKE_CURRENT_LIST_DIR}/confile.h
  )

target_include_directories(yglobal
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )