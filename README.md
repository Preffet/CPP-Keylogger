![Badge tracking project size](https://img.shields.io/github/repo-size/Preffet/CPP-keylogger?color=%234291c2)![Badge tracking code size](https://img.shields.io/github/languages/code-size/Preffet/CPP-Keylogger?color=%23425cc2)![Badge tracking last commit](https://img.shields.io/github/last-commit/Preffet/CPP-Keylogger?color=%233f38a8)
-----------------------------------------------------------------------------

![banner](https://user-images.githubusercontent.com/84241003/161389552-ff563b8a-b3e8-47ec-ab68-03583cdd3a1c.png)

-----------------------------------------------------------------------------
### Description

This is a simple keylogger that sends logged keystrokes (only printable characters) of the user back to the penetration tester over a TCP connection, on port 5555.

-----------------------------------------------------------------------------
### How to build and run the project

The penetration tester has to setup a listener on port 5555 in order to receive the data sent by this keylogger program. This can be done in terminal, using networking utility Netcat:
```
nc -lvp 5555
```

Disclaimer: This application has been made for educational purposes only, I don’t promote malicious practices and will not be responsible for any illegal activities. Use it at your own risk.


