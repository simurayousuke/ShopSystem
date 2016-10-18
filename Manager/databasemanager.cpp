#include "databasemanager.h"

DatabaseManager::DatabaseManager()
{
    dbconn=QSqlDatabase::addDatabase("QSQLITE");    //添加数据库驱动
    dbconn.setDatabaseName("Shop.db");  //在工程目录新建一个mytest.db的文件
    if(!dbconn.open())    {
        std::exit(-1);
    }
}

DatabaseManager::~DatabaseManager()
{
    dbconn.close();
}
