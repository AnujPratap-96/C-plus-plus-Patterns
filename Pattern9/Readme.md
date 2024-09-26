Here’s the `README.md` file for **Pattern 9**, which creates an hourglass shape of asterisks. This pattern has a pyramid on top and an inverted pyramid below it.

---

### Pattern9/README.md

```md
# Pattern 9: Hourglass Shape of Asterisks

## Pattern:
```
           *
           * *
           * * *
           * * * *
           * * * * *
           * * * *
           * * *
           * *
           *
```

## Code Explanation:
This program prints an hourglass shape made of asterisks (`*`). The hourglass consists of two triangles: the upper triangle (a right-aligned pyramid) and the lower inverted triangle.

### Code Breakdown:

1. **Input:**
   - The user is prompted to input the number of rows (`n`). This number defines the height of the hourglass.

2. **Upper Triangle:**
   - The upper part of the hourglass is created using a loop that runs from `i = 0` to `i < n`. Each row has:
     - **Spaces:** Printed using an inner loop that runs from `j = 0` to `j < n - i - 1` to align the triangle to the center.
     - **Asterisks:** Printed using another inner loop that runs from `j = 0` to `j <= i`, increasing the number of asterisks for each subsequent row.

3. **Lower Triangle:**
   - The lower part of the hourglass is created using another loop that runs from `i = 1` to `i < n`. Each row has:
     - **Spaces:** Printed using an inner loop that runs from `j = 0` to `j < i`, increasing the number of spaces for each row.
     - **Asterisks:** Printed using another inner loop that runs from `j = 0` to `j < n - i`, decreasing the number of asterisks as `i` increases.

4. **End of Row:**
   - After each iteration of the inner loops for both triangles, a new line (`cout << endl;`) is printed to move to the next row.

### Example:

If the user enters `5`, the program will print the following pattern:

```
           *
           * *
           * * *
           * * * *
           * * * * *
           * * * *
           * * *
           * *
           *
```

### Explanation with Rows:

- **Upper Triangle:**
  - **Row 1:** `i = 0`, prints 4 spaces followed by 1 asterisk.
  - **Row 2:** `i = 1`, prints 3 spaces followed by 2 asterisks.
  - **Row 3:** `i = 2`, prints 2 spaces followed by 3 asterisks.
  - **Row 4:** `i = 3`, prints 1 space followed by 4 asterisks.
  - **Row 5:** `i = 4`, prints 0 spaces followed by 5 asterisks.

- **Lower Triangle:**
  - **Row 6:** `i = 1`, prints 1 space followed by 4 asterisks.
  - **Row 7:** `i = 2`, prints 2 spaces followed by 3 asterisks.
  - **Row 8:** `i = 3`, prints 3 spaces followed by 2 asterisks.
  - **Row 9:** `i = 4`, prints 4 spaces followed by 1 asterisk.

Thus, the asterisks form an hourglass shape with a symmetrical upper and lower triangle.

### Visual Diagram:

Here is a visual representation of how the pattern is constructed for `n = 5`:

```
Row 1:          *
Row 2:         * *
Row 3:        * * *
Row 4:       * * * *
Row 5:      * * * * *
Row 6:       * * * *
Row 7:        * * *
Row 8:         * *
Row 9:          *
```

This creates an hourglass shape where the top half is a pyramid and the bottom half is an inverted pyramid.

### How to Run:

1. Compile the code using a C++ compiler:
   ```bash
   g++ pattern9.cpp -o pattern9
   ```

2. Run the program:
   ```bash
   ./pattern9
   ```

3. Enter the desired number of rows when prompted.

For example, if you enter `5` as the number of rows, the output will be:

```
Enter the number of rows: 5
           *
           * *
           * * *
           * * * *
           * * * * *
           * * * *
           * * *
           * *
           *
```

---

This `README.md` file provides a comprehensive explanation of the hourglass pattern formed by asterisks, including a detailed breakdown of the code and a visual representation of the output pattern.