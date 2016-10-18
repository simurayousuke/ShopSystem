#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H
#include <QtSql>

class DatabaseManager
{
public:
    DatabaseManager();
    ~DatabaseManager();
private:
    QSqlDatabase dbconn;
};

#endif // DATABASEMANAGER_H
