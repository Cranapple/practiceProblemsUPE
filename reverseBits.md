
## CS33

### Reverse Integer Bits

*Contributed by Lucas Tecot*.

Reverse the bits of an integer.

#### Solution

To do this, we go one by one for each bit. We shift the result int left, set its least significant to that of the original number, then shift the original to the right.

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
