# Detailed Notes on Joinable and Detached Threads for Interview Revision 📘🔍

## Introduction 🌟
In this section, we're diving into the concepts of joinable and detached threads. These are two modes in which a thread can be created using the `pthread_create` API in POSIX-compliant systems. 

## Basics: Creating Threads in Different Modes 🛠
- A thread can be created in **one of two modes**: either *joinable* or *detached*.
- The mode is determined by an **argument passed to `pthread_create`**.
  
## What are Joinable Threads? 🤔
### Properties and Benefits 👍
- A joinable thread has a **parent thread**, which creates it.
- It starts executing in its **own execution flow** after being created.
  
### The Fork Point 🍴
- Let's consider a point in the parent thread's execution where it decides to spawn a new thread; this point is known as the **Fork Point (F)**.
- The parent thread uses `pthread_create` to create a new thread in joinable mode.

### The Join Point ⏩
- There's a point (J) in the parent thread's execution where it calls **`pthread_join`**.
- This function **blocks the parent thread** until the joinable child thread completes its execution.

### Termination Point 🛑
- The child thread can terminate either by **explicitly calling `pthread_exit`** or **by returning from its thread function**.
- The point where it finishes execution is called the **Termination Point (T)**.
  
### Joining and Resource Release 🔄
- Upon termination, the child thread sends a **join signal** to the parent.
- The **parent thread resumes its execution**, and only then are the child thread's resources released.

#### ❗ Important Note on Resource Release
- If the joinable thread terminates but **does not join a parent thread**, its resources **won't be released**. This is considered poor programming practice.

### Dynamic Nature 🔄
- A joinable thread can be **converted to a detached thread while running**, and vice versa. APIs are provided to do so.

### Default Behavior 🌐
- If a thread's mode isn't explicitly set, **it defaults to being joinable**.

### Returning Results 📤
- A joinable thread can **return results to its parent thread** at the time of joining.


👉 **Stay Tuned for More Concepts and Practical Demonstrations!** 📚💡
