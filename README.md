# Token Separation Using Files

## 📌 Aim

To develop a C++ program that performs token separation from a given input using file handling. The program identifies and classifies tokens such as **separators**, **operators**, **constants**, and **identifiers** from the input file content.

---

## 🧠 Description

The main objective is to read input from a file, parse each line of text, and classify the tokens into one of the following categories:

- **Separators**: Symbols such as `,`, `;`, `<`, `>`
- **Operators**: Arithmetic and assignment symbols like `=`, `+`, `-`, `*`, `/`
- **Constants**: Numeric values (`0` through `9`)
- **Identifiers**: Any sequence of characters that does not belong to the above categories

The classification logic is implemented using vector-based lookups and simple parsing techniques.

---

## 🛠️ Technologies Used

- Programming Language: **C++**
- Concepts: **File Handling**, **Tokenization**, **Lexical Analysis**

---

## 📄 How It Works

1. The program reads input from a file named `file.txt`.
2. Each line is processed using the `check()` function.
3. Characters in the line are evaluated to determine whether they are:
   - **Separators**
   - **Operators**
   - **Constants**
   - **Identifiers**
4. Tokens are printed to the console with their corresponding classification.

---

## 📥 Input

Example content of `file.txt`:

```cpp
int a = b + 5;
```

---

## 📤 Expected Output

```cpp
Identifier  int
Identifier  a
operator    =
Identifier  b
operator    +
Constant    5
separator   ;
```


