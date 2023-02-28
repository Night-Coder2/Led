set(LED_LIB .)

add_library(Led
        Led.cpp
        )

target_include_directories(Led PUBLIC
        ${LED_LIB}
        ${LED_LIB}/include
        )

target_link_libraries(Led pico_stdlib)