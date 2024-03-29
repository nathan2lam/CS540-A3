Memory Management Code Readme
Overview
This code demonstrates a simple memory management system that translates logical addresses to physical addresses using a basic page table implementation.

Files
homework3.cpp: Contains the main code for the memory management system.

Usage
Compile the code using a C++ compiler.
Execute the compiled executable.
The program will translate logical addresses to physical addresses and print the results.

Classes
MemoryManagement: Represents the memory management system.

Attributes
pageTable: Vector storing mappings of logical pages to physical frames.
Methods:
MemoryManagement(): Constructor to initialize the page table.
translateAddress(unsigned int logicalAddress): Translates a logical address to a physical address.