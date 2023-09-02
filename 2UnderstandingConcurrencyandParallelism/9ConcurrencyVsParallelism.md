# Interview Revision Notes: Concurrency vs Parallelism in Threads 📚

## Introduction 🌟
In this section, we'll summarize the concepts of concurrency and parallelism as they relate to multithreading. These are essential topics for understanding the behavior of threads and are often covered in computer science interviews.

---

## Table of Contents 📑
1. [Concurrency Explained](#concurrency-explained)
2. [Parallelism Explained](#parallelism-explained)
3. [Contrast Between Concurrency and Parallelism](#contrast-between-concurrency-and-parallelism)
4. [Diagrams: Concurrency vs Parallelism](#diagrams-concurrency-vs-parallelism)
5. [Key Takeaways](#key-takeaways)

---

## Concurrency Explained 🔄

### Definition 📝
- Multiple threads, whether they belong to the same or different processes, execute in a "concurrent" fashion when they share the same CPUs.

### Work Overlap 🤝
- Overlapping or non-overlapping work doesn't affect concurrency.
  
> **Note**: As long as the threads share the same CPUs, they execute concurrently.

---

## Parallelism Explained ⏩

### Definition 📝
- Multiple threads execute "in parallel" when they are allocated different CPUs and perform non-overlapping work.

### Requirements 📋
- Threads must be allocated different CPUs.
- Threads must be allocated non-overlapping work.

> **Note**: If these conditions are satisfied, threads can execute in parallel.

---

## Contrast Between Concurrency and Parallelism 🤔

### Concurrency 🔄
- Threads share the same CPU.
- Context-switching between threads allows for interleaved execution.
  
### Parallelism ⏩
- Threads use different CPUs.
- Threads work simultaneously, each completing its task without interruption.

---

## Diagrams: Concurrency vs Parallelism 📊

### Concurrency Diagram 🔄
- **Thread T1** executes on the same CPU.
- Context-switching happens to **Thread T2**.
- **Thread T1** resumes execution.

### Parallelism Diagram ⏩
- **Thread T1** and **Thread T2** execute simultaneously on different CPUs.

> **Visual Aids**: The diagrams illustrate how threads can either execute concurrently (interleaved on the same CPU) or in parallel (simultaneously on different CPUs).

---

## Key Takeaways 🗝

1. **Concurrency** can happen whether threads belong to the same or different processes and whether their work is overlapping or not.
  
2. **Parallelism** requires threads to be allocated different CPUs and to be given non-overlapping tasks.

3. **Context-switching** is a characteristic feature of concurrent thread execution, whereas parallel execution has no need for context-switching.

4. **Thread Allocation**: For parallelism, thread allocation to different CPUs is a must.

> **Next Steps**: This concludes the theoretical foundation necessary for diving into more practical aspects of multithreading.

---

For a deeper understanding, it's recommended to study diagrams and real-world examples that clearly illustrate these concepts. 🌐

---
