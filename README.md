This is a simple keylogger that sends logged keystrokes (only printable characters) of the user back to the penetration tester over a TCP connection, on port 5555.

The penetration tester has to setup a listener on port 5555 in order to receive the data sent by this keylogger program. This can be done using the terminal:
'''
nc -lvp 5555
'''
