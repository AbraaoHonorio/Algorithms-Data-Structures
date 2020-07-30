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

### Input file:
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






### Minimum spanning tree

The greedy solution of PRIM to the Problem of the Minimum Scattering Tree

### Input file:
    n 
    𝑤𝑖𝑗

    subtitle:
    n: |V|
    𝑤𝑖𝑗 : Edge weights function (Adjacency Matrix)
    . E.g.:

    4
    0 23 17 19
    14 0 22 20
    23 15 0 25
    13 19 21 0

### Building for source Minimum spanning tree
 
 ```sh
  make all
   ```
  ```sh
   ./apa-PRIM < dij10.txt 
  ```
  
  
### Dijkstra

 Dijkstra's greedy solution to the Minimum Path problem. Consider for all instances the origin vertex 𝑢 = 0 and 𝑣 = 𝑛-1

### Input file:
    n 
    𝑤𝑖𝑗

    subtitle:
    n: |V|
    𝑤𝑖𝑗 : Edge weights function 
    . E.g.:

    4
    0 23 17 19
    14 0 22 20
    23 15 0 25
    13 19 21 0

### Building for source Dijkstra
 
 ```sh
  make all
   ```
  ```sh
   ./apa-Dijkstra < dij10.txt 
  ```
  
  
  
  
 ### Credits Minimum spanning tree problem and Dijkstra
 Developers: 
   - Abraão Állysson dos Santos Honório 
   - Thiago Henrique Menêses Bezerra [GitHub](https://github.com/bezerrathm)


  
### Have a question or suggestion?			
PS: This repository is intended for the works of the discipline of analysis and algorithm projects of the Federal University of Paraiba  - UFPB

Contact me on [Linkedin](https://br.linkedin.com/in/abraaohonorio), send an email to abraaohonoriopb@gmail.com, or create a pull request in this project. 

---
  
  
  License
----
MIT
