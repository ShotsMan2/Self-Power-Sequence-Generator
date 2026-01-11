# Self-Power Sequence Generator

This project implements a mathematical algorithm in C to generate the **Self-Power Series**. Unlike standard exponentiation ($a^b$), this algorithm computes terms where the base and the exponent are identical ($x^x$).

## 🧮 Mathematical Definition

The algorithm generates a sequence $S$ for a user-provided integer $n$:

$$S = \{ x^x \mid x \in \mathbb{Z}, 1 \le x \le n \}$$

### Sequence Logic:
* **x = 1:** $1^1 = 1$
* **x = 2:** $2^2 = 2 \times 2 = 4$
* **x = 3:** $3^3 = 3 \times 3 \times 3 = 27$
* **x = 4:** $4^4 = 256$
* **...**

## ⚙️ Technical Implementation

* **Complexity:** The algorithm uses a **Nested Loop** structure.
    * Outer loop iterates from 1 to $n$.
    * Inner loop performs recursive multiplication to simulate the power function without using `<math.h>`.
* **Overflow Note:** Since the function $f(x) = x^x$ grows strictly super-exponentially, standard 32-bit integers will overflow for inputs $n > 9$.

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o self_power
    ```
2.  Run the executable:
    ```bash
    ./self_power
    ```
3.  Enter a small integer (e.g., 5 or 6) to view the sequence.

---
*This repository demonstrates custom exponentiation logic and nested control structures in C.*
