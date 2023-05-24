A concise overview of what the Makefile is:
-------------------------------------------

A Makefile is a text file used to automate the compilation and building process of software projects.
It contains instructions, called rules, that specify how to build or update different parts of a project.

Imagine you have a project with multiple source code files, and you need to compile them, link them
together, and generate the final executable. Doing this manually every time can be tedious and error-prone.
A Makefile simplifies this process by automating it.

In a Makefile, you define rules that describe how to build different parts of your project. Each rule
consists of a target, dependencies, and commands.

Target: A target is a file or an action that needs to be built or executed. It represents the result
you want to achieve, such as an executable file or a specific task.

Dependencies: Dependencies are files or other targets that must be present or built before the target
can be generated. They represent the prerequisites for building the target.

Commands: Commands are the instructions that the Makefile follows to build or update the target
 These commands are executed by the "make" utility, which reads the Makefile and determines the necessary
actions based on the rules and their dependencies.

When you run the "make" command in the terminal, it reads the Makefile, identifies the target you specify,
checks its dependencies, and executes the associated commands to build or update the target.
It intelligently determines which parts of the project need to be rebuilt based on changes in source files
or their dependencies, which can save a lot of time when working on larger projects.

Makefiles provide a standardized and automated way to manage the building process of software projects,
making it easier to compile, link, and update the project files. They are commonly used in Unix-based
systems, like Linux and macOS, but can also be used in other environments.
