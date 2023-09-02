# Detailed Notes on Publisher-Subscriber Model 📚🔔

## Introduction 🌟

This part of the lecture transitions from the concept of **Transfer of Computation** to an established architectural communication model known as the **Publisher-Subscriber Model**, also referred to as **Notification Chains**.

## Relationship with Transfer of Computation 🤝

- The **Publisher-Subscriber Model** is fundamentally built on the principle of **Transfer of Computation**.
- It is essentially a pattern of communication that is hinged on the transfer of computation.

## Terminology 📖

### Publisher 📰

- The thread that **generates the data**.
- Analogous to **Entity 1** in our previous example, which generated variables `A` and `B`.

### Subscriber 🛎️

- The thread that **owns the data processing function**.
- In our example, **Entity 2** was the Subscriber as it owned the multiplication computation logic.

### Callback Registration 📞

- The activity of **transferring the computation** from Subscriber to Publisher is termed as **Callback Registration**.
  
### Notification 📣

- The activity where the Publisher **invokes the function** through the function pointer is termed as **Notification**.
  
## Key Takeaway 🗝️

- The cornerstone of the Notification Chain Communication Model is the **Transfer of Computation**, or in simpler terms, **Function Pointers**.

## Summary 📚

The publisher-subscriber Model is a high-level architecture built on the concept of Transfer of Computation.
- The Publisher generates data, and the Subscriber processes it.
- The transfer of this computation logic is done through **Callback Registration**, and its usage through **Notification**.

---

These notes offer a detailed understanding of how the **Publisher-Subscriber Model** stems from the concept of **Transfer of Computation**. This knowledge will be particularly useful for your interviews. Good luck! 🍀🌟
