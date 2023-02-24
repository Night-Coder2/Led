set(LED_CPP_CLASS .)

add_library(Led
        Led.cpp
        )

target_include_directories(Led PUBLIC
        ${LED_CPP_CLASS}
        ${LED_CPP_CLASS}/include
        )

target_link_libraries(Led pico_stdlib)