#include "Logger.hpp"

Logger::Logger(void)
{
    this->_fileName = "LoggerOutPut";
}

std::string Logger::makeLogEntry(std::string msg)
{
    std::time_t         result = std::time(nullptr);
    std::string         ret;

   ret = std::ctime(&result);
   ret.erase(ret.end() - 1, ret.end());
   ret += " - ";
   ret += msg;
   ret += '\n';
   return (ret);
}

void        Logger::logToConsole(std::string line)
{
    std::cout << line;
}

void        Logger::logToFile(std::string line)
{
    std::ofstream   ofs;

    ofs.open(this->_fileName, std::ofstream::out | std::ofstream::app);
    if (!ofs.fail())
    {
        ofs << line;
        ofs.close();
    }
    else
    {
        std::cout << "Fail to open fail" << this->_fileName << std::endl;
    }
}

void        Logger::log(std::string const &dest, std::string const &message)
{
    std::string msg;
    int         i;

    i = 0;
    msg = makeLogEntry(message);
    void (Logger::*p[])(std::string) = 
    {
        &Logger::logToConsole,
        &Logger::logToFile,
    };
    std::string action[] = 
    {
        "console",
        "file",
    };
    while (i < 2)
    {
        if (dest == action[i])
        {
            (this->*p[i])(msg);
            break ;
        }
        else
        {
            i++;
        }
    }
}
