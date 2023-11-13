add_library(yhv "")

glob_header_directories(BASE_HEADER ${CMAKE_CURRENT_LIST_DIR}/base)
glob_source_directories(BASE_SOURCE ${CMAKE_CURRENT_LIST_DIR}/base)
glob_header_directories(UTIL_HEADER ${CMAKE_CURRENT_LIST_DIR}/utils)
glob_source_directories(UTIL_SOURCE ${CMAKE_CURRENT_LIST_DIR}/utils)
glob_header_directories(CUR_HEADER ${CMAKE_CURRENT_LIST_DIR})

target_sources(yhv
  PRIVATE ${BASE_SOURCE} ${UTIL_SOURCE}
  PUBLIC ${BASE_HEADER} ${UTIL_HEADER} ${CUR_HEADER}
  )

target_include_directories(yhv
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/base/
    ${CMAKE_CURRENT_LIST_DIR}/utils/
  )