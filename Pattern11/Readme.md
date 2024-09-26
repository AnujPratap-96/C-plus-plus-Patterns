Here’s the updated `README.md` file for **Pattern 11**:

---

### Pattern11/README.md

```md
# Pattern 11: Number Pyramid with Inverted Numbers

## Pattern:
```
1        1
12      21
123    321
1234  4321
12345 54321
```

## Code Explanation:
This program generates a number pyramid pattern where the numbers on the left side increase from `1` to `i` for each row, and the numbers on the right side decrease from `i` back to `1`. The number of spaces between the two sets of numbers decreases as you move down each row.

### Code Breakdown:

1. **Input:**
   - The variable `N` is set to `5`, which determines the number of rows in the pattern. This can be adjusted to create patterns of different sizes.

2. **Outer Loop:**
   - An outer loop runs from `1` to `N`, where each iteration represents a new row.

3. **Left Side Numbers:**
   - For each row, a nested loop prints numbers starting from `1` up to the current row number (`i`).

4. **Spaces:**
   - Another nested loop prints spaces. The number of spaces starts at `2 * (N - 1)` and decreases by `2` for each subsequent row.

5. **Right Side Numbers:**
   - A final nested loop prints numbers starting from the current row number (`i`) down to `1`.

6. **New Line:**
   - After printing the left numbers, spaces, and right numbers for each row, a new line is printed to move to the next row.

### Example:

When the variable `N` is set to `5`, the program will output the following pattern:

```
1        1
12      21
123    321
1234  4321
12345 54321
```

### Visual Diagram:

Here is a visual representation of the pattern for `N = 5`:

```
Row 1:  1        1
Row 2:  12      21
Row 3:  123    321
Row 4:  1234  4321
Row 5:  12345 54321
```

### How to Run:

1. Compile the code using a C++ compiler:
   ```bash
   g++ Pattern11.cpp -o Pattern11
   ```

2. Run the program:
   ```bash
   ./Pattern11
   ```

3. The output will display the number pyramid pattern.

For example, when you run the program, it will display:

```
1        1
12      21
123    321
1234  4321
12345 54321
```

---

This `README.md` file now reflects **Pattern 11**. If you need any further modifications or additional patterns, let me know!