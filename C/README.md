# C

[Reference]()

> Nunes: "what are your favorite resources for learning C as a complete junior dev"
> [C adn Cpp](cppreference.com), [C Resources](https://github.com/kspalaiologos/C-Learning-Resources), [streamer](https://www.twitch.tv/strager)

## Dev Env

For a C development environment in VS Code, I am using the **C/C++ extension** along with the **GCC** compiler.

### Build Tool

C projects commonly use **Make** as the build tool. Make is a build automation tool that automatically builds executable programs and libraries from source code. In my case I'm actually using **premake** that generates make files for linux

### Compiler

For compiling C code, the **GNU Compiler Collection (GCC)** is widely used. GCC supports various programming languages, including C, and can generate native code for different platforms. If you're going to use clangd LSP anyway you might as well use clang. Finally, if you're using a makefile, then you can build with make

### LSP

For C, the Language Server Protocol (LSP) can be supported using the **cquery** or **clangd** extension in Visual Studio Code.

Here are the points you requested:

### Documentation

The C documentation is available on various platforms, including:

- The C Programming Language book by Brian W. Kernighan and Dennis M. Ritchie.
- [cplusplus.com](http://www.cplusplus.com/doc/): Provides reference and tutorials for C programming.
- [GCC Documentation](https://gcc.gnu.org/onlinedocs/): Official documentation for the GCC compiler.

### Issues

If you encounter issues while working with C, you can refer to the following resources:

- [Stack Overflow - C Tag](https://stackoverflow.com/questions/tagged/c): A community of programmers helping each other with C-related questions.
- [Cprogramming.com Forum](http://cboard.cprogramming.com/): A forum for C programmers to discuss and troubleshoot issues.

### Community Resources

There are several community resources available for C:

- [Reddit - r/C_Programming](https://www.reddit.com/r/c_programming/): A subreddit dedicated to C programming discussions.
- [CodeProject - C/C++ Language](https://www.codeproject.com/): Articles and discussions related to C programming.

### Deployment

For deploying C applications, you can use standard tools:

- **Docker**: You can use Docker to create a containerized environment for your C application.
- **Makefile**: Create a makefile to automate the build and deployment process.

## What is C:

C is a general-purpose, procedural programming language developed by Dennis Ritchie in the early 1970s at Bell Labs. It has influenced many programming languages and is widely used in various application domains.

### Key Concepts

- **Procedural Paradigm:**

  - Organizes code into functions and procedures.
  - Emphasizes step-by-step execution of instructions.

- **Efficiency and Control:**

  - Provides low-level access to memory and hardware.
  - Allows for fine-grained control over system resources.

- **Structured Programming:**

  - Supports modular programming through functions and control structures.
  - Facilitates code organization and maintenance.

- **Portability:**

  - Designed to be easily portable across different hardware platforms.
  - Code can be compiled for various operating systems.

- **History and Development:**

  - Originated as an evolution of the B programming language.
  - Influential in the development of Unix operating system.
  - Standardized by ANSI and ISO, ensuring language consistency.
