
# 📝 Multi-Threading Interview Revision Notes

## 📚 Table of Contents

1. [Concurrency](#concurrency)
2. [Parallelism](#parallelism)
3. [Singularism](#singularism)
4. [Mapping to Multi-Threading](#mapping-to-multi-threading)

---

## 🔀 Concurrency

### 📖 Definition

- **Concurrency** is about doing two or more tasks in such a way that only one task is being performed at a given time, and tasks are switched intermittently.

### 🔄 Context Switching

- The act of switching between tasks by preempting a currently running task and picking up another task to perform.

### 🌍 Real-World Analogy

- Three well-diggers, each needing to dig a 100ft deep well, but they share only one drilling tool.

### ✅ Concurrency Traits

- Multiple tasks are in progression.
- Tasks are performed in a round-robin fashion.

---

## 🏃‍♂️ Parallelism

### 📖 Definition

- **Parallelism** means performing two or more tasks simultaneously.

### 🌍 Real-World Analogy

- Three well-diggers, each needing to dig a 100ft deep well, but this time each has their own drilling tool.

### ✅ Parallelism Traits

- Tasks are both in progression and are completed more quickly.
- Time is saved because there are more resources (drilling tools).

---

## 🚶‍♂️ Singularism

### 📖 Definition

- **Singularism** means performing tasks one by one without any preemption.

### 🌍 Real-World Analogy

- Three well-diggers, each with their own drilling tool, but only one can dig at a time, and must finish before the next begins.

### ✅ Singularism Traits

- Only one task is in progression at a time.
- No time is saved, even with more resources.

---

## 🗺 Mapping to Multi-Threading

### 🎭 Entities in Multi-Threading vs Well-Digging

- **Workers**: Threads in Multi-Threading, Well-Diggers in Analogy
- **Resources**: CPU, Memory in Multi-Threading, Drilling Tool in Analogy
- **Transition**: Context Switching in Multi-Threading, Switching of Well-Diggers in Analogy
- **Work to Accomplish**: Task assigned to Threads in Multi-Threading, 100ft Well in Analogy

---

For further context and details, each of these topics will be covered in-depth in future lectures.

---

Feel free to refer back to these notes when preparing for interviews on Multi-Threading and related topics. Good luck! 🍀

---