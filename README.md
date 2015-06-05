# Brainfuck++ language
A simple interpreter


Language elements:

1. Memory of language is the fixated tape. In tape we have 30k elements, which are numbered from 0. Each element may store the number (the size doesn't exceed 255) and at the beginning every element stores zero. 

2. Pointer. Pointer can perform certain actions with a cell that described below. At the beginning pointer points to the null cell.

3. Variable. The variable can store a single value that does not exceed 30k. At the beginning the variable is zero.

 
List of actions that can be performed with the pointer:

1. `>` ("more") Move one cell to the right. If the current cell is numbered 29999, the pointer will be on the null cell.

2. `<` ("less") Move one cell to the left. If current cell is the null cell, the pointer will be on the cell numbered 29999.

3. `|` ("vertical bar") Move pointer to the null cell.


List of actions that can make a pointer to the current cell:

1. `,` (comma) Read the value from the keyboard and write to the current cell.

2. `.` (dot) Display the value of the current cell.

3. `=` (equal) Assign the current value of the previous cell.

4. `0` (zero) Assign the current value is 0.

5. `!` (exclamation mark) Copy the value of the current cell to the variable.

6. `?` (question mark) Copy the value of the variable to the current cell.

7. `*` (star) Multiply the value of the current cell with the value of the previous and record mod 256 to the current cell.

8. `/` (split) Integer division of the current cell on the previous. 

9. `+` (plus) Increase the value of the current cell to 1. If the cell stored 255, the new value will be zero.

10. `-` (minus) Reduce the value of the current cell to 1. If the cell stored zero, the new value will be zero, too.


Other functions:

1. While loop. Actions concluded between `[` and `]` (bracketed) must be executed until the value of the cell under the pointer is not zero.

2. If. Actions enclosed between `(` and `)` (parenthesis) must be carried out only if the value in the current cell are not zero.

3. `^` (degree) Print variable value.

4. `$` (dollar) Assign a variable number of the cell to which the pointer points. 
 
----------------------------------------------------

Элементы языка:

1. Память языка – это зацикленная лента. В ленте 30000 элементов, которые нумеруются с 0. Каждый элемент может хранить число, размер которого не превышает 255 и равен нулю в начале программы.

2. Указатель. Указатель может выполнять определенные действия с ячейкой, которые 
описаны ниже. В начале программы указатель указывает на нулевую ячейку.

3. Переменная. Переменная может хранить одно значение, которое не превышает 30000. В начале программы значение переменной – 0. 
 
Список действий, которые можно выполнить с указателем:

1. `>` (больше) Подвинуть на одну ячейку вправо. Если текущая ячейка имеет номер 29999, и будет совершено это действие, то указатель окажется на ячейке с номером 0.

2. `<` (меньше) Подвинуть на одну ячейку влево. Если текущая ячейка имеет номер 0, и будет совершено это действие, то указатель окажется на ячейке с номером 29999.

3. `|` (вертикальная черта) Переместить в начало ленты (на нулевой элемент). 


Список действий, которые указатель может производить с текущей ячейкой:

1. `,` (запятая) Считать значение с клавиатуры и записать в текущую ячейку. 

2. `.` (точка) Вывести на экран значение текущей ячейки. 

3. `=` (равно) Присвоить текущей ячейке значение предыдущей.

4. `0` (ноль) Присвоить текущей ячейке значение 0.

5. `!` (восклицательный знак) Скопировать значение текущей ячейки в переменную.

6. `?` (вопросительный знак) Скопировать значение переменной в текущую ячейку. 

7. `*` (звёздочка) Умножить значение текущей ячейки на значение предыдущей и записать результат по модулю 256 в текущую ячейку. 

8. `/` (косая черта) Записать в текущую ячейку результат целочисленного деления текущей ячейки на предыдущую.

9. `+` (плюс) Увеличить значение текущей ячейки на 1.. Если значение ячейки было 255, то новое должно быть ноль.

10. `-` (минус) Уменьшить значение текущей ячейки на 1. Если значение ячейки было 0, то новое будет 0.


Другие функции:

1. Цикл while. Действия, заключенные между символами  `[` и `]` (квадратные скобки) должны выполнятся, пока значение ячейки под указателем не будет нулем.

2. If. Действия, заключенные между символом `(` и `)` (круглые скобки) должны выполняться только если значение в текущей ячейки – не ноль.

3. `^` (степень) Вывод значения переменной. Печатает на экран значение переменной.

4. `$` (доллар) Присвоить переменной номер ячейки, на которую указывает указатель.
