int count(int array[], int n) {
  // even counter initially set to 0
  int c = 0;
  for (int i = 0; i < n; i++) {
    // even counter incremented whenever ith element is divisible by 2
    if (array[i] % 2 == 0) {
      c++;
    }
  }
  return c;
}