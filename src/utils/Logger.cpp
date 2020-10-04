#include <iostream>
#include "Logger.h"

Logger* Logger::instance = nullptr;

Logger* Logger::getInstance()
{
    if (instance == nullptr)
        instance = new Logger();
    return instance;
}

Logger::Logger() {}

void Logger::debug(const std::string &message)
{
    if (showDebug)
        std::cout << "[DEBUG] >> " << message << std::endl;
}

void Logger::info(const std::string &message)
{
    std::cout << "[INFO] >> " << message << std::endl;
}

void Logger::toggleDebugMessages(bool show)
{
    showDebug = show;
}