add_library(yglobal "")

glob_header_directories(HEADER ${CMAKE_CURRENT_LIST_DIR})

target_sources(yglobal
#   PRIVATE
  PUBLIC ${HEADER}
  )

target_include_directories(yglobal
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )