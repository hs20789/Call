#include <stdio.h>
#include <windows.h>

int main() {
    DWORD pid = GetCurrentProcessId();
    DWORD ppid = GetCurrentProcess(); // Windows������ �θ� ���μ��� ID�� ���ϴ� ����� �ٸ��ϴ�.

    printf("���μ��� PID: %lu\t�θ� ���μ��� PPID: %lu\n", pid, ppid);

    return 0;
}
