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