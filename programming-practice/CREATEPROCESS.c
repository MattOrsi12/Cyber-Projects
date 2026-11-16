#include <windows.h>
#include <stdio.h>


STARTUPINFO si;
PROCESS_INFORMATION pi;
int main(void){
    if(!CreateProcessW(
        L"C:\\Windows\\System32\\Notepad.exe",
        NULL,
        NULL,
        NULL,
        FALSE,
        BELOW_NORMAL_PRIORITY_CLASS,
        NULL,
        NULL,
        &si,
        &pi
    )){
        printf("process was unable to be created, error: %ld", GetLastError());
        return EXIT_FAILURE;
    }
    printf("Process started succsesfully, PID: %ld", pi.dwProcessId);






}




/*
BOOL CreateProcessW(
  [in, optional]      LPCWSTR               lpApplicationName,
  [in, out, optional] LPWSTR                lpCommandLine,
  [in, optional]      LPSECURITY_ATTRIBUTES lpProcessAttributes,
  [in, optional]      LPSECURITY_ATTRIBUTES lpThreadAttributes,
  [in]                BOOL                  bInheritHandles,
  [in]                DWORD                 dwCreationFlags,
  [in, optional]      LPVOID                lpEnvironment,
  [in, optional]      LPCWSTR               lpCurrentDirectory,
  [in]                LPSTARTUPINFOW        lpStartupInfo,
  [out]               LPPROCESS_INFORMATION lpProcessInformation
);
*/