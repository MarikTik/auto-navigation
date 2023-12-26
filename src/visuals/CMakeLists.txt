

add_library(visualslib
     map.cpp
)


target_link_libraries(visualslib
     sfml-system 
     sfml-window 
     sfml-graphics 
     # sfml-network 
     # sfml-audio
)

 
target_include_directories(visualslib PUBLIC ${CMAKE_SOURCE_DIR}/include/visuals)