bool is_ascending(int array[], int n) {
  bool result = false;

  if (n > 0) {
    result = true;

    for (int i = 0; i < n - 1; i++) {
      if (array[i + 1] < array[i]) {
        result = false;
      }
    }
  }

  return result;
}