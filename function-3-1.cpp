bool is_fanarray(int array[], int n) {
  bool result = false;
  // Middle index
  double mid = (n - 1) / 2;

  // Check if atleast one element
  if (n > 0) {
    result = true;
    // Mirror check
    for (int i = 0; i <= mid; i++) {
      if (array[i] != array[n - 1 - i]) {
        result = false;
        break;
      }
    }

    // Ascending check
    if (result) {
      for (int i = 0; i < mid; i++) {
        if (array[i] > array[i + 1]) {
          result = false;
          break;
        }
      }
    }
  }

  return result;
}