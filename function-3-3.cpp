double weighted_average(int array[], int n) {

  double wAvg = 0;

  if (n > 0){
    
    for (int i = 0; i < n; i++){

      int count = 1;

      for (int j = 0; j < n; j++){

        if (i != j && array[i] == array[j]){
          count++;
        }
      }

      wAvg += array[i] * (double)count / n;
    }

  }

  return wAvg;
}