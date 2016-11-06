
## CS32

### Ways to Count

*Contributed by Lucas Tecot*.

You are given a whole number and must count up to it in increments of 1 and 2. Find the number of ways you can count to that number.

#### Example

For the number 3, we return 3. (1+1+1, 1+2, or 2+1)

For the number 4, we return 5. (1+1+1+1, 1+1+2, 1+2+1, 2+1+1, 2+2)

#### Solution

It turns out that this problem is essentially just fibonacci numbers. You can do it with recursion but using a loop is much more efficient.

```cpp
int numCounts(int n) {
  if (n <= 0) 
    return 0;
  if (n <= 2) 
    return n;
  int p2 = 1;
  int p1 = 2;
  int total = 0;
  for (int i = 3; i <= n; i++) {
    total = p1 + p2;
    p2 = p1;
    p1 = total;
  }
  return total;
}
```

---
