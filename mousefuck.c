#include <stdlib.h>
#include <windows.h>
#include <winuser.h>
#include <math.h>


int screenWidth;
int screenHeight;
int x;
int y;


void determineScreensize()
{
    screenWidth = GetSystemMetrics(SM_CXSCREEN);
    screenHeight = GetSystemMetrics(SM_CYSCREEN);
}


void run()
{
	x = rand() % screenWidth;
	y = rand() % screenHeight;

    for (;;)
    {
        x += rand() % 5;
		y += rand() % 5;
		if (x > screenWidth)
			x = 0;
		if (y > screenHeight)
			y = 0;
        SetCursorPos(x, y);
        Sleep(1000);
    }
}


int main(int argc, char *argv[])
{
    determineScreensize();
    srand(time(NULL));
   
    run();

    return 0;
}
