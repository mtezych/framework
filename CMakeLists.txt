
cmake_minimum_required (VERSION 3.11)


add_library                (framework STATIC)

target_include_directories (framework PUBLIC  include)

target_compile_features    (framework PUBLIC  cxx_std_14)

target_sources             (framework PRIVATE include/framework/Framework.h
                                                         source/Framework.cxx)

target_link_libraries      (framework PRIVATE util)
