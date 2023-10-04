
/*

Data --> Memory  --> Static Allocation/Compile Time Allocation 
              |----> Dynamic Allocation 


1. Compile Time Allocation : 

The memory is not actually allocated but the sizes, how much memory will be needed & the locations where the variables will be stored is 
fixed during the compile time 
and during runtime this mappiong between virtual memory and the physical memory where the actual allocation happens is defined just before 
the execution of the program.

    Aloocation and deallocation is done by the compiler 

Advantages : 
    - It's Slightly fast than dynamic allocation. (Fast)
Disadvantage :
    - Less Flexible    


2. Run Time / Dynamic Memory allocation 
    Allows you to define Memory size(Memory Requirements) during execution of the program.
    It uses Heap memory.(it is slightly bigger than the static memory)
    Reuse is possible 
    use two keywords 
        new  - Allocate the memory 
        delete - free the memory 



            new int; --> this will create bucket on the heap side of the memory 
            int x;   --> this will create bucket on the static side of the memory 


*/            