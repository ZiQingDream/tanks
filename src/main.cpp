/**
 * \mainpage
 * \par Tanks
 * Gra w czo?gi wzorowana na Battle City / Tank 1990 umo?liwiaj?ca gr? przez jednego lub dwóch graczy
 * \author Krystian Ka?u?ny
 * \date 12.05.215
 * \version 1.0
 * \par Kontakt:
 * \a k.kaluzny141@gmail.com
*/

#include "app/app.h"
#include "spdlog/spdlog.h"

#ifdef _WIN32
#include <windows.h>
#endif

int main( int argc, char* args[] )
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    spdlog::set_level(spdlog::level::info);
    spdlog::info("创建游戏主体，准备启动游戏程序");

    App app;
    app.run();

    spdlog::info("游戏运行结束，正常退出");
    return 0;
}
