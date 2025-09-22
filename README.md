# ⚠️ Exception Handling in C++

## 🎯 Aim  
To study and implement **exception handling in C++**, using `try`, `catch`, and `throw` to manage runtime errors gracefully.

---

## 📚 Theory  

- **Exception**: An unexpected event or error that occurs during program execution (e.g., division by zero, invalid input, file not found).  
- **Exception Handling**: A mechanism in C++ to detect and manage runtime errors without abruptly terminating the program.  

### 🔑 Key Concepts  

- **try block** → Contains code that may throw an exception.  
- **throw statement** → Used to signal (raise) an exception.  
- **catch block** → Handles the exception thrown by `throw`.  

### ⚙️ Flow of Exception Handling  

1. Code inside the **try block** is executed.  
2. If an error occurs, the **throw statement** raises an exception.  
3. The program looks for a matching **catch block**.  
4. If found, the exception is handled; otherwise, the program terminates.  

---

## 📋 Algorithms  

### 🧾 Division by Zero  

1. **Start**  
2. Input two numbers: numerator and denominator.  
3. Place the division operation inside a `try` block.  
4. If denominator = 0 → `throw` an exception.  
5. If denominator ≠ 0 → perform division and display result.  
6. In the `catch` block:  
   - Display error message “Division by zero not allowed.”  
7. **End**

---

### 🧾 Age Validation  

1. **Start**  
2. Input `age` from the user.  
3. Place validation inside a `try` block.  
4. If `age < 0` → `throw age`.  
5. Else if `age < 18` → `throw age`.  
6. Else → display “Accepted”.  
7. In the `catch` block:  
   - If `age < 0` → display “Invalid age”.  
   - Else → display “You are below 18”.  
8. **End**

---

### 🧾 ATM Transaction System  

1. **Start**  
2. Initialize ATM with a default balance.  
3. Display menu:  
   - 1. Check Balance  
   - 2. Deposit Money  
   - 3. Withdraw Money  
   - 4. Exit  
4. Input user choice.  
5. Place operations inside a `try` block:  
   - **Case 1:** Display balance.  
   - **Case 2:** Input deposit amount.  
     - If amount ≤ 0 → `throw` exception.  
     - Else add to balance.  
   - **Case 3:** Input withdrawal amount.  
     - If amount ≤ 0 → `throw` exception.  
     - If amount > balance → `throw` exception.  
     - Else deduct from balance.  
   - **Case 4:** Exit program.  
   - **Default:** Display “Invalid choice”.  
6. In the `catch` block:  
   - Display the error message received.  
7. Repeat until user chooses Exit.  
8. **End**

---

## 🚀 Applications of Exception Handling  

- Prevents **abrupt program termination**.  
- Separates **error‑handling logic** from normal code.  
- Improves **program reliability and robustness**.  
- Used in:  
  - File I/O operations.  
  - Database connections.  
  - Network programming.  
  - Input validation.  
  - Banking/ATM systems.  

---

## 🧠 Conclusion  

- Exception handling in C++ provides a structured way to manage runtime errors.  
- The keywords **try, throw, and catch** are used to detect and handle exceptions.  
- It ensures that programs can **continue execution gracefully** even when unexpected errors occur.  
- Exception handling is essential for building **robust, user‑friendly applications**.
