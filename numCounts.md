
## CS31/CS32/CS33 [the class this problem is for]

### Your Problem Title

*Contributed by Your Name*.

Your problem description. Remember to wrap in-line code in `ticks`!

#### Example

Example inputs and outputs, if helpful. If you don't have this, remove this section.

#### Solution

If you solution would benefit from a textual description, put that here. If you only want to provide the code, then remove these sentences!

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
