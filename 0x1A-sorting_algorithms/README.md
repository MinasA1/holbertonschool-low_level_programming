# <img src="https://www.holbertonschool.com/assets/holberton-logo-simplified-71b02868461c07d54553e4a7cc05d1926681a6755cc19030b0458f2d70ae9909.png" width="30"> 0x1A: Sorting algorithms & Big O

**Authors: [Thomas Wang](https://www.linkedin.com/in/thomaspwang/) and [Minas Anton](https://www.linkedin.com/in/minas-anton-82261b110/)**

<img src ="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/248/willy-wonka.png" width="500">

## Sorting algorithms & Big O

## About
This project is meant to be done by groups of two students. Each group of two should pair program for at least the mandatory part.

## Table of Contents

* [Resources](#resources)
* [What students should learn from this project](#what-students-should-learn-from-this-project)
* [Requirements](#requirements)
* [Compilation](#compilation)
* [Tests](#tests)
* [Project Breakdown](#project-breakdown)

## Resources

<p>Read <a href="https://en.wikipedia.org/wiki/Sorting_algorithm">Sorting algorithm</a>, <a href="http://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation">Big O notation</a>.</p>

<p>Watch <a href="https://www.youtube.com/watch?v=kPRA0W1kECg">15 sorting algorithms in 6 minutes</a>, <a href="https://www.toptal.com/developers/sorting-algorithms">Sorting algorithms animations</a></p>

## What students should learn from this project

<p>At the end of this project you are expected to be able to explain to anyone, without the help of Google:</p>

<ul>
<li>At least four different sorting algorithms</li>
<li>What is the Big O notation, and how to evaluate the time complexity of an algorithm</li>
<li>How to select the best sorting algorithm for a given input</li>
<li>What is a stable sorting algorithm</li>
</ul>

## Requirements

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 14.04 LTS</li>
<li>Your programs and functions will be compiled with <code>gcc 4.8.4</code> using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> and <code>-pedantic</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like <em>printf, puts, ...</em> is totally forbidden.</li>
<li>In the following examples, the <code>main.c</code> files are showed as examples. You can use them to test your functions, but you don&#39;t have to push them to your repo (if you do we won&#39;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one showed in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>sort.h</code></li>
<li>Don&#39;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>A list/array does not need to be sorted if its size is less than 2.</li>
<li>For this project you are given the following <code>print_array</code>, and <code>print_list</code> functions:</li>
</ul>

<pre><code>#include &lt;stdlib.h&gt;
#include &lt;stdio.h&gt;

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
    while (array &amp;&amp; i &lt; size)
    {
        if (i &gt; 0)
            printf(&quot;, &quot;);
        printf(&quot;%d&quot;, array[i]);
        ++i;
    }
    printf(&quot;\n&quot;);
}
</code></pre>

<pre><code>#include &lt;stdio.h&gt;
#include &quot;sort.h&quot;

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
        if (i &gt; 0)
            printf(&quot;, &quot;);
        printf(&quot;%d&quot;, list-&gt;n);
        ++i;
        list = list-&gt;next;
    }
    printf(&quot;\n&quot;);
}
</code></pre>

<ul>
<li>Our files <code>print_array.c</code> and <code>print_list.c</code> (containing the <code>print_array</code> and <code>print_list</code> functions) will be compiled with your functions during the correction.</li>
<li>Please declare the prototype of the functions <code>print_array</code> and <code>print_list</code> in your <code>sort.h</code> header file</li>
<li>Please use the following data structure for doubly linked list:</li>
</ul>

<pre><code>/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
</code></pre>

<p>For almost all sorting algorithms you will have to work on, you will be asked to write a file containing the big O notation of the time complexity of the algorithm. Please use this format:</p>

<ul>
<li><code>O(1)</code></li>
<li><code>O(n)</code></li>
<li><code>O(n!)</code></li>
<li>n square -&gt; <code>O(n^2)</code></li>
<li>log(n) -&gt; <code>O(log(n))</code></li>
<li>n * log(n) -&gt; <code>O(nlog(n))</code></li>
<li>...</li>
</ul>

<p>Please use the &quot;short&quot; notation (don&#39;t use constants). Example: <code>O(nk)</code> or <code>O(wn)</code> should be written <code>O(n)</code>.
All your answers files must have an empty line at the end.</p>

## Tests

<p>Here is a quick tip to help you test your sorting algorithms with big sets of random integers: <a href="https://www.random.org/integer-sets/">Random.org</a></p>

## Project Breakdown

### 0. Bubble sort
<p>Write a function that sorts an array of integers in ascending order using the <a href="https://en.wikipedia.org/wiki/Bubble_sort">Bubble sort</a> algorithm</p>

<ul>
<li>Prototype: <code>void bubble_sort(int *array, size_t size);</code></li>
<li>You&#39;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>

<p>Write in the file <code>0-O</code>, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>

<pre><code>alex@/tmp/sort$ cat 0-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf(&quot;\n&quot;);
    bubble_sort(array, n);
    printf(&quot;\n&quot;);
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
alex@/tmp/sort$ ./bubble
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 13, 71, 52, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 73, 96, 86, 7, 99
19, 48, 13, 52, 71, 73, 86, 96, 7, 99
19, 48, 13, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$ 
</code></pre>

### 1. Insertion sort
<p>Write a function that sorts a doubly linked list of integers in ascending order using the <a href="https://en.wikipedia.org/wiki/Insertion_sort">Insertion sort</a> algorithm</p>

<ul>
<li>Prototype: <code>void insertion_sort_list(listint_t **list);</code></li>
<li>You are not allowed to modify the integer <code>n</code> of a node. You have to swap the nodes themselves.</li>
<li>You&#39;re expected to print the <code>list</code> after each time you swap two elements (See example below)</li>
</ul>

<p>Write in the file <code>1-O</code>, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>

<pre><code>alex@/tmp/sort$ cat 1-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&amp;node-&gt;n;
        *tmp = array[size];
        node-&gt;next = list;
        node-&gt;prev = NULL;
        list = node;
        if (list-&gt;next)
            list-&gt;next-&gt;prev = list;
    }
    return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list;
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    list = create_listint(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf(&quot;\n&quot;);
    insertion_sort_list(&amp;list);
    printf(&quot;\n&quot;);
    print_list(list);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
alex@/tmp/sort$ ./insertion
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 13, 71, 99, 52, 96, 73, 86, 7
19, 13, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 52, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 96, 99, 73, 86, 7
13, 19, 48, 52, 71, 96, 73, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 86, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 7, 99
13, 19, 48, 52, 71, 73, 86, 7, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
</code></pre>

### 2. Selection sort
<p>Write a function that sorts an array of integers in ascending order using the <a href="https://en.wikipedia.org/wiki/Selection_sort">Selection sort</a> algorithm</p>

<ul>
<li>Prototype: <code>void selection_sort(int *array, size_t size);</code></li>
<li>You&#39;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>

<p>Write in the file <code>2-O</code>, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>

<pre><code>alex@/tmp/sort$ cat 2-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf(&quot;\n&quot;);
    selection_sort(array, n);
    printf(&quot;\n&quot;);
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 2-main.c 2-selection_sort.c print_array.c -o select
alex@/tmp/sort$ ./select
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 48, 71, 52, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 73, 96, 86, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
</code></pre>

### 3. Quick sort
<p>Write a function that sorts an array of integers in ascending order using the <a href="https://en.wikipedia.org/wiki/Quicksort">Quick sort</a> algorithm</p>

<ul>
<li>Prototype: <code>void quick_sort(int *array, size_t size);</code></li>
<li>You must implement the <code>Lomuto</code> partition scheme.</li>
<li>The pivot should always be the last element of the partition being sorted.</li>
<li>You&#39;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>

<p>Write in the file <code>3-O</code>, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>

<pre><code>alex@/tmp/sort$ cat 3-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf(&quot;\n&quot;);
    quick_sort(array, n);
    printf(&quot;\n&quot;);
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 3-main.c 3-quick_sort.c print_array.c -o quick
alex@/tmp/sort$ ./quick
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 73, 96, 86, 99
7, 13, 19, 71, 48, 52, 73, 86, 96, 99
7, 13, 19, 48, 71, 52, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
</code></pre>

### Questions
4. What is the time complexity of this function / algorithm?
```
void f(int n)
{
    printf("n = %d\n", n);
}
```
5. What is the time complexity of this function / algorithm?
```
void f(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("[%d]\n", i);
    }
}
```
6. What is the time complexity of this function / algorithm?
```
void f(int n)
{
    int i;

    for (i = 0; i < n; i += 98)
    {
        printf("[%d]\n", i);
    }
}
```
7. What is the time complexity of this function / algorithm?
```
void f(unsigned int n)
{
    int i;

    for (i = 1; i < n; i = i * 2)
    {
        printf("[%d]\n", i);
    }
}
```
8. What is the time complexity of this function / algorithm?
```
var factorial = function(n) {
    if(n == 0) {
        return 1
    } else {
        return n * factorial(n - 1);
    }
}
```
9. What is the time complexity of this function / algorithm?
```
foreach($numbers as $number)
{
    echo $number;
}
```
10. What is the time complexity of this function / algorithm?
```
void f(unsigned int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j = j * 2)
        {
            printf("[%d] [%d]\n", i, j);
        }
    }
}
```
11. What is the time complexity of this function / algorithm?
```
void f(int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < n; j = j * 2)
            {
                printf("[%d] [%d]\n", i, j);
            }
        }
        else
        {
            for (j = 0; j < n; j = j + 2)
            {
                printf("[%d] [%d]\n", i, j);
            }
        }
    }
}
```
12. What is the time complexity of this function / algorithm?
```
int Fibonacci(int number)
{
    if (number <= 1) return number;

    return Fibonacci(number - 2) + Fibonacci(number - 1);
}
```
13. What is the time complexity of this function / algorithm?
```
def func(n):
    a=5
    b=6
    c=10
    for i in range(n):
        for j in range(n):
            x = i * i
            y = j * j
            z = i * j
    for k in range(n):
        w = a*k + 45
        v = b*b
    d = 33
```
14. What is the time complexity of this function / algorithm?
```
void f(int n)
{
     int i;
     int j;

     for (i = 0; i < n; i++)
     {
          for (j = i + 1; j < n; j++)
          {
               printf("[%d] [%d]\n", i, j);
          }
     }
}
```
15. Big O #Arrays
What are the time complexities of those operations on an unsorted array (one answer per line):
- Accessing the nth element
- Inserting at index n
- Removing at index n
- Searching for an element in an array of size n
- Setting value at index n

16. Big O #Singly linked lists
What are the time complexities of those operations on a singly linked list (one answer per line):
- Accessing the nth element
- Inserting after the nth element (Considering you have a pointer to the node to insert)
- Removing the nth element (Considering you have a pointer to the node to remove)
- Searching for an element in a linked list of size n
- Setting the value of the nth element (Considering you have a pointer to the node to set the value of)

17. Big O #Doubly linked lists 
What are the time complexities of those operations on a doubly linked list (one answer per line):
- Accessing the nth element
- Inserting after the nth element (Considering you have a pointer to the node to insert)
- Removing the nth element (Considering you have a pointer to the node to remove)
- Searching for an element in a linked list of size n
- Setting the value of the nth element (Considering you have a pointer to the node to set the value of)

18. Big O #Python 3 lists 
What are the time complexities of those operations on an unsorted Python 3 list (one answer per line):
- Accessing the nth element
- Inserting at index n
- Removing at index n
- Searching for an element in a Python list of size n
- Setting value at index n

19. Big O #Stacks 
What are the time complexities of those operations on a stack (one answer per line):
- push
- pop
- Searching for an element in a stack of size n

20. Big O #Queues
What are the time complexities of those operations on a queue (one answer per line):
- push
- pop
- Searching for an element in a queue of size n

21. Big O #Hash tables
What are the time complexities of those operations on a hash table (one answer per line) - with the implementation you used during the previous Hash Table C project (chaining):
- Searching for an element, best case
- Searching for an element, worst case
- Insertion, best case
- Insertion, worst case
- Deletion, best case
- Deletion, worst case