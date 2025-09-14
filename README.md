# 42-CPP03\_1337

### 🖥️ CPP03 - 1337 Project

[![1337 Badge](https://img.shields.io/badge/1337-Project-blue)](https://www.42network.org/)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen) ![Grade](https://img.shields.io/badge/Grade-0%2F80-progress)
 
### Inheritance

---

## 📜 Project Overview

This project focuses on C++ concepts like **inheritance**. It requires implementing several classes that inherit from a base class. The exercises are designed to help you understand how to design and implement robust classes with proper inheritance, manage constructor and destructor chaining, and apply these concepts to create different types of robot characters.

> ⚠️ All code must follow the **C++98 standard**.

---

## 🚀 Features

### ✅ Mandatory Part

  * **Exercise 00: Aaaaand... OPEN\!**: Create a `ClapTrap` class with attributes for name, hit points, energy points, and attack damage. Implement member functions for `attack`, `takeDamage`, and `beRepaired`.
  * **Exercise 01: Serena, my love\!**: Create a `ScavTrap` class that inherits from `ClapTrap`. It must have different initial attribute values for hit points (100), energy points (50), and attack damage (20). It also has a special `guardGate` ability.
  * **Exercise 02: Repetitive work**: Implement a `FragTrap` class that inherits from `ClapTrap`. Its attributes will be hit points (100), energy points (100), and attack damage (30). It has a special `highFivesGuys` ability.

### ⚠️ Optional Exercise

  * **Exercise 03: Now it's weird\!**: Create a `DiamondTrap` class that inherits from both `ScavTrap` and `FragTrap`. It must handle multiple inheritance and the **"Diamond Problem"**. It has its own private `_name` attribute and a `whoAmI` function.
  * You can pass this module without completing this exercise.

-----

## 🛠️ Installation & Compilation

To compile any of the exercises, navigate to the corresponding directory and run `make`. The `Makefile` provided will compile the source files to the required executable name.

### 📌 Compilation Flags

Your code must be compiled with `c++` and the following flags:

```bash
-Wall -Wextra -Werror -std=c++98
```

The `-std=c++98` flag ensures your code adheres to the C++98 standard.

### 🔧 Cleanup

```bash
make clean      # Removes object files
make fclean     # Removes the executable and object files
make re         # Performs a full rebuild
```

-----

## 📏 Rules

  * **Language Standard**: Your code must follow the C++98 standard.
  * **Forbidden Functions**: The C functions `*printf()`, `*alloc()`, and `free()` are strictly forbidden. Using them will result in a grade of 0.
  * **Forbidden Keywords**: The `using namespace <ns_name>` and `friend` keywords are forbidden unless explicitly stated otherwise, resulting in a -42 grade.
  * **STL**: The Standard Template Library (STL), including containers (`vector`, `list`, `map`, etc.) and algorithms, is forbidden until Modules 08 and 09. Using them will result in a -42 grade.
  * **Memory Management**: All memory allocated with `new` must be properly deallocated to avoid memory leaks.
  * **Headers**: All header files must include include guards to prevent double inclusion. Not doing so will result in a grade of 0.
  * **Output**: Every output message must end with a newline character and be displayed to the standard output.
  * **Header File Implementations**: Any function implementation placed in a header file (except for function templates) will result in a grade of 0.

-----

For complete project details, see the subject file:
[en.subject.pdf](https://github.com/Redadaghouj/42-CPP03_1337/blob/main/subject/en.subject.pdf)
