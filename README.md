# MasteringPthreads
This repository contains comprehensive notes and code samples from the Master Class Course on Multi-Threading. Covering topics from basic to advanced—thread creation, race conditions, mutex, deadlocks, condition variables, and semaphores—it serves as a one-stop guide for mastering multi-threading in C/C++ on Linux.

# Multi-Threading Master Class Course Notes 🧵📘

## Description 📋

This repository contains comprehensive notes and code samples from the Master Class Course on Multi-Threading. Covering topics from basic to advanced like thread creation, race conditions, mutex, deadlocks, condition variables, and semaphores. A one-stop guide for mastering multi-threading in C/C++ on Linux. 🐧🔐

## Table of Contents 📚

1. [Understanding Threads](#understanding-threads) 👥
2. [Understanding Concurrency and Parallelism](#understanding-concurrency-and-parallelism) 🔄
3. [Joinable and Detached Threads](#joinable-and-detached-threads) 🧩
4. [Inter Thread Communication](#inter-thread-communication) 📨
5. [Asynchronous Thread Cancellation](#asynchronous-thread-cancellation) 🛑
6. [Deferred Cancellation](#deferred-cancellation) ⏳
7. [Listener Threads](#listener-threads) 🎧
8. [Thread Synchronization](#thread-synchronization) 🔄
9. [Deadlocks](#deadlocks) 🔒
10. [Condition Variables](#condition-variables) 🚦
11. [Dining Philosopher Problem](#dining-philosopher-problem) 🍽️
12. [Semaphores](#semaphores) 🚦

## Prerequisites 🛠️

- Linux Operating System
- C or C++ Programming Language
- Basic understanding of Operating Systems

## How to Use 🤔

1. Clone the repository 📂
   ```bash
   git clone https://github.com/ANSANJAY/MasteringPthreads.git
    ```
2. Navigate to the topic folder 🗂️
3. Open the notes and code samples 📝

# POSIX API for thread 
 The POSIX Threads (pthreads) library provides various functions for multi-threading in C/C++ on UNIX-based systems. Here's a list of some commonly used functions in the pthreads API:

1. **Thread Management**
   - `pthread_create()`: Start a new thread.
   - `pthread_exit()`: Exit the current thread.
   - `pthread_join()`: Wait for a thread to finish.
   - `pthread_detach()`: Detach a thread so that it cleans up upon completion.
   - `pthread_self()`: Get the calling thread's ID.
   - `pthread_equal()`: Compare two thread IDs.

2. **Mutex (Mutual Exclusion)**
   - `pthread_mutex_init()`: Initialize a mutex.
   - `pthread_mutex_destroy()`: Destroy a mutex.
   - `pthread_mutex_lock()`: Lock a mutex.
   - `pthread_mutex_trylock()`: Try to lock a mutex without blocking.
   - `pthread_mutex_unlock()`: Unlock a mutex.

3. **Condition Variables**
   - `pthread_cond_init()`: Initialize a condition variable.
   - `pthread_cond_destroy()`: Destroy a condition variable.
   - `pthread_cond_wait()`: Block on a condition variable.
   - `pthread_cond_signal()`: Wake up one thread blocked on the condition variable.
   - `pthread_cond_broadcast()`: Wake up all threads blocked on the condition variable.
   - `pthread_cond_timedwait()`: Block on a condition variable for a specified time.

4. **Thread Attributes**
   - `pthread_attr_init()`: Initialize thread attributes.
   - `pthread_attr_destroy()`: Destroy thread attributes.
   - `pthread_attr_setdetachstate()`: Set the detach state attribute.
   - `pthread_attr_getdetachstate()`: Get the detach state attribute.
   - ... (There are many other attribute set/get functions for various attributes.)

5. **Thread-specific Data**
   - `pthread_key_create()`: Create a key for thread-specific data.
   - `pthread_key_delete()`: Delete a key for thread-specific data.
   - `pthread_setspecific()`: Set thread-specific data.
   - `pthread_getspecific()`: Get thread-specific data.

6. **Scheduling**
   - `pthread_setschedparam()`: Set scheduling parameters for a thread.
   - `pthread_getschedparam()`: Get scheduling parameters for a thread.
   - `pthread_setschedprio()`: Set the scheduling priority for a thread.

7. **Read-Write Locks**
   - `pthread_rwlock_init()`: Initialize a read-write lock.
   - `pthread_rwlock_destroy()`: Destroy a read-write lock.
   - `pthread_rwlock_rdlock()`: Read lock a read-write lock.
   - `pthread_rwlock_wrlock()`: Write lock a read-write lock.
   - `pthread_rwlock_tryrdlock()`: Try read lock without blocking.
   - `pthread_rwlock_trywrlock()`: Try write lock without blocking.
   - `pthread_rwlock_unlock()`: Unlock a read-write lock.

8. **Spin Locks**
   - `pthread_spin_init()`: Initialize a spin lock.
   - `pthread_spin_destroy()`: Destroy a spin lock.
   - `pthread_spin_lock()`: Lock a spin lock.
   - `pthread_spin_trylock()`: Try to lock a spin lock without blocking.
   - `pthread_spin_unlock()`: Unlock a spin lock.

9. **Barrier**
   - `pthread_barrier_init()`: Initialize a barrier.
   - `pthread_barrier_destroy()`: Destroy a barrier.
   - `pthread_barrier_wait()`: Wait on a barrier.

10. **Cancellation**
    - `pthread_setcancelstate()`: Set the cancelability state of the current thread.
    - `pthread_setcanceltype()`: Set the cancellation type of the current thread.
    - `pthread_cancel()`: Request cancellation of a thread.
    - `pthread_testcancel()`: Create a cancellation point in the calling thread.

This list is a broad overview of the pthreads API, but it provides a glimpse of the variety of functions available for multithreaded programming. 

## Made With Love 💖

This repository was carefully crafted with love by Anamika. If you find it helpful, please consider giving it a ⭐ (star) and sharing it with your friends and colleagues. Your support is much appreciated! 🙏




