#include "include/foo.hpp"
#include "gtest/gtest.h"

class FooTest : public Foo, public testing::Test {
protected:
    FooTest() {};
    ~FooTest() {};

    void SetUp() override {};

    void TearDown() override {};
    
};

TEST_F(FooTest, CheckLists) {
    EXPECT_TRUE(FooZoo("fish"));
    EXPECT_TRUE(FooZoo("monkey"));
};

TEST_F(FooTest, CheckLists) {
    EXPECT_TRUE(FooZoo("elephant")) << "this animal is not in zoo";
    EXPECT_TRUE(FooZoo("tiger")) << "this animal is not in zoo" ;
};

TEST(Addition, CheckTotal) {
int a = 5;
int b = 2;
EXPECT_EQ(a+b, 7);
};


int main (int argc, char ** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
};


