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

# Key takeaways

- Algorithms can be analyzed scientifically.
- Experimental measurements help identify growth patterns.
- Mathematical models explain why algorithms behave that way.
- Running Time = Cost x Frequenncy.
- Focys on dominant terms.
- Ignore low-order terms for large N.
- Growth rate matters more than exact runtime.
- Triple nested loops generally indicate cubic growth.
