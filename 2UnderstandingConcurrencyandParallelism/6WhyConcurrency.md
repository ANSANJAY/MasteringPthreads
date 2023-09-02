# Detailed Interview Revision Notes on Thread Execution 📚

## Table of Contents 📖
1. [Introduction to Thread Execution](#introduction-to-thread-execution)
2. [Concurrent Execution](#concurrent-execution)
3. [Parallel Execution](#parallel-execution)
4. [Hybrid Approach: Combining Concurrency and Parallelism](#hybrid-approach-combining-concurrency-and-parallelism)
5. [Why Not Just Parallelism or Just Concurrency?](#why-not-just-parallelism-or-just-concurrency)
6. [Optimizing Thread Execution](#optimizing-thread-execution)

---

## Introduction to Thread Execution 🌟
- **Overview**: Thread execution can occur in multiple forms such as concurrent, parallel, or a hybrid of the two. 

---

## Concurrent Execution 🔄
- **Definition**: When multiple threads share the same CPU to execute their tasks, it is called concurrent execution.
- **Bucket Example**: Consider threads in a bucket `G1`. All these threads share the same CPU.
  - Threads `T1`, `T2`, `T3`, etc., in `G1` have to share the same CPU and execute in a concurrent fashion.
- **Context Switching**: Due to sharing the same CPU, threads like `T1`, `T2`, and `T3` experience context switching so that each thread gets a chance to execute.

### Interview Points 🎯
- **Q**: What is concurrent execution?
- **A**: In concurrent execution, multiple threads share a single CPU to perform their tasks. They may undergo context switching to ensure each thread gets some CPU time.

---

## Parallel Execution 🏃‍♂️💨
- **Definition**: In parallel execution, threads execute their tasks simultaneously on separate CPUs.
- **Different Groups**: Threads from different groups run in parallel. For example, threads in group `G1` will run on `CPU1`, while threads in group `G2` will run on `CPU2`.
- **Parallel Threads**: Threads `T1` in `G1` and `T11` in `G2` can execute in parallel on different CPUs.

### Interview Points 🎯
- **Q**: What is parallel execution?
- **A**: Parallel execution involves threads executing their tasks simultaneously on different CPUs, without sharing the same CPU.

---

## Hybrid Approach: Combining Concurrency and Parallelism 🌐
- **Definition**: Modern computer systems are designed to take advantage of both concurrency and parallelism.
- **Advantages**: This hybrid approach optimizes CPU usage and allows multiple threads to make progress.

### Interview Points 🎯
- **Q**: What is the hybrid approach?
- **A**: The hybrid approach combines elements of both concurrency and parallelism to optimize system performance.

---

## Why Not Just Parallelism or Just Concurrency? ❓
- **Parallelism Alone**: If there were only parallelism, then a few threads would execute, leaving the rest idle, which is inefficient.
- **Concurrency Alone**: If there was only concurrency, the overhead from constant context switching could slow down execution.

### Interview Points 🎯
- **Q**: Why not use only parallelism or only concurrency?
- **A**: Using just one would be inefficient. Only parallelism would leave many threads idle. Only concurrency would slow down execution due to context switching.

---

## Optimizing Thread Execution 🛠️
- **Best Practice**: A balanced hybrid approach of concurrency and parallelism provides optimal thread execution and is commonly used in modern computer systems.

### Interview Points 🎯
- **Q**: How can thread execution be optimized?
- **A**: A hybrid approach that balances both concurrency and parallelism provides the most optimized thread execution in modern computer systems.

---

This README aims to serve as a comprehensive guide for understanding the complexities and best practices surrounding thread execution in computer systems. 🌟 Good luck with your interviews! 🍀
