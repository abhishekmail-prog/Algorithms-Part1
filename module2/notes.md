# Module 2: Dynamic Connnectivity (Union Find)

## What I learned

This module introduced the Dynamic Connectivity problem and different approaches to solve it efficiently.

The main question:

"Are two objects connected?"

Examples:
- Social networks
- Computer networks
- Road Maps
- Friend groups
- Image processing

---

## Core operations

### Union(p, q)

Connect two objects/groups.

Example:

Union(1, 2)

Result:

1 -- 2

---

### Connected(p, q)

Checks whether two objects belong to the same group.

Example:

Connected(1, 2)

Returns:

true

Important:

Connected() does not change data.

It only checks.

---

## Dynamic Connectivity 

Initially:

0 1 2 3 4

All objects are seperate.

After:

Union(1, 2)
Union(2, 3)

Groups become:

1 --- 2 --- 3

Now:

Connected(1, 3)

returns true

---

# Quick Find

Idea:

id[i] = component/group id

Initial:

Index: 0 1 2 3 4

id[]:  0 1 2 3 4


Example:

Union(1, 2)

Update every occurency of group 1 -> group 2

Result:

0 2 2 3 4

Connected(1, 2):

Check:

id[1] == id[2]

Advantages:
- Conneccted() is very fast

Disadvantages:
- Union() scans the whole array

Time Complexity:

Connected: O(1)

Union: O(N)

Summary:

Fast query
Slow union

---

## Quick Union

Idea:

id[i] = parent of i

Objects from trees.

Initial:

0  1  2  3  4

Each object points to itself.

Example:

Union(1, 2)
Union(2, 3)

Tree:

1 -> 2 -> 3

Root:

A node whose parent is itself.

Code idea:

```
while(i != id[i]) 
	i = id[i];
```

Connected:

root(p) == root(q)

Advantages:
- Union is simpler

Disadvantages:
- Trees can become tall

Bad case:

1 -> 2 -> 3 -> 4 -> 5

Looks like a Linked list

Time Complexity:

Union: O(N)

Connected: O(N)

---

## Weighted Quick Union

Problem solved:

Prevent tall trees

Idea:

Attach smaller tree under larger tree

Maintain:

size[]

Example:

Small Tree:

1 -> 2

Big Tree:

3 -> 4 -> 5

Attach:

1 -> 2

under:

3 -> 4 -> 5

Advantages:

Tree height remains small

Time:

O(log N)

---

# Path Compression

Idea:

Flatten trees during root finding

Before:

1 -> 2 -> 3 -> 4 -> 5

After finding root:

```
1
 \
  \
   -> 5
```

2 -> 5

3 -> 5

4 -> 5

Result:

Future operations become much faster

---

## Final Complexity

Quick Find:

Connected -> O(1)

Union     -> O(N)


Quick Union: 

Connected -> O(N)
Union     -> O(N)


Weighted Quick Union + Path compression:

Almost O(1)

---

## Personal Notes

Big lesson:

Quick Find updates the whole array.

Quick Union creates trees.

Weighted Union prevents tall trees.

Path Compression flattens trees.

Real applications:
- Social networks
- Network Connectivity
- Number of island

---

## Progress

Completed:
- Dynamic Connectivity
- Quick Find
- Quick Union
- Weigted Union
- Path Compression

Next:
Algorithm analysis and deeper complexity understanding
