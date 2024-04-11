#include "include/tests.h"

#include <filesystem>
#include <string>

#include "stockfishdb.h"

namespace fs = std::filesystem;

TEST_CASE("Create A new empty database", "[createEmotyDB]")
{
  SECTION("Default Settings")
  {
    std::string dbname("empty_db");
    Database db(StockfishDB::createEmptyDB(dbname));

    REQUIRE(fs::is_directory(fs::status(db.getDirectory())));

    const auto &p = fs::directory_iterator(db.getDirectory());
    REQUIRE(p == end(p));
  }
}