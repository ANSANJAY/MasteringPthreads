# Interview Revision Notes on Multi-threading: Focus on Parallelism 🧵💨

## Table of Contents 📚
1. [Introduction to Parallelism](#introduction-to-parallelism-🌐)
2. [Understanding Parallelism with an Example](#understanding-parallelism-with-an-example-👷‍♂️)
3. [Comparison with Concurrency](#comparison-with-concurrency-⚖️)
4. [Impact on Multi-threading](#impact-on-multi-threading-🔨)

---

## Introduction to Parallelism 🌐
- In this part, we'll delve into what parallelism means in the context of multi-threading.
- Parallelism refers to the execution of two or more tasks simultaneously, or "in parallel".

---

## Understanding Parallelism with an Example 👷‍♂️

### Scenario
- Extending the previous example of well-diggers, this time, each of the three well-diggers has their own well-drilling tool.

### Conditions
- Since each has their own tool, all three can dig their wells simultaneously, or "in parallel."
- No need for anyone to take rest until the task is complete, speeding up the work significantly.

### Conclusion
- All three well-diggers can work in parallel, increasing the speed of well-digging by approximately 3 times compared to when they were working in a concurrent fashion.

---

## Comparison with Concurrency ⚖️

- In concurrency, tasks are carried out one at a time but in a way that makes them appear simultaneous.
- In parallelism, tasks are genuinely simultaneous, thanks to additional resources (e.g., individual well-drilling tools for each well-digger).
  
### Note
- Parallelism is faster than concurrency when there are sufficient resources, because tasks are done literally at the same time rather than appearing to be so.

---

## Impact on Multi-threading 🔨

- Parallelism impacts the speed and throughput of multi-threaded processes significantly.
- In a multi-threaded context, having more hardware resources means threads can operate independently and in parallel, improving speed and efficiency.

### Key Point
- The extent of parallelism is often limited by the amount of available hardware resources. More resources mean more tasks can be done in parallel, leading to increased speed and efficiency.

---

**Prepared with 💖 to help you ace those interviews!**
