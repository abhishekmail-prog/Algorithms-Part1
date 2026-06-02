# Module 3 - Analysis of Algorithms

## Why Analyze Algorithms?

Goals:
- Predict performace.
- Compare algorithms.
- Avoid performance bugs.
- Understand scalabality.
- Estimate running time and memory usage.

Key Question: 
"Will my program be able to solve large practical inputs?"

---

# Scientific Method for Algorithm Analysis

1. Observe program behaviour.

2. Develop a hypothesis/model.

3. Predict performance.

4. Run experiments

5. Verify predictions.


Example:
- Run algorithm different input sizes.
- Measure execution time.
- Identify growth pattern.

---

## Empirical Analyssis

Emprical Analysis = Measuring runtime through experiments.

Steps:

1. Eun program with various input sizes.

2. Record execution times.

3. Observe how runtime grow.


Example:

N = 1000 -> 0.5 sec

N = 2000 -> 3.7 sec

N = 4000 -> 30 sec


Observation:
- Doubling N causes runtime to increase rapidly.
- Indicates non-linear growth.

---

# 3-SUM Problem

Problem:

Given N distinct integers, count the number of triples whose sum equals zero.

Brute Force solution

```
for(i)
    for(j)
        for(k)
	    if(a[i] + a[j] + a[k] == 0)
	        count++;
```

Characteristics:
- Thriple nested loops.
- Runtime grows cubically.


Runtime:

T(N) ~   N^3

---

# Power Law Model

Many algorithms runtimes follow:

T(N) = A x N^B

WHere:
- A =  machien-dependent constant
- B = growth-rate exponent

Examples:

B = 1  -> Linear
B = 2  -> Quadratic
B = 3  -> Cubic

The exponent B is more important than A.

---

# Doubling Test

Technique:
- Double input size.
- Compare runtimes.


Runtime Ratios:

Linear     -> 2x

Quadratic  -> 4x

Cubic      -> 8x

Used to estimate algorithm complexity experimentally.

---

# Mathematical Models

Donald Knuth's Idea:

Running Time = Cost x Frequency 

Where:
- Cost = time for an operation.
- Frequency = number of executions.

---

# Cost Model

Instead of counting every instruction:

Choose one important operation.

Examples:
- Array accesses
- Comparisons
- Arithmetic operations

Count how many times it executes.

---

# Turniing's Simplification

Do not count every operation.

Focus on:
- Most expensive operation.
- Most frequently executed operations.

This provides a good approximation.

---

# Frequency Analysis

## One Sum

```cpp
for(i = 0; i < N; i++) 
```

Runtime:

T(N) ~ N

Linear Time.

---

## Two Sum

```cpp
for(i)
    for(j)
```

Runtime:

T(N) ~ (1/2)N^2

Quadratic Time.

---

## Three Sum

```cpp
for(i)
    for(j)
        for(k)
```

Runtime:

T(N) ~ (1/6)N^3

Cubic Time.

---

# Tilde (~) Notation

Purpose:
Ignore low-order terms and constants.

Example:

T(N) = (1/6)N^3 + 5N + 16

For large N:

T(N) ~ (1/6)N^3

Reason:
N^3 dominates smaller terms.

---

# Order of Growth

Common runtime classes:
```
	| Growth  | Name |
	|---------|--------------|
	|   1	  | Constant     |
	| log N	  | Logarithmic  |
	|   N     | Linear       |
	| N log N | Linearithmic |
	|   N^2   | Quardaric    |
	|   N^3   | Cubic        |
	|   2^N   | Exponential  |
```	

# Runtime Patterns in Code

No loop               		->    Constant Time

Single loop	      		->    Linear Time

Two nested loop       		->    Quadratic Time

Three nested loop     		->    Cubic Time

Repeatedly divide problem by 2  ->    Logarithmic Time

Divide and Conquer algorithms   ->    N log N Time

---

# Practical Imortance

Preferred algorithms:

- Linear (N)
- Linearithmic (N log N)


Less scalable:

- Quadratic (N^2)
- Cubic (N^3)

As input size grows:

Linear and N log N algorithms remain practical.

Quadratic and Cubic algorithm become too slow.

---

# Binary Search

Requirement:
- Array must be sorted.

Idea:
- Compare target with middle element.
- Discard half of the search space.
- Repeat until found or search space becomes empty.

Example:

Array: 
[5, 12, 25, 33, 43, 53, 62]

Find: 
33

Process:

1. Check middle.

2. Go left or right.

3. Repeat.

---

# Binary Search Complexity

Each comparison cuts the problem size in half.

Runtime:

T(N) ~ log N

Maximum comparisons:

1 + log base 2 (N)

Binary search is much faster than Linear Search for large inputs.

---

# Faster 3-SUM Using Binary Search

Brute Force:

```
for(i)
    for(j)
    	for(k)
```

Runtime:

T(N) ~ N^3

---

Improved idea:

1. Sort the array.

2. Choose two numbers.

3. Compute:

- target = -(a[i] + a[j])

4. Use Binary Search to find target.

If target exists:

a[i] + a[j] + target = 0

---

# Key takeaways

- Algorithms can be analyzed scientifically.
- Experimental measurements help identify growth patterns.
- Mathematical models explain why algorithms behave that way.
- Running Time = Cost x Frequenncy.
- Focys on dominant terms.
- Ignore low-order terms for large N.
- Growth rate matters more than exact runtime.
- Triple nested loops generally indicate cubic growth.
- Runtime Patterns usually determines the performance of your algorithm.
- The most preferred runtime is Linear(N) and Linearithmic (N log N).
- The less scalable runtime is Quadratic(N) and Cubic(N).
- Using Binary Search signigicantly reduces runtime for large inputs.
