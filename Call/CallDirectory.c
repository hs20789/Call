#include <stdio.h>
#include <windows.h>

int main() {
    DWORD pid = GetCurrentProcessId();
    DWORD ppid = GetCurrentProcess(); // Windows에서는 부모 프로세스 ID를 구하는 방법이 다릅니다.

    printf("프로세스 PID: %lu\t부모 프로세스 PPID: %lu\n", pid, ppid);

    return 0;
}
