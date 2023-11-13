add_library(yutil "")

glob_header_directories(HEADER ${CMAKE_CURRENT_LIST_DIR})
target_sources(yutil
#   PRIVATE
  PUBLIC ${HEADER}
  )

target_include_directories(yutil
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )