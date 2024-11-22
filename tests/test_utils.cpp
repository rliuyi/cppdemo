#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "utils.h"
#include "database.h"

// 使用 Google Mock 创建一个模拟的 Database 类
class MockDatabase : public Database {
public:
    MOCK_METHOD(std::string, fetchData, (), (override));
};

// 测试使用 Mock 对象的逻辑
TEST(UtilsTest, TestWithMockDatabase) {
    // 创建 MockDatabase 对象
    MockDatabase mockDb;

    // 设置期望
    EXPECT_CALL(mockDb, fetchData()).WillOnce(testing::Return("Mocked data"));

    // 你可以在代码中使用这个 Mock 对象
    EXPECT_EQ(mockDb.fetchData(), "Mocked data");
}

TEST(UtilsTest, Add) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-1, 1), 0);
    EXPECT_EQ(add(0, 0), 0);
}

TEST(UtilsTest, Subtract) {
    EXPECT_EQ(subtract(3, 2), 1);
    EXPECT_EQ(subtract(0, 1), -1);
    EXPECT_EQ(subtract(0, 0), 0);
}
