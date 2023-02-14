#include <iostream>
#include <Windows.h>

unsigned int g_num = 0;
HANDLE hMutex;

DWORD WINAPI increase_num(LPVOID max_num)
{
	for(int i=0; i<(int)max_num; i++)
	{
		WaitForSingleObject(hMutex, INFINITE);
		g_num++;
		ReleaseMutex(hMutex);
	}
	return 0;
}

int main(int argc, char* argv[])
{
	hMutex = CreateMutex(NULL, FALSE, NULL);

	DWORD dThreadId;
	HANDLE hThread_1 = CreateThread(NULL, 0, increase_num, (LPVOID)100000, 0, &dThreadId);
	HANDLE hThread_2 = CreateThread(NULL, 0, increase_num, (LPVOID)100000, 0, &dThreadId);

	// Ŀ�ο�����Ʈ�� Ȯ���ϴ� �Լ�
	// DWORD WaitForSingleObject(HANDLE �ڵ�, DWORD ���ð�(�и���) );
	WaitForSingleObject(hThread_1, INFINITE);
	WaitForSingleObject(hThread_1, INFINITE);

	std::cout << g_num << std::endl;
	return 0;
}