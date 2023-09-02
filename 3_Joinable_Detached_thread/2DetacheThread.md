# Continued: Detailed Notes on Joinable and Detached Threads for Interview Revision 📘🔍

## What are Detached Threads? 🤔
### Properties and Differences 🔄
- Detached threads are the **opposite of joinable threads**.
- In a multi-threaded program, a parent thread can create a child thread in **detached mode**.

### The Fork Point 🍴
- Similar to joinable threads, a point **F (Fork Point)** is where the parent thread decides to spawn a new detached thread.
- The **parent thread continues its execution**, just like the child thread does.

### Resource Release 🗑️
- Unlike joinable threads, **resources of a detached thread are immediately released** by the system's process manager upon its termination.
  
### No Need for Joining 👐
- There's **no necessity for a `pthread_join` call** from the parent thread.
- Therefore, the parent thread **doesn't need to block at any point** waiting for the detached thread to finish.

#### ❗️ Important Note on Resource Release
- In the case of joinable threads, resources are not released until the child joins the parent. In detached threads, **resources are released instantly upon termination**.

### Dynamic Nature 🔄
- Detached threads can be **converted into joinable threads while running**, and vice versa.

### Result Return 🚫
- Detached threads **do not return any results to the parent thread**.
  
#### Why No Results?
- They can't return results as they **don't join the parent thread**. They complete their work and terminate silently.

---

## Quick Comparison: Joinable vs Detached Threads 🆚
| Features                  | Joinable Threads         | Detached Threads      |
|---------------------------|--------------------------|-----------------------|
| Parent thread blocking    | Yes (`pthread_join`)     | No                    |
| Resource release          | After joining parent     | Immediately           |
| Dynamic Nature            | Convertible              | Convertible           |
| Result Return             | Yes                      | No                    |

---

👉 **This Concludes our Deep Dive into Joinable and Detached Threads! Good Luck with Your Interviews!** 🌟🎉
