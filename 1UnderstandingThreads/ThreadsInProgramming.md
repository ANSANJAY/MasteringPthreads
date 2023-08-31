
# Threads in Programming: Detailed Interview Notes 📝

## Table of Contents
1. [Introduction to Threads](#introduction-to-threads-🌟)
2. [Main Thread](#main-thread-🚀)
3. [Execution Flow](#execution-flow-🏃)
4. [Relationship Between Process and Thread](#relationship-between-process-and-thread-👫)
5. [Thread Creation](#thread-creation-👶)
6. [Terminology](#terminology-📚)

---

## Introduction to Threads 🌟
- Threads are the **basic unit of execution flow** in a program.
- They are essential for understanding **multi-threading** and **concurrent programming**.

---

## Main Thread 🚀
- Every process has at least **one thread**, known as the **main thread**.
- The `main` function in a program executes as this main thread.

  ```c
  int main() {
      // This is your main thread.
  }
  ```

---

## Execution Flow 🏃
- The **execution flow** refers to an independent set of instructions that a thread executes.
- Threads run within the context of a **process**.

---

## Relationship Between Process and Thread 👫
- A thread **cannot exist by itself**; it needs a **process** to exist.
- In simple terms, a process can be thought of as a **main thread**.

---

## Thread Creation 👶
- Threads have the ability to **create other threads**.
- The **main thread** is generally responsible for creating the **first additional thread** in the process.
- The point where a new thread is created is called a **fork point**.

  ```c
  // Example in C
  // Fork point 'F' in main thread
  pthread_t thread2;
  pthread_create(&thread2, NULL, someFunction, NULL);
  ```

- Threads can create more threads recursively, with **no limitations**.

  ```c
  // Example in C
  // Fork point 'F1' in thread T2
  pthread_t thread3;
  pthread_create(&thread3, NULL, anotherFunction, NULL);
  ```

---

## Terminology 📚
- **Parent Thread**: The thread that creates a new thread.
- **Child Thread**: The thread that is created by another thread.
- **Fork Point**: The point where a new thread is spawned.

---

These notes are prepared with 💖 by Anamika for interview revision.

---

# Threads in Programming: Interview Q&A 📝


## Table of Contents
1. [What is a Thread?](#what-is-a-thread-🌟)
2. [What is the Main Thread?](#what-is-the-main-thread-🚀)
3. [Explain Execution Flow in the Context of Threads](#explain-execution-flow-in-the-context-of-threads-🏃)
4. [How is a Process Related to a Thread?](#how-is-a-process-related-to-a-thread-👫)
5. [What is Thread Creation?](#what-is-thread-creation-👶)
6. [Explain Key Terminology: Parent Thread, Child Thread, Fork Point](#explain-key-terminology-parent-thread-child-thread-fork-point-📚)

---

## What is a Thread? 🌟

**Question**: What is a thread in programming?

**Answer**: A thread is the basic unit of execution within a program. It's an independent set of instructions that execute sequentially.

---

## What is the Main Thread? 🚀

**Question**: What do we mean by the "main thread"?

**Answer**: The "main thread" is the original thread in a process. It starts executing when a program begins and generally initiates other, "child," threads. The `main` function in a program runs in the context of the main thread.

---

## Explain Execution Flow in the Context of Threads 🏃

**Question**: What is meant by "execution flow" in the context of threads?

**Answer**: Execution flow refers to the sequence of instructions that a thread performs. Each thread has its own independent set of instructions, which it executes from start to finish.

---

## How is a Process Related to a Thread? 👫

**Question**: How is a process related to a thread in a program?

**Answer**: A process is a running instance of a program and serves as a container for threads. Every process has at least one thread, known as the main thread. A thread cannot exist independently; it must be part of a process.

---

## What is Thread Creation? 👶

**Question**: How are new threads created?

**Answer**: Threads can create other threads using system calls or thread libraries. In C, for example, you can use `pthread_create` to spawn a new thread. The act of creating a new thread from an existing one is often called "forking," and the point where this happens is called a "fork point."

---

## Explain Key Terminology: Parent Thread, Child Thread, Fork Point 📚

**Question**: What are parent threads, child threads, and fork points?

**Answer**: 
- **Parent Thread**: The thread that creates a new thread is called the parent thread.
- **Child Thread**: The thread that is created by another thread is known as the child thread.
- **Fork Point**: The specific point in the code where a new thread is spawned is referred to as a fork point.

---

Prepared with 💖 by Anamika for interview revision.


