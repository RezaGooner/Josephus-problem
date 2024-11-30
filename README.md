
---

# Josephus Problem (Flavius Josephus Problem)

The **Josephus Problem** is a theoretical problem related to a certain elimination game. In this game, people are arranged in a circle, and every k-th person is eliminated until only one person remains. The challenge is to determine the position of the last remaining person.

## Problem Overview

The Josephus Problem has been studied for centuries, and this repository provides a solution implemented in **C++**. The program simulates the elimination process and determines the safe position for the last person.

## Features
- **C++ Implementation**: The solution is implemented using basic C++ features.
- **Input/Output**: Users can input the number of people in the circle and the elimination step, and the program will output the position of the last survivor.

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/RezaGooner/Josephus-problem.git
   ```

2. Compile the code using a C++ compiler:
   ```bash
   g++ main.cpp -o josephus
   ```

3. Run the program:
   ```bash
   ./josephus
   ```

## Usage

After running the program, input the total number of people and the step for elimination. The program will calculate and display the safe position.

### Example:

Input:
```text
Number of people: 5
Elimination step: 2
```

Output:
```text
The safe position is: 3
```

## License

This project is licensed under the Apache-2.0 License.

---

