# Haskell

[Reference](https://www.haskell.org/)


> Nunes: "what are your favorite resources for learning Haskell as an complete beginer to Haskell?"
> [Haskell for Great Good!](http://learnyouahaskell.com/chapters), [HaskellDocs](https://www.haskell.org/documentation/), [Haskell Getting Started](https://www.haskell.org/get-started/)

## Dev Env
For a Haskell development environment in VS Code, I am using the **Haskell Language Server** (HLS), this is being installed in a wsl2 ubuntu machine.

### Build Tool
Haskell projects commonly use either **Cabal** or **Stack** as the build tool. Cabal is a build tool that comes with the Haskell toolchain and is used to structure Haskell projects, build them, run them, and define dependencies. Stack is an alternative to Cabal and provides similar functionality. You can choose based on your project requirements.

### Compiler
For compiling haskell uses the Glasgow Haskell Compiler (GHC). It supports the entire Haskell 2010 language plus a wide variety of extensions and has particularly good support for concurrency and parallelism, including support for Software Transactional Memory. GHC compiles Haskell programs either directly to native code or by using LLVM as a back-end. GHC can also generate C code as an intermediate target for porting to new platforms. 

### LSP
For Haskell, the official implementation of the LSP is the Haskell Language Server (HLS)

Here are the points you requested:

### Documentation

The Haskell documentation is available on the official Haskell website. The website lists various resources to help you with Haskell, including introductory books, tutorials, and manuals and guides that cover common Haskell tooling. The documentation for Haskell libraries is typically available on Hackage.

### Issues

If you encounter issues while working with Haskell, you can refer to the following resources:

- The Haskell Wiki.
- The Haskell subreddit.
- The Haskell IRC channel.
- The Haskell mailing list.

### Community Resources

There are several community resources available for Haskell:

- The Haskell Wiki.
- The Haskell subreddit.
- The Haskell IRC channel.
- The Haskell mailing list.

### Deployment

For deploying Haskell applications, you can use the following tools:

- **Docker**: You can use Docker to create a containerized environment for your Haskell application.
- **Nix**: Nix is a package manager that can be used to create reproducible builds of Haskell applications.
- **Haskell Stack**: Haskell Stack is a build tool that can be used to build and deploy Haskell applications.

## What is Haskell:

Haskell is a purely functional programming language, distinguishing itself from imperative languages by emphasizing the definition of what things are rather than instructing the computer on how to perform tasks. This approach eliminates mutable state and enforces referential transparency, ensuring that functions have no side-effects, and their results are consistent when called with the same parameters.

### Key concepts
- **Pure Functional Paradigm:**
  - Defines computations as mathematical functions.
  - Imposes immutability and prohibits variable reassignment.
  - Ensures referential transparency for consistent function behavior.

- **Laziness in Haskell:**
  - Delays computation until explicitly requested.
  - Treats programs as transformations on data.
  - Allows the creation of infinite data structures.

- **Static Typing and Type Inference:**
  - Identifies data types during compilation.
  - Uses type inference for concise and adaptable code.
  - Enhances compile-time error detection.

- **Elegance and Conciseness:**
  - Leverages high-level concepts for expressive code.
  - Shorter programs enhance maintainability and reduce bugs.

- **History and Development:**
  - Originated in 1987 through collaborative research.
  - The Haskell Report (2003) defines a stable version.
  - Developed by individuals with advanced degrees, reflecting academic rigor.
