# Clojure

[Reference](https://clojure.org/)


> Nunes: "what are your favorite resources for learning Clojure as an complete beginer to clojure?"
> [Brave Clojure](https://www.braveclojure.com/), [ClojureDocs](https://clojuredocs.org/), [Clojure Guide](https://clojure.org/guides/learn/syntax)

## Dev Env
VSCode with the Calva extension provides a great development environment for Clojure, I used wsl2 for installing everything in a linux enviroment.

### Version Manager
[asdf](https://asdf-vm.com/) is a versatile version manager that can be used to manage different versions of Clojure.

### Build Tool
Clojure projects commonly use either [Leiningen](https://leiningen.org/) or the Clojure CLI (tools.deps). You can choose based on your project requirements.

### Compiler
For Clojure, the default compiler is part of the Clojure runtime. You won't need a separate compiler.

### Testing
Clojure provides testing libraries like `clojure.test`, and there are popular third-party libraries like [Midje](https://github.com/marick/Midje) or [test.check](https://github.com/clojure/test.check) for property-based testing.

### LSP
Calva has built-in support for the Language Server Protocol (LSP) for Clojure development. No additional setup is required.

### Documentation
Tools like [Marginalia](https://github.com/gdeer81/marginalia) or [Codox](https://github.com/weavejester/codox) can be used for generating documentation.

### Issues
If you encounter any issues with dependencies or external packages, ensure your project.clj or deps.edn file is correctly configured. Calva usually handles project setup and dependencies seamlessly.

For a smooth development experience, make sure you have a reliable internet connection, as Calva may download and manage dependencies as needed.

### Community Resources
Explore the vibrant Clojure community on [ClojureVerse](https://clojureverse.org/) or other forums for discussions, questions, and sharing knowledge.

### Deployment
Clojure applications can be deployed as standalone JAR files, Docker containers, or using other methods based on project requirements.
