# Thread Execution in Computer Systems: Interview Revision Notes 📝

## Table of Contents 📚
1. [Introduction](#introduction)
2. [Concurrent Execution](#concurrent-execution)
3. [Parallel Execution](#parallel-execution)
4. [Singular Execution](#singular-execution)
5. [Key Takeaways](#key-takeaways)

---

## Introduction 🌟
This section covers how multiple threads can coexist in a typical computer system and how they can execute tasks in concurrent, parallel, and singular fashions.

---

## Concurrent Execution 🔄
### Definition 📖
- Threads execute in a way where they share CPU resources and work in coordination with each other.

### Example 📚
- Assume we have 3 threads: `T1`, `T2`, and `T3` and one CPU.
- They are each assigned 6 non-overlapping elements of an 18-element array.

#### Task Assignment 📋
- `T1`: Compute sum of elements 1-6
- `T2`: Compute sum of elements 7-12
- `T3`: Compute sum of elements 13-18

#### Context Switching 🔀
- OS decides when to switch from one thread to another.
- For instance, `T1` may partially complete its task before the OS switches to `T2`.
- OS maintains a scheduling queue where threads wait for the CPU.

---

## Parallel Execution 🏃‍♂️💨
### Definition 📖
- Threads execute tasks simultaneously on different CPUs.

### Example 📚
- Same 3 threads (`T1`, `T2`, `T3`) but now with three CPUs.
  
#### Task Assignment 📋
- Same as the concurrent example.

#### Parallel Execution 🚀
- Each thread is scheduled on its own CPU, thus they execute tasks simultaneously.
- Faster than concurrent execution as no time is wasted in context switching.

---

## Singular Execution 🐌
### Definition 📖
- One thread completes its task before the next thread begins. No context switching.
  
### Example 📚
- Same 3 threads (`T1`, `T2`, `T3`) and one CPU.

#### Task Assignment 📋
- Same as before.

#### Singular Execution 🛑
- `T1` completes its task entirely before `T2` is scheduled, and so on.
- No progression in other threads while one is executing.
- Not practical; doesn't really exist in real systems.

---

## Key Takeaways 📌
- Time taken in parallelism < time taken in singularism < time taken in concurrent execution.
- Context switching is expensive.
- Modern systems are usually a hybrid, supporting both parallel and concurrent execution.

---

By understanding these different modes of thread execution, you'll be better prepared to discuss system design in interviews. Good luck! 🍀

# Interview Questions and Answers on Thread Execution in Computer Systems 📝

## Table of Contents 📚
1. [What is Concurrent Execution?](#what-is-concurrent-execution)
2. [How does Context Switching Work in Concurrent Execution?](#how-does-context-switching-work-in-concurrent-execution)
3. [What is Parallel Execution?](#what-is-parallel-execution)
4. [Difference Between Concurrent and Parallel Execution](#difference-between-concurrent-and-parallel-execution)
5. [Explain Singular Execution](#explain-singular-execution)
6. [Pros and Cons of Context Switching](#pros-and-cons-of-context-switching)

---

## What is Concurrent Execution? 🤔
### Question 🙋‍♂️
Explain what you understand by concurrent execution in the context of computer threads.

### Answer 🗣️
Concurrent execution refers to the process where multiple threads share a single CPU resource to execute their tasks. Threads work in coordination and the Operating System manages which thread gets CPU time, often involving context switching to allow multiple threads to make progress.

---

## How does Context Switching Work in Concurrent Execution? 🔄
### Question 🙋‍♂️
How does context switching affect the execution of threads in a concurrent environment?

### Answer 🗣️
In a concurrent execution environment, the Operating System may decide to switch the thread running on the CPU after a certain amount of time. This operation is called context switching. The state of the executing thread is saved, and a new thread is loaded onto the CPU. Context switching allows multiple threads to make progress but can be an expensive operation in terms of time and resources.

---

## What is Parallel Execution? 🏃‍♂️💨
### Question 🙋‍♂️
What do you understand by parallel execution in threading?

### Answer 🗣️
Parallel execution in the context of threads means that multiple threads execute their tasks simultaneously on separate CPUs. This is different from concurrent execution where threads share a single CPU. Parallel execution is generally faster because there's no time spent on context switching and each thread can run uninterrupted on its own CPU.

---

## Difference Between Concurrent and Parallel Execution 🤷‍♂️
### Question 🙋‍♂️
What is the primary difference between concurrent execution and parallel execution?

### Answer 🗣️
The primary difference lies in how CPU resources are utilized. In concurrent execution, multiple threads share a single CPU and context switching occurs to give each thread some CPU time. In parallel execution, each thread is assigned to its own CPU, allowing them to execute simultaneously, thus generally completing tasks faster.

---

## Explain Singular Execution 🐌
### Question 🙋‍♂️
Can you explain what is meant by singular execution and how practical is it in real-world applications?

### Answer 🗣️
Singular execution refers to a mode where one thread is allowed to complete its entire task before the next thread is scheduled on the CPU. This means there's no context switching or parallel execution. In practical terms, singular execution is almost non-existent in real-world applications because it is highly inefficient.

---

## Pros and Cons of Context Switching 🌟❌
### Question 🙋‍♂️
What are the pros and cons of context switching in thread execution?

### Answer 🗣️
Pros:
- Allows multiple threads to make progress.
- Enables better resource sharing.

Cons:
- Context switching is an expensive operation in terms of time and system resources.
- Can lead to situations where threads are frequently interrupted, affecting performance.

---

Understanding these aspects of thread execution will not only help in answering interview questions but also in system design and optimization. Good luck! 🍀
