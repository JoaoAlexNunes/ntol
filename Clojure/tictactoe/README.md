Certainly! If you want users to be able to run the compiled JAR file, you can modify the README file accordingly. Here's an updated version:

---

# Tic Tac Toe in Clojure

## Overview

This is a simple implementation of the classic Tic Tac Toe game in Clojure. The game is played in the command line, and it allows two players to take turns making moves until there is a winner or a draw.

## Prerequisites

Before running the game, make sure you have the following installed:

- [Java](https://www.java.com/en/download/)
- [Clojure](https://clojure.org/guides/getting_started)
- [Leiningen](https://leiningen.org/)

## How to Play

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/JoaoAlexNunes/ntol.git
   ```

2. Navigate to the project directory:

   ```bash
   cd Clojure/tic-tac-toe-clojure
   ```

3. Run the game using Leiningen:

   ```bash
   lein run
   ```

   OR

   Run the compiled JAR file directly:

   ```bash
   java -jar target/tic-tac-toe-clojure-standalone.jar
   ```

4. Follow the on-screen instructions to make your moves. The game will display the current state of the board after each move.

## Features

- Two-player gameplay
- Command line interface
- Simple and clean Clojure code

## Project Structure

- `src/`: Contains the Clojure source code files.
- `test/`: Contains test files for the code in the `src` directory.
- `project.clj`: Leiningen project file.

## Contributing

Feel free to contribute to the project by opening issues or submitting pull requests. Any improvements or suggestions are welcome!

## License

This project is licensed under the [Eclipse Public License](https://www.eclipse.org/legal/epl-2.0/).

---

This version includes instructions for running the JAR file directly using the `java -jar` command. Update the JAR file name in the command if it differs based on your project structure.