#include <windows.h>
#include <iostream>
#include "common.h"

//namespace common{
    //extern int add(int a,int b);
//}
#if defined(ENABLE_CONSOLE)
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
#else
int main(int argc,char *argv[])
#endif
{
    std::cout<<"main"<<std::endl;
    std::cout<<"a+b="<<common::add(1,2)<<std::endl;
};