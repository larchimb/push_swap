*This project has been created as part of the 42 curriculum by elbarry and larchimb.*

# push_swap – Sorting Data with Two Stacks 🔁📊

<div align="center">

![42 Badge](https://github.com/elbarry42/elbarry42/blob/main/42_badges/push_swapm.png)

</div>

Welcome to **push_swap**! 🚀  
This project is an algorithmic challenge where the goal is to **sort a stack of integers using only two stacks and a restricted set of operations**, while generating the **smallest possible number of instructions**.

It is a core project of the **42 curriculum**, focused on algorithmic complexity, optimization, and low-level reasoning.

---

## 📝 Description

The **push_swap** project consists of writing a C program that outputs a sequence of operations to sort a list of integers given as arguments.

Constraints make the problem challenging:

- Only **two stacks** are allowed (`a` and `b`)
- Only a **limited set of operations** can be used
- The goal is not just to sort, but to **sort efficiently**

This project introduces key concepts such as:

- Algorithmic **time complexity**
- Trade-offs between different **sorting strategies**
- Adaptation of classical algorithms to constrained environments
- Measuring and exploiting **input disorder**

---

## 🎯 Objectives

- Understand how algorithm choices impact performance
- Compare multiple complexity classes in a concrete setting
- Optimize sorting strategies based on input characteristics
- Produce clean, norm-compliant, memory-safe C code

---

## 📌 Rules Summary

- Stack **a** contains the input integers (no duplicates)
- Stack **b** starts empty
- Numbers must be sorted in **ascending order** in stack `a`
- Operations must be printed to **stdout**, one per line
- No global variables allowed

### Allowed Operations

| Operation | Description |
|---------|-------------|
| `sa` | Swap first two elements of stack a |
| `sb` | Swap first two elements of stack b |
| `ss` | `sa` and `sb` at the same time |
| `pa` | Push top of b to a |
| `pb` | Push top of a to b |
| `ra` | Rotate stack a |
| `rb` | Rotate stack b |
| `rr` | `ra` and `rb` |
| `rra` | Reverse rotate stack a |
| `rrb` | Reverse rotate stack b |
| `rrr` | `rra` and `rrb` |

---

## ⚙️ Program Usage

```bash
./push_swap [--simple | --medium | --complex | --adaptive] <numbers>
````

### Examples

```bash
./push_swap 2 1 3 6 5 8
./push_swap --simple 5 4 3 2 1
./push_swap --complex 4 67 3 87 23 | ./checker_linux 4 67 3 87 23
```

If no arguments are given, the program outputs nothing.

---

## 🧠 Algorithmic Strategies

This project embeds **four distinct sorting strategies**, all implemented in C and selectable at runtime.

### 1️⃣ Simple Algorithm – **O(n²)**

Baseline strategy used mainly for small inputs.

Typical approach:

* Selection sort–like min extraction
* Push smallest elements to stack `b`, then back to `a`

✔ Easy to understand
❌ Inefficient for large inputs

---

### 2️⃣ Medium Algorithm – **O(n√n)**

Chunk-based strategy:

* Divide the input into √n chunks
* Push elements chunk by chunk to stack `b`
* Reinsert them in correct order

✔ Good balance between simplicity and performance
✔ Suitable for medium-sized inputs

---

### 3️⃣ Complex Algorithm – **O(n log n)**

High-performance strategy for large or highly disordered inputs.

Example approaches:

* Radix sort adaptation
* Binary representation and bitwise passes

✔ Excellent scalability
✔ Used for large random datasets

---

### 4️⃣ Adaptive Algorithm – **Custom Design**

Before sorting, the program computes a **disorder metric** (value between 0 and 1).

#### Disorder definition

The disorder measures how far the input is from being sorted by counting inverted pairs.

Depending on the disorder:

| Disorder Range | Strategy Used                    | Complexity     |
| -------------- | -------------------------------- | -------------- |
| `< 0.2`        | Linear / optimized simple method | **O(n)**       |
| `0.2 – 0.5`    | Chunk-based method               | **O(n√n)**     |
| `≥ 0.5`        | Complex algorithm                | **O(n log n)** |

This adaptive behavior allows the program to **automatically choose the most efficient strategy** for each input.

---

## 📊 Benchmark Mode

Using the `--bench` flag, the program displays performance metrics to **stderr**:

* Computed disorder (percentage)
* Selected strategy and complexity class
* Total number of operations
* Count of each operation type

Example:

```bash
./push_swap --bench --adaptive 4 67 3 87 23
```

---

## 📁 Project Structure

### Mandatory Part

```
Makefile
includes/
srcs/
```

* Fully norm-compliant
* No global variables
* Memory leaks forbidden

### Bonus Part

```
checker.c
checker_utils.c
```

The checker reads operations from stdin and verifies whether the stacks are correctly sorted.

---

## 🛠️ Compilation

```bash
make
make clean
make fclean
make re
```

Compiled with:

```bash
-Wall -Wextra -Werror
```

---

## 🚫 Error Handling

The program prints `Error\n` to **stderr** if:

* Arguments are not integers
* Values exceed integer limits
* Duplicate numbers are detected
* Invalid instructions (checker)

---

## 📈 Performance Targets

| Input Size  | Passing | Good   | Excellent |
| ----------- | ------- | ------ | --------- |
| 100 numbers | < 2000  | < 1500 | < 700     |
| 500 numbers | < 12000 | < 8000 | < 5500    |

---

## 📚 Resources

* Analysis of Algorithms (Big-O notation)
* Stack data structures
* Radix sort
* Chunk-based sorting strategies

### 🤖 AI Usage

AI tools were used **only for documentation, explanations, and README structuring**.
All algorithms, logic, and implementation choices were **designed and coded manually**, in full compliance with the **42 AI policy**.

---

## 📦 Submission Notes

* This is a **group project**
* Both contributors are listed and understand the full codebase
* All required files are present in the repository
* Only repository content is evaluated

---

✨ Thanks for checking out our **push_swap** project!
Sorting smart beats sorting hard 💡🔥
