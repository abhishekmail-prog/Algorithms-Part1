# Learnings

Today I realised:

At first I mixed Quick Find and Quick Union

Mistake:

I wrote:

```
arr[p] == arr[q]
```

for Quick Union connected().

This was wrong because Quick Union stores parents, not component IDs.

Correct understanding:

Need:

root(p) == root(q)

Takeaway:

Quick Union works correctly if operations happen on the roots.
