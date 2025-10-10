set(LIB_NAME lib_random)
set(LIB_VERSION 1.3.1)
set(LIB_DEPENDENT_MODULES "")
set(LIB_INCLUDES api)
set(LIB_COMPILER_FLAGS  -g -Os
                        -Wall
                        -Wextra
                        -Werror
                        -Wconversion
                        -Wdiv-by-zero
                        -Wfloat-equal
                        -Wsign-compare)

XMOS_REGISTER_MODULE()
