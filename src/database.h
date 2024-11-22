#ifndef DATABASE_H
#define DATABASE_H

#include <string>

class Database {
public:
    virtual ~Database() = default;
    virtual std::string fetchData() = 0;
};

#endif // DATABASE_H
