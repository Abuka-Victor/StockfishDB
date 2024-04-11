#include "include/stockfishdb.h"

StockfishDB::StockfishDB()
{
}

Database StockfishDB::createEmptyDB(std::string &dbName)
{
  return Database::createEmpty(dbName);
}