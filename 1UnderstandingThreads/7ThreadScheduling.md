#  Revision Notes on Thread Scheduling and Management 🧵💻

## Table of Contents 📚
1. [What is Schedulable?](#what-is-schedulable-🤔)
2. [User Space vs Kernel Space](#user-space-vs-kernel-space-🌐)
3. [Scheduling Entities](#scheduling-entities-🎯)
4. [Exception Cases](#exception-cases-⚠️)
5. [Signal Handling](#signal-handling-🚨)
6. [Race Conditions](#race-conditions-🏁)
7. [Scheduling Policy](#scheduling-policy-📜)

---

## What is Schedulable? 🤔

### Definition
The kernel or operating system schedules **threads**, not processes.

### Implication
- When we talk about scheduling, we mean how the OS decides which thread gets allocated to which CPU for execution.
  
---

## User Space vs Kernel Space 🌐

### Explanation
- **Kernel Space**: Where the OS runs.
- **User Space**: Where all applications run.

  
---

## Scheduling Entities 🎯

### Competing Threads
- Threads T1, T2, T3, and T4 are competing for CPU resources.
  
### Scheduling Unit
- The OS sees threads as the schedulable entity, not the processes.

---

## Exception Cases ⚠️

### Segmentation Faults
- If a thread (e.g., T1) commits an error like a segmentation fault, the **entire process (P1)** gets terminated.
  
### Penalty
- Other threads (e.g., T2) of the offending process also get terminated.

---

## Signal Handling 🚨

### Delivery Unit
- Signals are delivered at the **process level**, not at the thread level.

### Examples
- Segmentation fault (`SIGSEGV`).
- Termination (`SIGTERM`) when you press Ctrl+C.

---

## Race Conditions 🏁

### On Thread Creation
- A race condition occurs when the OS has to decide which thread (parent or child) to schedule first after creation.

---

## Scheduling Policy 📜

### Types
- First Come, First Serve (FCFS)
- Shortest Job First (SJF)
  
### Application
- The OS uses these policies to decide which thread gets the CPU.

---

Prepared with 💖 for your  success!

#  Questions and Answers on Thread Scheduling and Management 🧵💻

## Table of Contents 📚
1. [What Entities are Schedulable?](#what-entities-are-schedulable-🤔)
2. [Difference between User Space and Kernel Space](#difference-between-user-space-and-kernel-space-🌐)
3. [What Happens When a Thread Causes a Segmentation Fault?](#what-happens-when-a-thread-causes-a-segmentation-fault-⚠️)
4. [How are Signals Handled in Multithreaded Programs?](#how-are-signals-handled-in-multithreaded-programs-🚨)
5. [Explain Race Conditions in Thread Creation](#explain-race-conditions-in-thread-creation-🏁)
6. [What is the Role of Scheduling Policy in Thread Management?](#what-is-the-role-of-scheduling-policy-in-thread-management-📜)

---

## What Entities are Schedulable? 🤔

### Question
- What entities do the operating system schedule — threads or processes?

### Answer
- The operating system schedules threads, not processes. Threads are the basic units of execution flow, and they are the ones that get allocated to CPUs for execution.

---

## Difference between User Space and Kernel Space 🌐

### Question
- Can you differentiate between User Space and Kernel Space?

### Answer
- Kernel Space is where the Operating System runs, while User Space is where all the user applications run. Kernel space has higher privileges and can directly interact with hardware, whereas User Space interacts with the hardware through the OS.

---

## What Happens When a Thread Causes a Segmentation Fault? ⚠️

### Question
- What happens when a thread causes a segmentation fault?

### Answer
- If a thread causes a segmentation fault, the entire process containing that thread is terminated by the operating system. All threads belonging to that process are also terminated.

---

## How are Signals Handled in Multithreaded Programs? 🚨

### Question
- How are signals like `SIGTERM` and `SIGSEGV` handled in a multithreaded program?

### Answer
- Signals are delivered at the process level, not at the thread level. If a signal like `SIGTERM` or `SIGSEGV` is sent to a process, it affects the entire process and all its threads, leading to termination of the whole process.

---

## Explain Race Conditions in Thread Creation 🏁

### Question
- What is a race condition in the context of thread creation?

### Answer
- A race condition occurs when it's unpredictable which thread (either the parent or the newly created child) will get scheduled first by the OS after the creation of a new thread. This indeterminism creates a race condition.

---

## What is the Role of Scheduling Policy in Thread Management? 📜

### Question
- What role does scheduling policy play in thread management?

### Answer
- The scheduling policy (like First Come, First Serve or Shortest Job First) dictates how the operating system allocates CPUs to competing threads. The OS uses these policies to decide which thread should be given CPU time for execution.

---

Prepared with 💖 for your  success!
