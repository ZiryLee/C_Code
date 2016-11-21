#include <windows.h>
void gotoxy(int x, int y)//x为列坐标,y为行坐标
{
   COORD pos = {x,y};
   HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleCursorPosition(hOut, pos);
}
