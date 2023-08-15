extern int *readNumbers();
extern void printNumbers(int *numbers, int length);

int main(void){

    int* A;
    A = readNumbers();

    printNumbers(A,10);

    delete[] A;

    return 0;
}