# Detailed Notes on Transfer of Data vs Transfer of Computation 💾🔁

## Introduction 🌟

In this section, we will delve into understanding the difference between **Transfer of Data** and **Transfer of Computation**. These are two methods by which two entities, such as threads or processes, can communicate.

## Transfer of Data 📤📥

### Context 📚
- Consider two entities, **Entity 1** and **Entity 2**. 
- **Entity 1** owns two integers `A` and `B`.
- **Entity 2** owns the computation logic, knowing how to multiply `A` and `B`.

### Workflow 🔄
1. **Entity 1** sends the integers `A` and `B` to **Entity 2**.
2. **Entity 2** multiplies `A` and `B` and stores the result in its local storage `C`.
3. Therefore, the computation logic is stationary and resides only in **Entity 2**.
  
🔎 **Key Insight**: Data is transferred from **Entity 1** to **Entity 2** while computation stays with **Entity 2**.

## Transfer of Computation 🚀

### Context 📚
- The same entities (**Entity 1** and **Entity 2**) and the same integers `A` and `B` are involved.
- The goal is also the same: the multiplication of `A` and `B`.

### Workflow 🔄
1. **Entity 2** sends the computation logic (a function) to **Entity 1**.
2. **Entity 1** uses this function to compute `A * B`.
3. The result is then stored in **Entity 2**'s local storage `C` without the need for data to be sent back.

### Conditions 📋
- The above is only possible if **Entity 1** and **Entity 2** exist in the same virtual address space.
- This is typical for threads within the same process.

🔎 **Key Insight**: Computation is transferred from **Entity 2** to **Entity 1**, while data remains stationary. 

## Summary: Transfer of Computation 🌈
- It's effectively a function call through a pointer.
- Suitable for entities within the same virtual address space, typically threads of the same process.
  
🤓 **Note**: Transfer of computation can be implemented in various ways, not just through function pointers.

## What's Next? 📹
In the following lecture, we will go through examples demonstrating **Transfer of Computation** to better understand its workings.

---


# Detailed Notes on Programming Example for Transfer of Computation 📝💻

## Introduction 🌟

In this lecture, we go through a program example to illustrate the concept of **Transfer of Computation** between two entities, termed as **Entity 1** and **Entity 2**. 

## Analogy 🍏

- **Entity 1** owns apples but doesn't have a juicer (computation logic). 
- **Entity 2** has the juicer (computation logic), but doesn't have the apples.
- Eventually, **Entity 2** has a juice party using the juice made from **Entity 1**'s apples. 
   
🔍 **Key Insight**: The owner of the computation (Entity 2) gets the result stored in its local storage. 

## Workflow 🔄

### Step 1: Register Computation 📌
- **Entity 2** registers its multiplication computation logic with **Entity 1**.
- This is done via a function pointer in **Entity 1** that stores the address of the `multiply` function from **Entity 2**.
- The function pointer matches the prototype of the computation function (accepts two integers, returns an integer).
- **Entity 1** now "borrows" the computation from **Entity 2**.

### Step 2: Generate Data 📊
- **Entity 1** initializes its variables `A` and `B`.
- These variables will act as inputs to the borrowed multiplication computation.

### Step 3: Perform Computation 🧮
- **Entity 1** uses the function pointer to invoke the `multiply` function from **Entity 2**.
- The function uses the variables `A` and `B` as inputs.

### Step 4: Store Result 🗄️
- The result of the multiplication is stored in **Entity 2**'s local storage.

## Key Points to Note 📝
  
- 🚫 **No Data Flow**: No data is copied or moved from one entity to another.
- 🛑 **Unidirectional Communication**: The result gets populated in **Entity 2**'s local storage.
- 🎯 **Execution**: Although **Entity 2** owns the `multiply` function, **Entity 1** executes it through a function pointer.

## Summary 📚

- The example perfectly maps the model of **Transfer of Computation** discussed earlier.
- Function pointers are a common method for implementing this transfer.

## Upcoming Assignment 📚✍️

- An exercise will be provided to implement the transfer of computation using function pointers between two threads of the same process.

---

These notes should provide a comprehensive understanding of how Transfer of Computation is implemented in code, useful for your interviews. Good luck! 🍀🌟
