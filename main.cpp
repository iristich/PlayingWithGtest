#include "whattotest.cpp"
#include <gtest/gtest.h>

TEST(SumatoriaTest, LoadedVectorTest) {
    vector<int> v = { 1, 2, 3, 4};
    ASSERT_EQ(10, sumatoria(v));
}

TEST(SumatoriaTest, NullVector) {
    vector<int> v;
    ASSERT_EQ(0, sumatoria(v));
}

TEST(SumatoriaTest, VectorWithZero) {
    vector<int> v = { 0 };
    ASSERT_EQ(0, sumatoria(v));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
