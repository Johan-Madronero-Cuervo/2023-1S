#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// C++ program to display all permutations
// of an array using STL in C++
// Used by Johan Madroñero Cuervo for Analysis and Design of Algorithms 2023 - 1S
// extracted from Geeks for Geeks

int conteo = 0;
int N = 0;

// Function to display the array
void display(int a[], int n)
{
for (int i = 0; i < n; i++) {
	cout << a[i] << " ";
}
cout << endl;
}

// Function to find the permutations
void findPermutations(int a[], int n)
{

// Sort the given array
sort(a, a + n);

if ((a[0] + a[1] + a[2] + a[3]) > N || a[8] + a[7] + a[6] + a[5] < N){
    return;
} 

// Find all possible permutations
do {
    if  ((a[0] + a[1] + a[2] + a[3]) == N &&
        (a[3] + a[4] + a[5] + a[6]) == N &&
        (a[6] + a[7] + a[8] + a[0]) == N){
            conteo++;
        }
        
} while (next_permutation(a, a + n));
}


int casos = 0;
int n = 9; 

int n1 = 0;
int n2 = 0;
int n3 = 0;
int n4 = 0;
int n5 = 0;
int n6 = 0;
int n7 = 0;
int n8 = 0;
int n9 = 0;

int main()
{
    std::cin >> casos;
    
    for (int i = 0; i < casos; i++){
        
        conteo = 0; 
        
        std::cin >> N;
        std::cin >> n1;
        std::cin >> n2;
        std::cin >> n3;
        std::cin >> n4;
        std::cin >> n5;
        std::cin >> n6;
        std::cin >> n7;
        std::cin >> n8;
        std::cin >> n9;
        
        int a[] = {n1, n2, n3, n4, n5, n6, n7, n8, n9};
        findPermutations(a, 9);
        
        std::cout << conteo << std::endl;
    }
}