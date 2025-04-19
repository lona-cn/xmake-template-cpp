#if defined(_WIN32)
#include <windows.h>
#endif
#include <iostream>
#include <filesystem>
#include <log4cplus/log4cplus.h>
#include "config.h"
#include "common.h"

//namespace common{
//extern int add(int a,int b);
//}
#if defined(ENABLE_CONSOLE)
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
#else
int main(int argc, char* argv[])
#endif
{
    log4cplus::initialize();
    if (!std::filesystem::exists("logs"))
    {
        std::filesystem::create_directory("logs");
    }
    log4cplus::PropertyConfigurator::doConfigure(LOG4CPLUS_STRING_TO_TSTRING("config/log4cplus.properties"));
    log4cplus::Logger logger = log4cplus::Logger::getInstance(LOG4CPLUS_TEXT("xmake-template-cpp"));
    LOG4CPLUS_DEBUG(logger, "This is a demo");
    LOG4CPLUS_INFO(logger, LOG4CPLUS_STRING_TO_TSTRING(std::format("GIT_COMMIT:{}",GIT_COMMIT)));
    std::cout << "main" << std::endl;
    std::cout << "a+b=" << common::add(1, 2) << std::endl;
};
