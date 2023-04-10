typedef struct IUnknown IUnknown;
#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR nCmdLine, int nCmdShow) {
	HDC hDc = GetWindowDC(GetDesktopWindow());
	int x = rand() % GetSystemMetrics(SM_CXSCREEN);
	int y = rand() % GetSystemMetrics(SM_CYSCREEN);
	while (true) {
		x = rand() % GetSystemMetrics(SM_CXSCREEN);
		y = rand() % GetSystemMetrics(SM_CYSCREEN);
		LPCWSTR icons[] = { 
			IDI_APPLICATION, IDI_ASTERISK, IDI_EXCLAMATION, IDI_HAND, IDI_QUESTION, IDI_SHIELD, IDI_WINLOGO
			}; // The shield icon wouldn't appears on Windows XP
		LPCWSTR ChoosenIcon = icons[rand() % ARRAYSIZE(icons)];
		DrawIcon(hDc, x, y, LoadIcon(NULL, ChoosenIcon));
		Sleep(40);
	}
}
