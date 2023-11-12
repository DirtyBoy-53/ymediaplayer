add_library(yutil "")

target_sources(yutil
#   PRIVATE

  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/yframe.h
    ${CMAKE_CURRENT_LIST_DIR}/ygl.h
  )

target_include_directories(yutil
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )