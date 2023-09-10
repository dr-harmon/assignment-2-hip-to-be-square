# Algorithm Analysis

## Space Complexity

The data structure is a 2D array with the same number of elements as the size of the grid. Therefore the space complexity is `O(n)`.

## Time Complexity

`getValidSquares` iterates over all elements of the grid (`n` iterations), and for each element, it performs a number of checks equal to the smallest side of the grid. Since the smallest side is at most the square root of `n` (when the grid is a square), the big-O time complexity is `n√n = n^1.5 = O(n²)`.

## Empirical Evidence

![Benchmark results](graph.png)

The graph shows `n^2`, `n^3`, and the empirical data. The data most closely follows `n^2` and does not approach the `n^3` growth rate.
