typedef struct IUnknown IUnknown;
#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR nCmdLine, int nCmdShow) {
	while (1) {
		HDC hdc = GetDC(0);
		HWND desktop = GetDesktopWindow();
		HDC desk = GetDC(NULL);
		RECT rect;
		GetWindowRect(desktop, &rect);
		int w = rect.right - rect.left;
		int	h = rect.bottom - rect.top;
		StretchBlt(desk, 5, 40, w + 0, h - 0, desk, 5, 5, w, h, SRCERASE);
		BitBlt(hdc, rand() % 1, 1, w, h, hdc, 0, rand() % 100, 0x666666);
		Sleep(3000);
		StretchBlt(desk, 5, 60, w + 0, h - 0, desk, 5, 5, w, h, SRCCOPY);
		BitBlt(hdc, rand() % 1, 1, w, h, hdc, 0, rand() % 100, 0x666666);
		Sleep(3000);
		StretchBlt(desk, 40, 40, w + 0, h - 0, desk, 10, 50, w, h, SRCAND);
		BitBlt(hdc, rand() % 1, 1, w, h, hdc, 0, rand() % 100, 0x444444);
		Sleep(3000);
		// - - - - - - - - -
		StretchBlt(desk, 5, 40, w + 0, h - 0, desk, 5, 5, w, h, SRCERASE);
		BitBlt(hdc, rand() % 1, 1, w, h, hdc, 0, rand() % 100, 0x666666);
		Sleep(3000);
		StretchBlt(desk, 5, 60, w + 0, h - 0, desk, 5, 5, w, h, SRCCOPY);
		BitBlt(hdc, rand() % 1, 1, w, h, hdc, 0, rand() % 100, 0x666666);
		Sleep(3000);
		StretchBlt(desk, 10, 50, w + 0, h - 0, desk, 40, 40, w, h, SRCAND);
		BitBlt(hdc, rand() % 1, 1, w, h, hdc, 0, rand() % 100, 0x666666);
		Sleep(3000);
	}
}