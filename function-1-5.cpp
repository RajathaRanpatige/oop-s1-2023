int count_evens(int number) {
  int count = 0;

  if (number > 0) {
    for (int i = 2; i <= number; i += 2) {
      count++;
    }
  }

  return count;
}