# get source file
macro(list_source_directories srcs)
    unset(tmp)
    foreach(dir ${ARGN})
        aux_source_directory(${dir} tmp)
    endforeach()
    set(${srcs} ${tmp})
    list(FILTER ${srcs} EXCLUDE REGEX ".*_test\\.c")
endmacro()
# get source and header
macro(glob_headers_and_sources files)
    unset(tmp)
    foreach(dir ${ARGN})
        file(GLOB tmp ${dir}/*.h ${dir}/*.c ${dir}/*.hpp ${dir}/*.cpp)
        list(APPEND ${files} ${tmp})
    endforeach()
    list(FILTER ${files} EXCLUDE REGEX ".*_test\\.c")
endmacro()
