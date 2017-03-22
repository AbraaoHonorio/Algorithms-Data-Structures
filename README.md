# Works of Design and Analysis of Algorithms:

### Sort Order 01
Implementation of sort algorithms:
  - 1. Selection sort
  - 2. Insertion sort
  - 3. Merge sort
  - 4. Quicksort
  - 5. Heap Sort
  
  

### Building for source Sort Order 01
  ```sh
  make all
   ```
  ```sh
   ./apa-first_job <method_number> < <input_file_name>
  ```
  
  
### Sort Order 02
  Given the implementations of work ordering 01 and the input sets provided for this exercise:

Select a colleague who has implemented sorting algorithms using a different programming language than yours.
For each input subset, run all algorithms and calculate the average time each algorithm spends for each size present in the subset.
  
  The Javascript code can be found in the following git repository: [clique aqui](https://github.com/bezerrathm/Design-And-Analysis-Of-Computer-Algorithms/)


The code in C ++ can be found in the following git repository: [clique aqui](https://github.com/AbraaoHonorio/Design-and-Analysis-of-Algorithms/tree/master/Sorting%2001)
  
  
  
### Building for source Sort Order 02
  ```sh
  make all
   ```
  ```sh
   scriptBuildAll.sh
  ```
  
### Sort Order 03
Implementation of sort algorithms:
  - 6. Counting sort 
  - 7. Bucket sort
  - 8. Radix sort
 
  

### Building for source Sort Order  03
  ```sh
  make all
   ```
  ```sh
   ./apa-first_job <method_number> < <input_file_name>
  ```


### Selector heuristic

Verify that the input contains non-numeric characters
  - If yes apply Radix Sort
Make sure the input size is larger than the free main memory
  - If yes, apply Merge Sort
Make sure the input size is less than 22
  - If yes apply Insertion Sort
For any other case
  - Apply Quick Sort

### Building for source Selector heuristic


  ```sh
  make all
   ```
  ```sh
   ./apa-first_job < <input_file_name>
  ```
  
  
### A Dynamic Programming based solution for 0-1 Knapsack problem

### Arquivo de entrada:
    n M
    pi
    vi

    subtitle:
    n: |O|
    M : Backpack capacity
    pi : Vector of object weights
    vi : Vector of object values
    . E.g.:

    4 30
    13 23 17 19
    23 29 27 25

### Building for source knapsack problem
 
 ```sh
  make all
   ```
  ```sh
   ./apa-mochila < mochila01.txt 
  ```
 ### Credits knapsack problem
 Developers: 
   - Abraão Állysson dos Santos Honório 
   - Thiago Henrique Menêses Bezerra [GitHub](https://github.com/bezerrathm)


  
### Have a question or suggestion?			

Contact me on [Linkedin](https://br.linkedin.com/in/abraaohonorio), send an email to abraao.allyson@eng.ci.ufpb.br, or create a pull request in this project. 

---
  
  License
----
MIT
