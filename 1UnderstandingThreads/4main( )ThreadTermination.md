
# Thread Lifetime Interview Q&A 🧵⏳

## Table of Contents 📚
1. [Main Thread vs Child Threads](#main-thread-vs-child-threads-🆚)
2. [Impact of Main Thread Termination](#impact-of-main-thread-termination-💥)
3. [Using `pthread_exit` in Main Thread](#using-pthread_exit-in-main-thread-🚪)
4. [Impact of Child Thread Termination](#impact-of-child-thread-termination-👶)

---

## Main Thread vs Child Threads 🆚

### Question:
- Are there any differences in privileges between the main thread and child threads in a process?

### Answer:
- Yes, the main thread enjoys extra privileges over child threads. If the main thread terminates, all child threads will be terminated by default. However, the vice versa is not true; child threads terminating does not affect the main thread or other child threads.

---

## Impact of Main Thread Termination 💥

### Question:
- What happens to child threads if the main thread terminates?

### Answer:
- By default, if the main thread dies, all child threads will also be terminated. This is why developers often use mechanisms like `pause()` to keep the main thread alive, allowing child threads to complete their execution.

---

## Using `pthread_exit` in Main Thread 🚪

### Question:
- Can you keep child threads running even if the main thread terminates?

### Answer:
- Yes, you can keep child threads running even if the main thread terminates by using the `pthread_exit` API. When you use `pthread_exit` in the main thread, it terminates only the main thread, allowing child threads to continue execution.

```c
pthread_exit(NULL);
```

---

## Impact of Child Thread Termination 👶

### Question:
- What is the impact on other threads if a child thread terminates?

### Answer:
- If a child thread terminates, it has no impact on the main thread or other child threads. A child thread can be terminated through cancellation, `pthread_exit`, or by running to completion, and it only affects that particular child thread.

