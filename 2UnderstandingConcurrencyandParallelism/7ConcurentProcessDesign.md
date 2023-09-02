
# Interview Preparation Notes: Multithreading, Concurrency, and Parallelism in Computer Systems 📝💻🛠️

## Table of Contents 📚
1. [Introduction](#introduction)
2. [Need for Concurrency](#need-for-concurrency)
3. [Multithreading Example: Network Application](#multithreading-example-network-application)
4. [Multithreading Example: TCP Server](#multithreading-example-tcp-server)
5. [Delegation of Work](#delegation-of-work)

---

## Introduction 🌟
Multithreading, concurrency, and parallelism are integral parts of modern computer systems, and understanding these concepts is crucial for performance optimization.

---

## Need for Concurrency 💡
- **Why Concurrency is Required?**: 
    1. Limited number of CPUs 🖥️
    2. Need for progression and resource-sharing 🔄

- **Drawbacks of Only Using Parallelism**: 
    - Waste of resources if CPUs are left idle 🚫
    - Delays due to waiting for CPU release 🕒

- **Optimal Approach**: A hybrid system that employs both concurrency and parallelism for best performance 👌

---

## Multithreading Example: Network Application 🌐
- **Why Multi-threading?**: 
    1. Waiting for network packets 📦
    2. Sending periodic network packets 📤
    3. Waiting for user input 👤
  
- **Threads Involved**:
    1. Thread T1: Waits for user input 👤
    2. Thread T2: Sends out periodic packets 📤
    3. Thread T3: Waits for network packets 📦

- **Fork Points**: Points where a new thread is created 👥
    - F1, F2, F3

---

## Multithreading Example: TCP Server 🌐
- **Why Multi-threading?**:
    1. Serving multiple clients simultaneously 👥

- **Threads Involved**: 
    1. T1, T2, T3 for clients C1, C2, C3, respectively 🗺️

- **Isolation**: Communication with each client is isolated and independent 🛡️

- **TCP Server Characteristics**: Usually designed as multi-threaded or multi-process systems 🔄

---

## Delegation of Work 🤝
- **What is Delegation in Multithreading?**:
    - Delegation involves assigning specific tasks to worker threads 🧵

- **Example in TCP Server**: 
    - TCP server delegates work to worker threads T1, T2, T3 to communicate with clients C1, C2, C3, respectively 📞

- **Analogous Situation**: 
    - Similar to a jewelry shop owner who delegates client interactions to subordinates 💍

---

## Interview Questions & Answers 🙋‍♀️🙋‍♂️

### Q1: Can you explain the need for concurrency in modern computer systems?
- **A1**: Concurrency is essential because we have a limited number of CPUs, and we need to share resources while ensuring progression. A hybrid approach that employs both concurrency and parallelism yields the best performance.

### Q2: How does a typical network application utilize multithreading?
- **A2**: A typical network application would have at least three threads: one for waiting for network packets (Thread T3), one for sending out periodic network packets (Thread T2), and one for receiving user input (Thread T1).

### Q3: Can you elaborate on the term "delegation of work" in a multithreading environment?
- **A3**: In a multithreading environment, the term "delegation of work" refers to assigning specific tasks to worker threads. For instance, in a multi-threaded TCP server, each worker thread is assigned to communicate with a particular client, thereby delegating the work.

### Q4: What is the difference between concurrency and parallelism?
- **A4**: Concurrency is about dealing with multiple tasks by allowing them to overlap, usually for better resource utilization. Parallelism, on the other hand, is about doing multiple things at the same time to speed up computation. The two often overlap but are fundamentally different concepts.

### Q5: How can a multi-threaded TCP server serve multiple clients?
- **A5**: A multi-threaded TCP server can serve multiple clients by delegating each client to a separate worker thread, ensuring isolated and independent communication.

---

Feel free to review these notes and questions to prepare for your interviews! 📖🤓

Good luck! 🍀
