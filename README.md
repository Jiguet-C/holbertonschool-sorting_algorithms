# <p align="center">C - Sorting_algorithms & Big_O</p>
<p align="center">
<img loading="lazy" width="505px" src="https://i.imgur.com/W3wtc8D.jpeg" alt="image_name png"/>
</p>


## ➤ Sorting algorithms

Sorting algorithms are methods in computer science for rearranging a sequence of elements in a certain order, often numerical or lexicographical, and either in ascending or descending order.
Sorting algorithms are fundamental to maximizing the efficiency of other algorithms that require sorted data, such as search and merge algorithms.

Here are some examples of popular sorting algorithms:
- Bubble sort: compare and swap adjacent items if necessary.
- Sort by selection: selects the smallest element and exchanges it with the first unsorted element.
- Insertion sort: inserts each element in its appropriate place in the already sorted part.
- Quick sort: Splits the list in half with smaller elements on one side and larger elements on the other, then recursively sorts the two sublists.
- Merge sort: splits the list in half, sorts each half, then merges the sorted halves

<p align="center">
<img loading="lazy" width="400px" src="https://i.pinimg.com/originals/1b/9f/88/1b9f880263b77d79e6a4b4c40231951a.png" alt="image_name png"/>
</p>

## ➤ Big O notation

**Big O** notation is a mathematical language used to describe the temporal complexity (execution time) or space complexity (memory usage) of an algorithm.
It expresses the best, worst and average case execution time of an algorithm.

*For example :*

```
- O(1): Constant time, independent of the size of the input.
- O(n): Linear time, where the execution time increases linearly with the size of the input.
- O(n log n): Linear logarithmic time, often found in efficient sorting algorithms like quicksort and merge sort.
- O(n^2): Quadratic time, often seen in less efficient sorting algorithms like bubble sort.
```
Big O notation is essential for understanding and comparing the efficiency of algorithms, especially when the size of the processed data is large.

# <p align="center">Examples</p>

**Sorting Algorithm Examples :**

*Bubble Sort - O(n2)*

Description: Repeatedly compares adjacent elements and swaps them if they are in the wrong order.
*Ex:*
```
Liste initiale : [5, 3, 8, 4, 2]
Après 1ère passe : [3, 5, 4, 2, 8]
Après 2ème passe : [3, 4, 2, 5, 8]
Liste triée : [2, 3, 4, 5, 8]
```
*Quick Sort - O(nlogn)*

*Description:* Selects a 'pivot', then partitions the set into two sublists, one with elements lower than the pivot and the other with elements higher, and sorts these sublists recursively. *Ex:*

```
Liste initiale : [5, 3, 8, 4, 2]
Pivot choisi : 4
Partition : [3, 2] + [4] + [5, 8]
Tri récursif et fusion : [2, 3, 4, 5, 8]
```
*Merge Sort - O(nlogn)*

*Description:* Splits the list into two halves, sorts each half, then merges the two sorted halves.*Ex.*

```
Liste initiale : [5, 3, 8, 4, 2]
Division : [5, 3] et [8, 4, 2]
Tri des moitiés : [3, 5] et [2, 4, 8]
Fusion : [2, 3, 4, 5, 8]
```
**Big O Notation**

*O(1) - Constant time*

```
*Description:* Execution time does not depend on the size of the input.
*Ex.* Access an element in an array by its index.
```

*O(n) – Linear time*

```
*Description:* Execution time increases linearly with input size.
*Ex.* Cycle through all elements of an array.

```

*O(n2) - Quadratic time*

```
*Description:* Execution time increases quadratically with input size.
*Ex* Check each pair of elements in an array (*like in bubble sort*).
```

These examples should give you an idea of how sorting algorithms work and how Big O notation is used to express their effectiveness

# <p align="center">Installation Instructions</p>

```
- A C compiler: All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
## Installation Instructions

To compile and run this doubly linked list project in C, follow the steps below:

1. **Install a C compiler**:
    Make sure you have a C compiler installed on your system. GCC is a popular choice for Unix-like systems, while Visual Studio is commonly used on Windows.

2. **Download the source code**:
    Clone or download the project source code from the GitHub repository or any other code sharing platform.

3. **Compile the project**:
Open a terminal or command prompt and navigate to the directory containing the source code. Compile the code using the following command:
```bash
gcc -o source_program_name.c

```

- you are given [print_array] and [print_list] fonction :

```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```
```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```

- Please use the following data structure for doubly linked list:
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
Please, note this format is used for Quiz and Task questions:

```
O(1)
O(n)
O(n!)
n square -> O(n^2)
log(n) -> O(log(n))
n * log(n) -> O(nlog(n))
n + k -> O(n+k)
…
```
Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random.org](https://www.random.org/integer-sets/)

# <p align="center">Compilation commands for each task</p>

```
0. gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
```

```
1. gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
```

```
2. gcc -Wall -Wextra -Werror -pedantic 2-main.c 2-selection_sort.c print_array.c -o select
```
```
3. gcc -Wall -Wextra -Werror -pedantic 3-main.c 3-quick_sort.c print_array.c -o quick
```

# <p align="center">Prototypes</p>
```
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
```
# <p align="center">Tutorials</p>

- [BSorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
- [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
- [15 sorting algorithms in 6 minutes ](https://www.youtube.com/watch?v=kPRA0W1kECg&ab_channel=TimoBingmann) ***(Warning***
*The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)*

## ➤ License
Distributed under the MIT License. See [LICENSE](https://www.holbertonschool.fr/) for more information.

## 🙇 Author
#### Stephanie Carvalho
- Linkedin: [@stefani-web](https://www.linkedin.com/in/stefani-web/)
- Github: [@stefani-web](https://github.com/Stefani-web)
