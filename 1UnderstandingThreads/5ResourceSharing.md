# Threads and Resource Management 🧵💻

## Table of Contents 📚
1. [Conceptual Overview](#conceptual-overview-🌐)
2. [OS's Role in Thread Management](#oss-role-in-thread-management-🛠)
3. [Sibling Relationship Among Threads](#sibling-relationship-among-threads-👫)
4. [Life Cycle of Threads](#life-cycle-of-threads-🔄)
5. [Shared Resources Among Threads](#shared-resources-among-threads-🔄)
6. [Unshared Resources Among Threads](#unshared-resources-among-threads-🚫)
7. [Common Interview Questions](#common-interview-questions-🗂)

---

## Conceptual Overview 🌐

Understanding how threads are managed by the operating system is crucial for understanding multi-threading.

---

## OS's Role in Thread Management 🛠

The operating system allocates various resources to threads, such as:
- Memory
- CPU
- Access to hardware

Each thread can demand dynamic memory allocation using `malloc` and `calloc`.

The OS also schedules threads on the CPU. This involves a scheduling policy and possibly context-switching among multiple threads.

---

## Sibling Relationship Among Threads 👫

Threads are not in a parent-child relationship but are considered "siblings."

> **Note:** The terms "parent" and "child" threads are used to imply which thread created which, but there are no hierarchical privileges. 

---

## Life Cycle of Threads 🔄

Every thread has its own separate and isolated life cycle. They:
1. Take birth
2. Live (Execute)
3. Eventually Die

**Exception**: If the main thread dies and is not terminated using `pthread_exit` API, all other threads will also be terminated.

---

## Shared Resources Among Threads 🔄

Multiple threads in the same process share:
- **Heap Memory**
- **File Descriptors**
- **Sockets**
- **Global Variables**

> **Note:** If one thread has access to a certain memory address, that address is accessible to other threads in the same process.

---

## Unshared Resources Among Threads 🚫

- **Stack Memory** is not shared among threads. 
    - Each thread has its own private stack memory.

---

## Common Interview Questions 🗂

1. **What resources are shared among threads of the same process?**
   - Heap Memory, File Descriptors, Sockets, Global Variables

2. **What resource is not shared among threads of the same process?**
   - Stack Memory

---
# Questions and Answers on Threads and Resource Management 🧵💻

## Table of Contents 📚
1. [Shared Resources](#shared-resources-🔄)
2. [Unshared Resources](#unshared-resources-🚫)
3. [Role of OS in Thread Management](#role-of-os-in-thread-management-🛠)
4. [Life Cycle of Threads](#life-cycle-of-threads-🔄)
5. [Sibling Relationships](#sibling-relationships-👫)

---

## Shared Resources 🔄

### Q1: What resources are shared among threads of the same process?

**Answer**: 
Heap Memory, File Descriptors, Sockets, and Global Variables are resources that are shared among threads of the same process.

---

## Unshared Resources 🚫

### Q2: What resource is NOT shared among threads of the same process?

**Answer**: 
Stack Memory is not shared among threads. Each thread has its own exclusive stack memory.

---

## Role of OS in Thread Management 🛠

### Q3: How does the operating system manage thread scheduling?

**Answer**: 
The operating system uses a scheduling policy to decide which thread gets allocated to which CPU. Context-switching may occur among multiple threads based on this policy.

---

## Life Cycle of Threads 🔄

### Q4: Can you explain the life cycle of a thread?

**Answer**: 
Every thread undergoes its own isolated life cycle, which includes three stages: Birth, Execution (or Live), and Death. Threads live and die independently of one another.

---

## Sibling Relationships 👫

### Q5: What is the relationship between threads in the same process?

**Answer**: 
Threads in the same process are considered to be "siblings." There is no parent-child hierarchy among threads, and each thread lives independently of the others.

> **Note**: The terms "parent" and "child" are sometimes used, but this is only to specify which thread created which. No extra privileges are implied.

---

Prepared with 💖 for your interview success!




