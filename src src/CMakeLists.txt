add_executable(Interop main.cpp func.swift)
# changes namespace of swift functions
set_target_properties(Interop PROPERTIES Swift_MODULE_NAME "SwiftInteroppenheimer")
target_compile_options(Interop PRIVATE "$<$<COMPILE_LANGUAGE:Swift>:-cxx-interoperability-mode=default>")
target_compile_options(Interop PRIVATE $<$<COMPILE_LANGUAGE:Swift>:-parse-as-library>)
target_compile_options(Interop PRIVATE $<$<COMPILE_LANGUAGE:CXX>:-fno-c++-static-destructors>)
_swift_generate_cxx_header(Interop Interop/Interop-swift.h) 