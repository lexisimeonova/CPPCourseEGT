/*
 1. Syntax Explanations:
 Describe what the following line of C++ code does: int* ptr = &var;
 - Declares a pointer (ptr) to an integer and points it to the address of var.

 2. Concept Clarification:
 Explain the difference between a while loop and a do-while loop in C++
 - A while loop checks the condition and only then executes the statements in it, whereas do-while loop executes the statements and then checks the conditions.

 3. Code Analysis:
 Given the snippet of C++ code containing a for loop, explaining what the loop does, including how many times it iterates and why.
 - ex:
 int i, num = 5;
 for (i=1; i<=num; i++){
       std::cout << i << “ ”;
 }
 First I declare integers i and num, where num is equal to 5. Then I make a for loop, initialising “i” with 1, that continues to execute as long as the condition “i<=num” is true, meanwhile updating every time it is executed. For example the snippet of C++ code I’ve provided above shows that the loop iterates as long as “i” equals to 5. The desired output is “1 2 3 4 5”. It starts from one because I have initialised “i” with 1, it adds one to the next number because after the end of every cycle it updates the next one and the last line of the code prints every number it goes through.

 4. Function Usage:
 Write about how functions prevent code duplication and give an example of a simple C++ function that calculates the square of a number.
 - Using functions prevents code duplications, because a function is declared only once and can be used many times, which not only helps with writing cleaner code but is also time efficient.
 - ex:
 #include <iostream>
 int sqr(int num){
     int square = num*num;
     return square;
 }

 int main() {
     int n;
     std::cout << "Write a number: ";
     std::cin >> n;
     std::cout << sqr(n);
     return 0;
 }

 5. Memory Management:
 Discuss the importance of memory management in C++ and explain the difference between stack and heap memory allocation.
 -  Memory management ensures that there are no memory wastages and makes sure allocation takes place efficiently. The memory is divided into two parts - stack and heap. Stack stores all variables that are declared inside a function and other information related to it. Whereas heap stores data that is unknown until the program runs.

 6. Object-Orienting Programming:
 Explain the concept of encapsulation in C++ and how it is achieved using classes.
 -  Encapsulation hides the internal implementation details of a class from external code.

 7. Error Handling:
 Describe how exceptions are used in C++ for error handling, with an example of a try-catch block
 - The try statement helps you test a group of code for errors while it runs. If a problem is found, the throw keyword lets you create a custom error. The catch statement lets you specify a group of code to run if there's an error in the try block.

 8. STL Containers:
 Write about the purpose and use of std::vector container in C++
 - Vectors are array-like, used for data storage. The difference between arrays and vectors is that arrays store well-ordered data and are static in nature. Vectors can automatically adjust their size when an elements is added or removed from it. When using a vector it is a must to include its library and only then declare it.

 9. Pointers and References:
 Discuss the difference between pointers and references in C++ and provide scenarios where one might be preferred over the other
 -  Aside from the many similarities they share, pointers and reference have several difference one of them being that a pointer can be re-assigned, whereas a reference cannot, it has to be assigned at initialisation. A pointer variable also has its own memory address when a reference one shares the same memory address with the original variable after all the reference variable is an alias. Depending on the desired outcomes one variable is preferred over the other.

 10.Advanced Features:
 Explain the concept of templates in C++ and how they support generic programming. Include a simple example of a template function
 - The purpose of using templates is to pass the data type as parameter so there is no need to write the same code for different data types. For example a clothing store needs to sort() different things. Instead of writing countless lines of code, the datatype could be passed as a parameter using sort().
 */
