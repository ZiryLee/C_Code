#include <windows.h>
void gotoxy(int x, int y)//xΪ������,yΪ������
{
   COORD pos = {x,y};
   HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleCursorPosition(hOut, pos);
}
