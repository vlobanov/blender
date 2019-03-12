#include "testing/testing.h"
#include "BLI_optional.hpp"
#include <string>

using namespace BLI;

TEST(optional, DefaultConstructor)
{
	Optional<int> a;
	EXPECT_FALSE(a.has_value());
}

TEST(optional, ValueConstructor)
{
	Optional<int> a(5);
	EXPECT_TRUE(a.has_value());
	EXPECT_EQ(a.value(), 5);
}

TEST(optional, CopyConstructor)
{
	Optional<std::string> a("Hello");
	Optional<std::string> b = a;
	EXPECT_TRUE(a.has_value());
	EXPECT_TRUE(b.has_value());
	b.value()[0] = 'T';
	EXPECT_EQ(a.value(), "Hello");
	EXPECT_EQ(b.value(), "Tello");
}

TEST(optional, Reset)
{
	Optional<int> a(4);
	EXPECT_TRUE(a.has_value());
	a.reset();
	EXPECT_FALSE(a.has_value());
}