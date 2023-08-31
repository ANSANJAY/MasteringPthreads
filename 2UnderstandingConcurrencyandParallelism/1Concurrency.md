#  Revision Notes on Multi-threading 🧵💻

## Table of Contents 📚
1. [Introduction](#introduction-👋)
2. [Concurrency](#concurrency-🔄)
3. [Real-World Example of Concurrency](#real-world-example-of-concurrency-🌍)
4. [Mapping Concurrency to Multi-threading](#mapping-concurrency-to-multi-threading-💡)

---

## Introduction 👋
- This section aims to make you familiar with technical terms related to the multi-threading world. 
- Key terms to understand include context switching, concurrency, and parallelism. 
- These terms will frequently appear in discussions, assignments, and projects concerning multi-threading.

---

## Concurrency 🔄

### Definition
- Concurrency means doing two or more different tasks. However, the manner in which these tasks are performed determines whether it is concurrency or not.
  
### Pattern of Concurrency
- The pattern involves performing tasks one at a time and switching between them.
- The switch is usually preemptive. You perform one task partially, preempt it, pick another task, and perform it partially, and so on.
- You return to the original task eventually, resuming from where it was left off. 

### Note
- Performing tasks in this 'round-robin' fashion constitutes concurrency.

---

## Real-World Example of Concurrency 🌍

### Scenario
- Three well-diggers are tasked with digging a 100ft deep well each. 
- They only have one well-drilling tool to share between them.

### Conditions
- Only one person can dig at a time due to the availability of a single tool.
- When one digger gets tired, he hands over the tool to the next person, who resumes from where he left off.

### Conclusion
- All three well-diggers make progress, though slowly, due to the need to share resources.
- The work being done by all three well-diggers, albeit at a slower pace, exemplifies the property of concurrency.

---

## Mapping Concurrency to Multi-threading 💡
- Just like the real-world example, in multi-threaded applications, threads share resources and resume tasks from where they were preempted.
- Multiple concurrent threads operate in the same fashion, adhering to the pattern of concurrency.

---


