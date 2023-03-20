A brief overview of what a dynamic Libary is:
---------------------------------------------------
-
A dynamic library, also known as a shared library,
is a type of library that is loaded into memory at
runtime and shared among multiple applications.
Dynamic libraries contain code and data that can be
used by other programs, and they are typically
stored as separate files with a ".so" extension on
Unix-based systems or a ".dll" extension on Windows.

The main advantage of dynamic libraries over static
libraries is that they allow multiple programs to
share the same code in memory, reducing the overall
memory footprint of the system. This means that if
multiple programs are using the same dynamic library,
the library only needs to be loaded into memory once,
and all the programs can access it without having to
load their own copies.

Another advantage of dynamic libraries is that they
can be updated and replaced without requiring the
applications that use them to be recompiled. This
allows for easier maintenance and bug fixing, as
well as faster deployment of updates.

However, there are also some disadvantages to
dynamic libraries, such as the potential for version
conflicts between different versions of the same
library, and the fact that they can be slightly
slower to load than static libraries. Additionally,
dynamic libraries require a runtime loader to be
present on the system, which may not be available on
all platforms or may add additional complexity to
the build process.
