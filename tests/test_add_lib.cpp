//
// Created by Gorun on 2023/6/3.
//

#include "add.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Add test", "[add]") {
    REQUIRE(add(1, 2) == 3);
}