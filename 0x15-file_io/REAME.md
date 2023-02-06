PROJECT ON FILE DESCRIPTORS IN LINUX AND UNIX-LIKE SYSTEMS

BY: UBI, JOSEPH BASSEY.

===================================================================================================

A file descriptor is a number used by a process to keep track of a particular file 
or type of file that it is currently accessing or has accessed in the past.
In Linux, a file descriptor is a non-negative integer that is used to identify an 
open file, pipe, socket, or device. 
A file descriptor is returned by the system call open, pipe, socket,
and other system calls that open files and devices.
The file descriptor is then used by other system calls to access the file or device,
such as read, write, and close. File descriptors can also be used to refer to sub-parts of a file,
such as a single record in a database.

=====================================================================================================================
