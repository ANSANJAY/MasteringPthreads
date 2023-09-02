# Interview Revision Notes on Threads and Processes 📚

## Introduction 🌟
This document serves as detailed revision notes focused on threads and processes, a topic crucial for computer science interviews. It covers why threads are called "lightweight processes," the importance of concurrency, and some real-world examples that necessitate multithreading.

---

## Table of Contents 📑
1. [Concurrency: The Need and Importance](#concurrency-the-need-and-importance)
2. [Real-world Scenarios Requiring Multithreading](#real-world-scenarios-requiring-multithreading)
3. [Why are Threads Called "Lightweight Processes?"](#why-are-threads-called-lightweight-processes)
4. [Context Switching and Thread Switching](#context-switching-and-thread-switching)

---

## Concurrency: The Need and Importance 🕒

### Why is Concurrency Needed? 🤔
- Concurrency is essential because we cannot have a large number of CPUs to practice parallelism.
- CPUs need to be shared as there could be hundreds of processes running.
- Ensuring progression and resource efficiency.

---

## Real-world Scenarios Requiring Multithreading 🌐

### Network Application Example 🖧
- **Thread 1**: Waits for network packets.
- **Thread 2**: Sends periodic network packets.
- **Thread 3**: Waits for user input.
  
All these threads need to perform their duties simultaneously for the application to function efficiently.

### Multithreaded TCP Server Example 🌐
- **TCP Server**: Delegates tasks to worker threads.
- **Worker Threads**: Handle communication with different clients.

The tasks are isolated and can be performed concurrently, making the system more efficient.

---

## Why are Threads Called "Lightweight Processes?" 🤖

### Resource Sharing 🔄
- When a new thread is created, it utilizes the resources (like memory, CPU time) allocated to the main thread of the process.
  
### Ease of Creation and Deletion 🛠
- OS doesn't have to work too hard to create or delete threads as they share the resources with their main thread.
  
### Examples of Shared Resources 📚
- **Page Table**: Created once for the main thread.
- **Shared Libraries**: Loaded once into main memory.
- **Open Sockets**: Created once by the main thread.

### No Need for Complete Cleanup 🧹
- When a thread dies, not all resources need to be reclaimed by the OS, as other threads in the same process may still be using them.
  
---

## Context Switching and Thread Switching ⏳

### Context Switching ⏩
- **Thread Switching**: Faster, happens between threads of the same process.
- **Process Switching**: Slower, happens between threads from different processes.

### Why is Thread Switching Faster? 🚀
- Thread switching is faster due to the "lightweight" nature of threads.
- Threads within the same process share resources, making the switch efficient.

---

## Key Takeaways 🗝
- Concurrency is necessary for resource efficiency and process progression.
- Multithreading is essential in scenarios like network applications and TCP servers.
- Threads are considered "lightweight" due to their resource-sharing capabilities and ease of management.
- Thread switching is faster than process switching due to the lightweight nature of threads.

> **Note**: For a deeper understanding, Google terms like "context switching," "thread switching," and read about why threads are considered lightweight processes. 🌐

---
