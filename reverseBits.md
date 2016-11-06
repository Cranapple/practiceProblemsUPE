
## CS31/CS32/CS33 [the class this problem is for]

### Your Problem Title

*Contributed by Your Name*.

Your problem description. Remember to wrap in-line code in `ticks`!

#### Example

Example inputs and outputs, if helpful. If you don't have this, remove this section.

#### Solution

If you solution would benefit from a textual description, put that here. If you only want to provide the code, then remove these sentences!

```cpp
int reverseBits(int n) {
  if (n == 0) 
    return 0;
  int result = 0;
  for (int i = 0; i < 32; i++) {
    result <<= 1;
    if ((n & 1) == 1)
      result++;
    n >>= 1;
  }
  return result;
}
```

---
