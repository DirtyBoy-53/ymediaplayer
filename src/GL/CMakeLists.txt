add_library(ygl "")

target_sources(ygl
#   PRIVATE
    # ${CMAKE_CURRENT_LIST_DIR}/glew.c
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/glew.h
  )

target_include_directories(ygl
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )
