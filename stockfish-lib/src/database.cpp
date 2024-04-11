#include "include/database.h"

Database::Database(std::string dbName, std::string fullPath)
{
}

Database Database::createEmpty(std::string dbName)
{
  return Database("Fred", "Fred");
}

std::string Database::getDirectory(void)
{
  return "Hello";
}