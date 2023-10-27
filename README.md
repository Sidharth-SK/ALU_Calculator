# ALU_Calculator
Prototyping an Arduino Due to perform basic ALU operations


This Arduino code implements a simple calculator using a 4x4 keypad and a 16x2 LCD display. The calculator performs basic arithmetic and logical operations based on the user input from the keypad. Here's a brief explanation of how the code works:

1. **Libraries:** The code includes necessary libraries for handling the keypad and LCD display.
2. **Keymap:** Defines the layout of the keypad, mapping the keys to characters in a 4x4 matrix.
3. **Keypad and LCD Setup:** Initializes the keypad and LCD display. It also sets up two additional buttons (button1 and button2) for switching between arithmetic and logical operations.
4. **DetectButtons Function:** Reads input from the keypad and interprets the button presses. Numbers 0-9 are accumulated to form the input, 'A', 'B', 'C', and 'D' buttons are used for arithmetic operations ('A' for addition, 'B' for subtraction, 'C' for multiplication, and 'D' for division), and '*' and '#' buttons are used for clearing and calculating, respectively.
5. **Arithmetic and Logical Functions:** Separate functions (`arithmetic()` and `logical()`) handle the selection of the operation based on the button press.
6. **CalculateResult Function:** Performs the selected arithmetic or logical operation based on the user input and stores the result in the 'Number' variable.
7. **DisplayResult Function:** Displays the user input, the selected operation, and the result on the LCD screen.
8. **ButtonPush Function:** Checks the state of two physical buttons to determine whether to perform arithmetic or logical operations.
