set(CATCH_PATH "../ext_src/Catch2/single_include/catch2")
add_subdirectory(game)
add_executable(kata_test
        $<TARGET_OBJECTS:kata_lib> test_main.cpp ${CATCH_PATH}/catch.hpp
        game/unit_tests.cpp )
target_include_directories(kata_test PRIVATE ${CATCH_PATH})
add_executable(kata $<TARGET_OBJECTS:kata_lib> main.cpp utility/not_implemented.h)
