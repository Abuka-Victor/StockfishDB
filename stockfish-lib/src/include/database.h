#ifndef DATABASE_H
#define DATABASE_H

#include <string>

class Database{
  public:
    Database(std::string dbName, std::string fullPath);

    std::string getDirectory(void);

  static Database createEmpty(std::string dbName);
};


#endif // DATABASE_H