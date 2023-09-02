# 📝 Multi-Threading  Revision Notes

```yaml
      Concurrency                 |      Parallelism                |      Singularism                 Legend
------------------------------------------------------------------------------------------             -----------------
Description: Multiple diggers     | Description: Each digger works   | Description: Only one digger    🟩, 🟨, 🟥: Different diggers
work on the same well, but        | on their own well simultaneously.| works on the well, completing    ⛏: Digger currently at work
one at a time. They switch turns. |                                 | it before the next starts.        [ ]: Depth of well in feet
------------------------------------------------------------------------------------------             🟦, 🟨, 🟥: Digger's progress
Time 1:                                                                                        
                                                                                                
Digger 1:  ⛏🟩🟩                   | Digger 1: ⛏🟦🟦🟦                  | Digger 1: ⛏🟧🟧🟧🟧🟧                      
Digger 2:  🟨🟨🟨🟨                 | Digger 2: ⛏🟨🟨🟨🟨🟨             | Digger 2:                                  
Digger 3:  🟥🟥🟥🟥🟥               | Digger 3: ⛏🟥🟥🟥🟥🟥             | Digger 3:                                  

Well:      [ 5ft ]                  | Well 1:   [10ft]                    | Well:      [10ft]                          
           [10ft ]                  | Well 2:   [10ft]                    | (Digger 1 finished)                        
           [ 7ft ]                  | Well 3:   [10ft]                    |                                          
------------------------------------------------------------------------------------------                                    
Time 2:                                                                                        

Digger 1:  🟩🟩🟩🟩🟩                 | Digger 1:⛏ 🟦🟦🟦🟦🟦🟦                | Digger 1:                                   
Digger 2:  ⛏🟨🟨🟨                   | Digger 2: ⛏ 🟨🟨🟨🟨🟨🟨🟨             | Digger 2: ⛏🟦🟦🟦🟦🟦                        
Digger 3:  🟥🟥🟥🟥🟥                 | Digger 3: ⛏ 🟥🟥🟥🟥🟥🟥🟥             | Digger 3:                                  

Well:      [ 7ft ]                   | Well 1:   [12ft]                     | Well:      [ 5ft]                           
           [⛏11ft]                   | Well 2:   [12ft]                     | (Digger 2 started)                          
           [10ft ]                   | Well 3:   [12ft]                     |                                            

```


```
       Concurrency        |       Parallelism       |       Singularism
------------------------------------------------------------------------
Digger 1:  ⛏             | Digger 1:  ⛏           | Digger 1:  ⛏ 
Digger 2:                 | Digger 2:  ⛏           | Digger 2:  
Digger 3:                 | Digger 3:  ⛏           | Digger 3:  
                          |                         |  
Well:      [ 3ft ]        | Well 1: [10ft]          | Well:      [10ft]
           [ 7ft ]        | Well 2: [10ft]          |   
           [ 5ft ]        | Well 3: [10ft]          |   
                          |                         |  
                          |                         |  

```


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

