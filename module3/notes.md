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


