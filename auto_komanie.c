#include <stdio.h>
#include <windows.h>

int main()
{
	short flag_movement = 0b010;
	POINT curs_pos;
	while(!GetAsyncKeyState(0x4C))
	{
		if(GetAsyncKeyState(0x58))
		{
			GetCursorPos(&curs_pos);
			flag_movement ^= 0b110;
			mouse_event(flag_movement, curs_pos.x, curs_pos.y, 0, 0);
			printf("is Mause Active %d\n", flag_movement);
		}
		Sleep(500);
	}
	return 0;
}