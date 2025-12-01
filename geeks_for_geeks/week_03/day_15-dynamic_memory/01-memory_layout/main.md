# Memory Layout of C programs

![Memory Layout](Memory-Layout-of-C-Program.webp)

The memory layout of a program shows how its data is stored in memory during execution. It helps developers understand and manage memory efficiently.

- Memory is divided into sections such as code, data, heap, and stack.
- Knowing the memory layout is useful for optimizing performance, debugging and prevent errors like segmentation fault and memory leak.

1. Text Segment

- The text segment (or code segment) stores the executable code of the program like program’s functions and instructions.
- The segment is usually read-only to prevent accidental modification during execution.
- It is typically stored in the lower part of memory.
- The size of the text segment depends on the number of instructions and the program’s complexity.

2. Data Segment

- The data segment stores global and static variables of the program.
- Variables in this segment retain their values throughout program execution.
- The size of the data segment depends on the number and type of global/static variables.
- It is divided into initialized and uninitialized (BSS) sections.

A. Initialized Data Segment

As the name suggests, it is the part of the data segment that contains global and static variables that have been initialized by the programmer.

B. Uninitialized Data Segment (BSS)

- The uninitialized data segment is often called the BSS segment.
- It stores global and static variables that are not initialized by the programmer.
- These variables are automatically initialized to zero by the system at runtime.

1. Heap Segment

- The heap segment is used for dynamic memory allocation.
- It starts at the end of the BSS segment and grows towards higher memory addresses.
- Memory in the heap is managed using functions like malloc(), realloc(), and free().
- The heap is shared by all shared libraries and dynamically loaded modules in a process.

4. Stack Segment

- The stack stores local variables, function parameters, and return addresses for each function call.
- Each function call creates a stack frame in this segment.
- The stack is usually at higher memory addresses and grows opposite to the heap.
- When the stack and heap meet, the program’s free memory is exhausted.
