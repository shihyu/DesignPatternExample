#include "TwoDirectAdapter.h"

namespace cn {
namespace javass {
namespace dp {
namespace adapter {
namespace example4 {

TwoDirectAdapter::TwoDirectAdapter(LogFileOperateApi *fileLog, LogDbOperateApi *dbLog) {
    this->fileLog = fileLog;
    this->dbLog = dbLog;
}

void TwoDirectAdapter::createLog(LogModel *lm) {
    //1：先读取文件的内容
    std::vector<LogModel *> list = fileLog->readLogFile();
    //2：加入新的日志对象
    list.push_back(lm);
    //3：重新写入文件
    fileLog->writeLogFile(list);
}

std::vector<LogModel *> TwoDirectAdapter::getAllLog() {
    return fileLog->readLogFile();
}

void TwoDirectAdapter::removeLog(LogModel *lm) {
    //1：先读取文件的内容
    std::vector<LogModel *> list = fileLog->readLogFile();
    //2：删除相应的日志对象
    list.remove(lm);
    //3：重新写入文件
    fileLog->writeLogFile(list);
}

void TwoDirectAdapter::updateLog(LogModel *lm) {
    //1：先读取文件的内容
    std::vector<LogModel *> list = fileLog->readLogFile();

    //2：修改相应的日志对象
    for (int i = 0; i < list.size(); i++) {
        if (list.at(i)->getLogId()->equals(lm->getLogId())) {
            list.set(i, lm);
            break;
        }
    }

    //3：重新写入文件
    fileLog->writeLogFile(list);
}

std::vector<LogModel *> TwoDirectAdapter::readLogFile() {
    return dbLog->getAllLog();
}

void TwoDirectAdapter::writeLogFile(std::vector<LogModel *> &list) {
    //1：最简单的实现思路，先删除数据库中的数据
    //2：然后循环把现在的数据加入到数据库中
    for (std::vector<LogModel *>::const_iterator lm = list.begin(); lm != list.end(); ++lm) {
        dbLog->createLog(*lm);
    }
}
}
}
}
}
}
