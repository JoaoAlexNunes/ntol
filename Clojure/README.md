# Clojure

[Reference](https://clojure.org/)


> Nunes: "what are your favorite resources for learning Clojure as an complete beginer to clojure?"
> [Brave Clojure](https://www.braveclojure.com/), [ClojureDocs](https://clojuredocs.org/), [Clojure Guide](https://clojure.org/guides/learn/syntax)

## Dev Env
VSCode with the Calva extension provides a great development environment for Clojure, I used wsl2 for installing everything in a linux enviroment.

### Version Manager
[asdf](https://asdf-vm.com/) is a versatile version manager that can be used to manage different versions of Clojure. In my case I didn't needed beacause I only installed one version of Clojure

### Build Tool
Clojure projects commonly use either [Leiningen](https://leiningen.org/) or the Clojure CLI (tools.deps). You can choose based on your project requirements. In my case I am starting by use Leiningen

### Compiler
For Clojure, the default compiler is part of the Clojure runtime. You won't need a separate compiler. As I am in the Vscode it was recommended to install the extesion `Calva` it is very good and it works perfectly with `Leiningen`

### Testing
Clojure provides testing libraries like `clojure.test`, and there are popular third-party libraries like [Midje](https://github.com/marick/Midje) or [test.check](https://github.com/clojure/test.check) for property-based testing. At the moment I am not testing anything so I am not using this two third-party libraries

### LSP
Calva has built-in support for the Language Server Protocol (LSP) for Clojure development. No additional setup is required.

### Documentation
Tools like [Marginalia](https://github.com/gdeer81/marginalia) or [Codox](https://github.com/weavejester/codox) can be used for generating documentation. At the moment I am not using this tools, but in the near future I will be using one of them.

### Issues
If you encounter any issues with dependencies or external packages, ensure your project.clj or deps.edn file is correctly configured. Calva usually handles project setup and dependencies seamlessly.

For a smooth development experience, make sure you have a reliable internet connection, as Calva may download and manage dependencies as needed.

### Community Resources
Explore the vibrant Clojure community on [ClojureVerse](https://clojureverse.org/) or other forums for discussions, questions, and sharing knowledge.

### Deployment
Clojure applications can be deployed as standalone JAR files, Docker containers, or using other methods based on project requirements.

## What is Clojure:
Clojure, an innovative programming language forged by Rich Hickey, is a fusion of Lisp and functional programming. It stands out for its emphasis on expressive coding and proficiency in tackling intricate domains, particularly concurrent programming challenges. Operating as a hosted language, Clojure primarily runs on the JVM, leveraging its capabilities for core features like threading and garbage collection.

It's crucial to discern between the Clojure language and its compiler, represented by the clojure.jar executable. The language, a Lisp dialect with functional nuances, remains independent of any implementation, while the compiler translates Clojure code into Java Virtual Machine (JVM) bytecode. This bytecode is packaged into JAR files, which are distributed for execution.

Clojure's versatility extends beyond the JVM, with the ability to target platforms like JavaScript and the Microsoft Common Language Runtime (CLR). However, the focus of this discussion centers on its JVM implementation. The book underscores the ongoing evolution of Clojure, noting its current version at 1.9.0. Despite version updates, the core principles covered in the book are expected to endure.

In essence, Clojure emerges as a powerful and expressive programming language, uniquely positioned as a hosted language on various platforms, with a distinctive emphasis on the JVM implementation.


### Key concepts

  - JVM processes execute Java bytecode.
  - Usually, the Java Compiler produces Java bytecode from Java source code.
  - JAR files are collections of Java bytecode.
  - Java programs are usually distributed as JAR files.
  - The Java program clojure.jar reads Clojure source code and produces Java bytecode.
  - That Java bytecode is then executed by the same JVM process already running clojure.jar.