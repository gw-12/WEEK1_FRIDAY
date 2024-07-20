
// C Program to move all zeros to the end 
#include <stdio.h> 
int main() 
{ 
    int A[] = { 1, 2, 0, 4, 3, 0, 5, 0 }; 
    int n = sizeof(A) / sizeof(A[0]); 
    int j = 0; 
    for (int i = 0; i < n; i++) { 
        if (A[i] != 0) { 
            int temp = A[i];  
            A[i] = A[j]; 
            A[j] = temp; 
            j++; 
        } 
    } 
    for (int i = 0; i < n; i++) { 
        printf("%d ", A[i]); 
    } 
  
    return 0; 
}