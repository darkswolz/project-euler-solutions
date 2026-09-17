# Problem 1 — Multiples of 3 or 5

Project Euler Problem:

[https://projecteuler.net/problem=1](https://projecteuler.net/problem=1)

## Result

233168

## Approach

The multiples of 3 are summed, and the multiples of 5 are summed separately. Multiples of 15 are then subtracted once because they were counted twice. This is a simple application of the Inclusion–Exclusion Principle.

## Complexity

Time Complexity: O(n)

Space Complexity: O(1)

## Mathematical Improvement

The same problem can be solved in O(1) time by using the arithmetic-series formula to calculate the relevant sums directly. The original implementation is intentionally preserved and is not replaced by that approach.
