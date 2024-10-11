add_executable(Interop main.cpp func.swift)
# set_target_properties(Interop PROPERTIES Swift_MODULE_NAME "SwiftInteroppenheimer")
target_compile_options(Interop PUBLIC "$<$<COMPILE_LANGUAGE:Swift>:-cxx-interoperability-mode=default>")

_swift_generate_cxx_header(Interop Interop/Interop-swift.h)