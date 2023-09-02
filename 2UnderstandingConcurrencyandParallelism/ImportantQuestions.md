### Questions and Answers for the Assignment 📚

#### 1. Explain the difference between Concurrent threads and Parallel Threads.

- **Concurrent Threads**: These threads share the same CPU and their execution is interleaved, often involving context-switching. They can belong to the same or different processes and their work can be either overlapping or non-overlapping.
  
- **Parallel Threads**: These threads execute simultaneously on separate CPUs. They must have non-overlapping work to be considered parallel.

---

#### 2. An embedded system is running 2 threads on 2 cores (CPUs). What should be the condition the two threads must meet to call them:

- **a. Concurrent threads**: The threads would be considered concurrent if they share data or resources which require synchronization, even if they are running on separate CPUs.

- **b. Parallel threads**: The threads would be considered parallel if they have non-overlapping work and run on separate CPUs.

---

#### 3. Explain any typical process/application design which has to be multi-threaded to accomplish its functionality.

- **Web Servers**: Web servers often use a multi-threaded design to handle multiple client requests concurrently. Each client request is processed by a separate thread, allowing the server to handle multiple requests in an efficient manner.

---

#### 4. A Process P is a multi-threaded process which has two threads. Process P has two arrays, each array of 1 million integers. The two threads have a responsibility to find the sum of each array. The two threads are assigned their respective array for computation. Explain - is this computation concurrent or parallel under each of the below constraints.

- **1. System has 2 CPUs, and no other thread is present in the system other than these two threads**: In this case, the computation would be **Parallel** as each thread has its own CPU and they have non-overlapping work (each working on a different array).

- **2. System has 1 CPU, and no other thread is present in the system other than these two threads**: In this case, the computation would be **Concurrent**, as both threads will share the single CPU and their execution will be interleaved.

---

#### 5. If we change the responsibility of the worker threads, that instead of finding the sum, they have to find the largest number present in the two arrays combined. Then is the computation concurrent or parallel if:

- **1. System has 2 CPUs, and no other thread is present in the system other than these two threads**: The computation would be **Concurrent** because both threads need to compare their results to find the largest number, requiring synchronization.

- **2. System has 1 CPU, and no other thread is present in the system other than these two threads**: Again, the computation would be **Concurrent** as they would share the same CPU and require synchronization to compare results.

---

#### 6. Consider a doubly linked list containing 1 million integers as node->data. A process P is created to replace the data in all nodes of the linked list with the squared of the integers. For example, if the list is: 2 4 5 7 8 9, Final list should be: 4 16 25 49 64 81. Assign the responsibility to the two threads so that threads can be independently executed on different processors of the system without having a need for any coordination.

- **Thread T1**: Could handle the squaring operation for the first 500,000 nodes.
- **Thread T2**: Could handle the squaring operation for the next 500,000 nodes.

Since both threads are working on different sections of the list and the system has 2 CPUs, this operation would be **Parallel**.

---

#### 7. Which of the following is/are true?

- **1. T1 and T2 are said to be concurrent threads if they execute only 1 at a time on a uni-processor system**: True
- **2. Very fast Context Switching creates an illusion to human as if concurrent threads are executing in parallel**: True
- **3. Concurrency refers to things that appear to happen at the same time, But actually not!**: True
- **4. Concurrency must ensure independent progression**: False. Independent progression is not necessarily required for concurrency; it is more related to parallelism where each thread can complete its task without waiting for the other. 

---

I hope these answers help you in your preparation for interviews! 🌟
