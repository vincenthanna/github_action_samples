#include "gtest/gtest.h"

#include "gtest/gtest.h"


class MyTest : public ::testing::Test {
protected:
    // You can remove any or all of the following functions if their bodies would
    // be empty.

    MyTest() {
        // You can do set-up work for each test here.
    }

    ~MyTest() override {
        // You can do clean-up work that doesn't throw exceptions here.
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    void SetUp() override {
        // Code here will be called immediately after the constructor (right
        // before each test).
    }

    void TearDown() override {
        // Code here will be called immediately after each test (right
        // before the destructor).
    }

    // Class members declared here can be used by all tests in the test suite
    // for Foo.
};

TEST_F(MyTest, test1) {
    EXPECT_EQ(1, 1);
}

TEST_F(MyTest, remove_duplicate_test_2) {
    int v = 2;
    EXPECT_EQ(2, v);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
