#  Revision Notes on Multi-threading: Complete Guide 🧵⏳

## Table of Contents 📚
1. [Introduction to Concepts](#introduction-to-concepts-🌐)
2. [Understanding Concurrency with an Example](#understanding-concurrency-with-an-example-👷)
3. [Understanding Parallelism with an Example](#understanding-parallelism-with-an-example-👷‍♂️)
4. [Understanding Singularism with an Example](#understanding-singularism-with-an-example-🧍‍♂️)
5. [Comparing Concurrency, Parallelism, and Singularism](#comparing-concurrency-parallelism-and-singularism-⚖️)
6. [Implications in Multi-threading](#implications-in-multi-threading-🔨)

---

## Understanding Singularism with an Example 🧍‍♂️

### Definition 📖
- Singularism means performing tasks one at a time without interruption.
- Once you start a task, you can't stop until it's completed.

### Scenario 🎬
- We have the same example of three well-diggers each with their own well-drilling tool.
  
### Conditions 🛠
- Each well-digger can only start after the previous one has completed their task.
- No pre-empting or discontinuing is allowed.

### Conclusion 🤔
- The work of the well-diggers is not in progression; they have to wait their turn.
- Having multiple tools doesn't impact the speed in this mode of operation.

---

## Comparing Concurrency, Parallelism, and Singularism ⚖️

### Time Comparison 🕒
- Time in Parallelism < Time in Singularism < Time in Concurrency

### What Each Offers 🎁
- Concurrency offers progression but not speed.
- Parallelism offers both speed and progression but requires more hardware resources.
- Singularism offers neither speed nor progression.

### Tool Handover in Scenarios ⚙️
- In concurrency, time is wasted in handing over the well-drilling tool.
- In singularism and parallelism, this handover is absent, saving time.

### Takeaway 🎯
- Choose Concurrency for progression.
- Choose Parallelism for speed and progression, provided you have the resources.

---

## Implications in Multi-threading 🔨

- The well-digger example can be mapped onto multi-threading to explain the efficiency and resource utilization in each method (Concurrency, Parallelism, Singularism).
- Concurrency is useful when resources are limited but tasks need to appear as if they're being done simultaneously.
- Parallelism is efficient but requires more hardware resources.
- Singularism would be least efficient in a multi-threaded environment.

---


