#ifndef STOCKFISHDB_H
#define STOCKFISHDB_H

#include <string>

#include "database.h"

class StockfishDB
{
public:
  StockfishDB();

  static Database createEmptyDB(std::string &dbName);
};

#endif // STOCKFISHDB_H