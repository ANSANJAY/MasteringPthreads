# Multithreading in C - Demo Program for Joinable Threads 🧵

## Introduction 📌

This demo program is designed to illustrate the concept of joinable threads in C. It showcases how a main thread can spawn child threads and how it can wait for them to complete their tasks before proceeding.

---

## File Structure 📂
- Directory: `Multithreading Bible/thread basics/joinable`
- File: `Joinable Example.c`

---

## How the Program Works 🛠

### Main Thread 🧵

- **Objective**: The main thread creates two child threads, `thread_2` and `thread_3`, and waits for them to complete their tasks.

- **Functionality**: The main thread provides an integer value to each child thread. The child threads square this integer and return the result to the main thread.

---

### Child Threads 🧒

#### Thread 2 and Thread 3 🧵

- **Task**: Compute the square of the given integer.
  
---

## Code Breakdown 📝

### Thread Creation 🧵

- `thread_create()` function is called to create a child thread.

    ```c
    // thread_create(thread_handle, value);
    ```

- **Arguments**:
  - `thread_handle`: Pointer to the thread handle
  - `value`: The integer value to be squared by the child thread

### Custom Thread Creation Function: `thread_create` 🛠

- **Responsibilities**: Sets the attributes for the new thread.
  
- **Attributes**:
    - **Type**: Joinable (`pthreadcreate_joinable`) or Detached (`pthreadcreate_detached`)
    - Uses the POSIX API `pthread_attr_setdetachstate()` to set the attribute.

### Actual Thread Spawning 🌱

- `pthread_create()` is invoked.
    - **Arguments**:
        - Thread handle
        - Attributes (set as Joinable)
        - Thread callback function
        - The integer argument (stored in heap memory)

---

### Child Thread Callback Function 🔄

- **Task**: Squares the given integer value.
- **Execution Time**: Simulated using sleep and loops.

---

### Main Thread Joins Child Threads 🤝

- `pthread_join()` is called to make the main thread wait for child threads to finish.

    ```c
    // pthread_join(thread_handle, &thread_result);
    ```

- **Outcome**: The squared value returned from each child thread is stored in `thread_result`.

---

### Results 📊

- Main thread collects and prints the results returned by child threads.
  
---

## Practical Observations 🤔

1. Thread 2 runs for 2 seconds, returns `4`.
2. Thread 3 runs for 10 seconds, returns `100`.

---

## Bonus Challenge 🏆

Change the execution time for `Thread 2` and `Thread 3` and observe the behavior. How does your program react when child threads wait for different amounts of time?

---

## Usage

## Compilation 
```C
  gcc -g -c joinable_example.c -o joinable_example.o
  gcc -g joinable_example.o -o joinable_example.exe -lpthread
```
## Run 

```C
 * Run : ./joinable_example.exe
```
That's the end of the demo. Hope you found it useful for understanding joinable threads in C! 💡
