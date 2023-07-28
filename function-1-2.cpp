double array_mean(int array[], int n){

    double avg = 0.0;

    if (!(n < 1)){
        for (int i = 0; i < n; i++){
        avg += (double)array[i]/n;
    }
    }

    return avg;

}