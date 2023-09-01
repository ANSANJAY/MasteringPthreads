 # Multi-threading in C: Detailed Notes 📝

## Introduction 🎬
- The tutorial covers how to create a basic multi-threaded program in C.
- Focuses on POSIX Threads, commonly known as pthreads.

---

## Pre-Requisites 📚
- Include the header file `pthread.h` for POSIX Threads support.

---

## Concepts 📜

### Main Thread 🧵
- Every C program starts with a **Main Thread**.
- The main thread executes the `main()` function.
  
### Creating Additional Threads 👥
- Main thread can create child threads.
- These child threads are terminated if the main thread terminates.
  
### Pause Function ⏸
- `pause()` function is used to halt the main function. 
- This is done to prevent the main thread from terminating, which would result in child threads also terminating.
- To use `pause()`, include `unistd.h`.

---

## Code Implementation 🛠

### Creating New Threads 🆕
- User-defined function `ThreadOneCreate()` is used to create a new thread.
- Parent of this new thread would be the main thread.

#### Thread Handle 🏷
- Threads are identified using a data structure called `pthread_t`.
- This is an opaque data structure, meaning its internal details are hidden.
- This handle is used to refer to the thread later.

#### Input to Threads 📥
- Threads, like functions, need input to work.
- Example input: A string "I am thread number one."

#### Creating Thread API 🛠
- New threads are created using `pthread_create()` API.
  
##### Arguments to `pthread_create()`
1. **Thread Handle**: Address of the thread handle.
2. **Attributes**: (To be discussed later, for now, NULL).
3. **Function Pointer**: Points to the function that the thread will execute.
4. **Input Data**: Address of the memory that will be consumed as input.

##### Memory Precautions 🚫
- The input memory must be either on the heap or static memory.
- Do not use local variables as they are destroyed once the function scope ends.

#### Fork Point 🍴
- The line where `pthread_create()` is called is known as the **Fork Point**.
- At this point, the main thread gives birth to a child thread.

##### Return Values 🔄
- `pthread_create()` returns zero on success, otherwise a negative value indicating an error.

## Conclusion 📚
- Main thread must not terminate for child threads to keep running.
- Use the `pthread_create()` API for thread creation.
- Memory passed to threads must be either static or heap-allocated.
  
## Thread Function Callbacks 🔄

### Introduction 🎬
- A thread function callback is a specific function that a child thread executes after creation.
  
### Function Prototype 📜
- This type of function must have a fixed prototype: `void* function_name(void* arg);`
- Very generic prototype, allowing flexibility.
  
### Execution Context 🛠
- This function gets executed in the context of the child thread that invokes it.

---

## Doing Useful Work 🛠

### Input Arguments 📥
- The last argument provided to `pthread_create()` is available to this thread function.
- Simply typecast the argument to the appropriate type (e.g., `char*` for strings).
  
### Example Work: Printing a String 🖨
- A simple example involves an infinite loop printing a string and sleeping for one second.
  
---

## Compilation & Execution 🖥

### Compilation Steps 👨‍💻
- The process of compiling a multi-threaded program includes linking with the pthread library.
- Use the `-pthread` flag for linking.

#### Example Command for Compilation 📝

```bash
gcc hello_world.c -o hello_world -pthread
```

### Execution Behaviour 🏃‍♂️
- The main thread will pause, allowing the child thread to run and print the input string every second.
  
---

## Special Notes 📌

### Main Thread's Role 👨‍🔬
- If the main thread terminates, all child threads will also terminate.
  
### Pause Function Importance 🛑
- Removing the pause function from the main thread gives the child thread no chance to execute.
  
### Keeping Child Thread Alive 🤖
- Techniques for allowing the main thread to terminate while keeping child threads running will be discussed later.

---


 
 
 
 
 
 
 
 