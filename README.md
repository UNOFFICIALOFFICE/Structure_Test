# 🧠 Structure Padding Exploration in C

## 🚀 Objective
Test your understanding of **structure padding** by running the code and analyzing the output on both **64-bit** and **32-bit** architectures.

---

## ▶️ How to Run the Code

1. Click on the **Codespaces**.
2. Open the **terminal**.

---

## 🖥️ Compile & Run (64-bit)

By default, your system compiles in **64-bit mode**:

```bash
gcc struct_test.c -o struct_test
./struct_test

👉 This will print the sizes of different structures on a 64-bit system.

## ⚙️ Compile & Run (32-bit)

To test in 32-bit mode, run:

```bash
gcc -m32 struct_test.c -o struct_test_32
./struct_test_32

## ❌ Possible Error

You might encounter this error:

```bash
fatal error: bits/libc-header-start.h: No such file or directory

## 🛠️ Fix (Install Required Packages)

If you see the above error, install the required 32-bit libraries:

```bash
sudo apt update
sudo apt install gcc-multilib

After installation, try compiling again with `-m32`.

## 🔍 What to Observe

Compare structure sizes between:

- 64-bit execution  
- 32-bit execution  

Look for:

- Padding differences  
- Alignment changes  
- Effect of variable ordering  

## 💡 Learning Goal

Try to reason why the sizes differ:

- How alignment works  
- Why padding is inserted  
- How architecture (32-bit vs 64-bit) affects memory layout  

## 🔥 Challenge

Can you reorder structure members to minimize padding?