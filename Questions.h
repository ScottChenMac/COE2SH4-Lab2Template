


// Functions of Question 1
void add_vectors(double vector1[],double vector2[],double vector3[],int size);
double scalar_prod(double vector1[],double vector2[],int size);
double norm2(double vector1[],int size);


// Functions of Question 2
#define N3 3
void diag_scan(int mat [][N3], int arr []);


// Functions of Question 3
void efficient(const int source[], int val[], int pos[], int size);
void reconstruct(int source[], int m, const int val[], const int pos[], int n);


// Functions and Struct Definition of Question 4

// The structure defined here will be the element of an N-sized array.
// The goal is to sort the struct array in Ascending Order using the intData of the struct.
struct Q4Struct
{
    int intData;
    char charData;
};

void sortDatabyBubble(struct Q4Struct array[], int size);
void sortDatabySelection(struct Q4Struct array[], int size);