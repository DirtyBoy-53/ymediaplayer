add_library(yhv "")

target_sources(yhv
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/base/hbase.c
    ${CMAKE_CURRENT_LIST_DIR}/base/hdir.cpp
    ${CMAKE_CURRENT_LIST_DIR}/base/herr.c
    ${CMAKE_CURRENT_LIST_DIR}/base/hlog.c
    ${CMAKE_CURRENT_LIST_DIR}/base/hsocket.c
    ${CMAKE_CURRENT_LIST_DIR}/base/hssl.c
    ${CMAKE_CURRENT_LIST_DIR}/base/hstring.cpp
    ${CMAKE_CURRENT_LIST_DIR}/base/htime.c
    ${CMAKE_CURRENT_LIST_DIR}/base/hurl.cpp
    ${CMAKE_CURRENT_LIST_DIR}/base/hversion.c
    ${CMAKE_CURRENT_LIST_DIR}/base/ifconfig.cpp
    ${CMAKE_CURRENT_LIST_DIR}/base/RAII.cpp
    ${CMAKE_CURRENT_LIST_DIR}/base/ThreadLocalStorage.cpp

    ${CMAKE_CURRENT_LIST_DIR}/utils/base64.c
    ${CMAKE_CURRENT_LIST_DIR}/utils/hmain.cpp
    ${CMAKE_CURRENT_LIST_DIR}/utils/iniparser.cpp
    ${CMAKE_CURRENT_LIST_DIR}/utils/md5.c
    ${CMAKE_CURRENT_LIST_DIR}/utils/sha1.c

  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/base/ThreadLocalStorage.h
    ${CMAKE_CURRENT_LIST_DIR}/base/ifconfig.h
    ${CMAKE_CURRENT_LIST_DIR}/base/list.h
    ${CMAKE_CURRENT_LIST_DIR}/base/netinet.h
    ${CMAKE_CURRENT_LIST_DIR}/base/queue.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hversion.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hurl.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hstring.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hsysinfo.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hthread.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hthreadpool.h
    ${CMAKE_CURRENT_LIST_DIR}/base/htime.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hlog.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hmap.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hmath.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hmutex.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hobjectpool.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hplatform.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hproc.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hscope.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hssl.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hsocket.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hdir.h
    ${CMAKE_CURRENT_LIST_DIR}/base/heap.h
    ${CMAKE_CURRENT_LIST_DIR}/base/herr.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hfile.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hbase.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hbuf.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hdef.h
    ${CMAKE_CURRENT_LIST_DIR}/base/hatomic.h
    ${CMAKE_CURRENT_LIST_DIR}/base/array.h

    ${CMAKE_CURRENT_LIST_DIR}/utils/md5.h
    ${CMAKE_CURRENT_LIST_DIR}/utils/sha1.h
    ${CMAKE_CURRENT_LIST_DIR}/utils/singleton.h
    ${CMAKE_CURRENT_LIST_DIR}/utils/iniparser.h
    ${CMAKE_CURRENT_LIST_DIR}/utils/json.hpp
    ${CMAKE_CURRENT_LIST_DIR}/utils/hmain.h
    ${CMAKE_CURRENT_LIST_DIR}/utils/base64.h
    ${CMAKE_CURRENT_LIST_DIR}/utils/hendian.h

    ${CMAKE_CURRENT_LIST_DIR}/hconfig.h
    ${CMAKE_CURRENT_LIST_DIR}/hexport.h
    ${CMAKE_CURRENT_LIST_DIR}/hv.h
  )

target_include_directories(yhv
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/base/
    ${CMAKE_CURRENT_LIST_DIR}/utils/
  )