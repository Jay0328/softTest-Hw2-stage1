#include <iostream>
#include "triangle.h"
#include "gtest/gtest.h"

using namespace std;

TEST(Path_Testing, all_out_of_range) {
    EXPECT_EQ("Value of a,b,c is not in the range of permitted values", isTriangle(0, 0, 0));
    EXPECT_EQ("Value of a,b,c is not in the range of permitted values", isTriangle(201, 0, 0));
    EXPECT_EQ("Value of a,b,c is not in the range of permitted values", isTriangle(0, 201, 0));
    EXPECT_EQ("Value of a,b,c is not in the range of permitted values", isTriangle(0, 0, 201));
    EXPECT_EQ("Value of a,b,c is not in the range of permitted values", isTriangle(201, 201, 0));
    EXPECT_EQ("Value of a,b,c is not in the range of permitted values", isTriangle(201, 0, 201));
    EXPECT_EQ("Value of a,b,c is not in the range of permitted values", isTriangle(0, 201, 201));
    EXPECT_EQ("Value of a,b,c is not in the range of permitted values", isTriangle(201, 201, 201));
}

TEST(Path_Testing, a_b_out_of_range) {
    EXPECT_EQ("Value of a,b is not in the range of permitted values", isTriangle(0, 0, 100));
    EXPECT_EQ("Value of a,b is not in the range of permitted values", isTriangle(0, 201, 100));
    EXPECT_EQ("Value of a,b is not in the range of permitted values", isTriangle(201, 0, 100));
    EXPECT_EQ("Value of a,b is not in the range of permitted values", isTriangle(201, 201, 100));
}

TEST(Path_Testing, a_c_out_of_range) {
    EXPECT_EQ("Value of a,c is not in the range of permitted values", isTriangle(0, 100, 0));
    EXPECT_EQ("Value of a,c is not in the range of permitted values", isTriangle(201, 100, 0));
    EXPECT_EQ("Value of a,c is not in the range of permitted values", isTriangle(0, 100, 201));
    EXPECT_EQ("Value of a,c is not in the range of permitted values", isTriangle(201, 100, 201));
}

TEST(Path_Testing, b_c_out_of_range) {
    EXPECT_EQ("Value of b,c is not in the range of permitted values", isTriangle(100, 0, 0));
    EXPECT_EQ("Value of b,c is not in the range of permitted values", isTriangle(100, 201, 0));
    EXPECT_EQ("Value of b,c is not in the range of permitted values", isTriangle(100, 0, 201));
    EXPECT_EQ("Value of b,c is not in the range of permitted values", isTriangle(100, 201, 201));
}

TEST(Path_Testing, a_out_of_range) {
    EXPECT_EQ("Value of a is not in the range of permitted values", isTriangle(0, 100, 100));
    EXPECT_EQ("Value of a is not in the range of permitted values", isTriangle(201, 100, 100));
}

TEST(Path_Testing, b_out_of_range) {
    EXPECT_EQ("Value of b is not in the range of permitted values", isTriangle(100, 0, 100));
    EXPECT_EQ("Value of b is not in the range of permitted values", isTriangle(100, 201, 100));
}

TEST(Path_Testing, c_out_of_range) {
    EXPECT_EQ("Value of c is not in the range of permitted values", isTriangle(100, 100, 0));
    EXPECT_EQ("Value of c is not in the range of permitted values", isTriangle(100, 100, 201));
}

TEST(Path_Testing, none_out_of_range) {
    EXPECT_EQ("Equilateral", isTriangle(100, 100, 100));
}
