#include <iostream>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h>
using namespace std;

/* Task 2 */

double* mem(double *ptr, int len){
    ptr = new double[len];
    return ptr;
}
 
void fill(double *ptr, int len){
    for(int i = 0; i<len; i++){
        cin >> ptr[i];
    }
}
 
void show(double *ptr, int len){
    for(int i = 0; i<len; i++){
        cout << ptr[i] << " " << "\n";
    }
}
 
void del(double *ptr){
    delete[] ptr;
    ptr = nullptr;
}

/* Task 3 */

void swapElements(int* arr, int size) {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

/* Task 4 */

void inputArr(int** arr, int n, int m){
    srand(time(NULL));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            arr[i][j] = rand() % (50 - 10 + 1) + 10;
        }
    }
    cout << endl;
}

void rasArr(int** arr, int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        int j = i;
        sum = sum + arr[i][j];
    }
    cout << sum;
}

void printArr(int** arr, int n, int m){
    cout << "Массив: " << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


/* Task 6 */

int minimumDifference(vector<int>& nums, int k){
        sort(nums.begin(), nums.end());
        int minDifference = INT_MAX;

        for (int i = 0; i + k - 1 < nums.size(); ++i) {
            int currentDifference = nums[i + k - 1] - nums[i];
            minDifference = min(minDifference, currentDifference);
        }

        return minDifference;
    }

/* Task 7 */

int findLucky(vector<int>& arr)
{
    int frequency[501] = {0}, out = -1;
    for (int i = 0; i < arr.size(); i++)
        frequency[arr[i]]++;
    for (int i = 1; i < 501; i++)
        if (frequency[i] == i)
            out = max(res, i);
    return out;
}

/* Task 8 */

int majorityElement(std::vector<int>& nums){
    int answer = 0, count = 0;
    for (int num : nums) {
        if (answer == num) {
            count++;
        } else if (count > 0) {
            count--;
        } else {
            answer = num;
            count = 1;
        }
    }
    return answer;
}

int main(){
    
    /* Task1 */
    cout << "Task 1" << endl;
    
    const float* const ptrf1 = nullptr; //Объявить константный указатель на константу типа float.
    typedef long int* ptrl; //Объявить тип указателя на long int.
    double* ptrd1; //Объявить указатель на double.
    const short int* ptrs; //Объявить указатель на константу типа short int.
    typedef const float* const ptrf2; //Объявить тип константного указателя на константу типа float.
    typedef const char* ptrc; //Объявить тип указателя на константу типа char.
    double* const ptrd2 = nullptr; //Объявить константный указатель на double.
    typedef unsigned int* const ptrui; //Объявить тип константного указателя на unsigned int.
    
    /* Task2 */
    cout << "Task 2" << endl;
  
    int len;
    cout << "Введите длину: ";
    cin >> len;
    double *ptrnumbers = nullptr;
    ptrnumbers = mem(ptrnumbers,len);
    fill(ptrnumbers,len);
    show(ptrnumbers,len);
    del(ptrnumbers);
 
    /* Task 3 */
    cout << "Task 3" << endl;
    
    int arraySize = 12;
    int* Array = new int[arraySize];
    cout << "Input array elements." << endl;
    cout << "" << endl;
    for (int i = 1; i < =  arraySize; i++) {
        cout << "element " << i << ":";
        cin >> Array[i];
    }

    cout << "Raw array: ";
    for (int i = 0; i < arraySize; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
    swapElements(Array, arraySize);

    cout << "Edited array: ";
    for (int i = 0; i < arraySize; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
    delete[] Array;
    
    /* Task 4 */
    cout << "Task 4" << endl;
    
    int n, m;
    cout << "Введите количество строк и столбцов: ";
    cin >> n;
    m = n;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++){
        arr[i] = new int[m];
    }

    inputArr(arr,n, m);
    printArr(arr, n, m);
    rasArr(arr,n);
    delete [] arr;
    
    /* Task 5 */
    cout << "Task 5" << endl;
    
    
    
    /* Task 6 */
    cout << "Task 6" << endl;
    
    vector<int> nums = {9, 4, 1, 7};
    int k = 2;
    cout << minimumDifference(nums, k) << endl;
    
    /* Task 7 */
    cout << "Task 7" << endl;
    
    vector<int> arr = {2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 6, 6, 10};
    cout << findLucky(arr) << endl;
    
    /* Task 8 */
    cout << "Task 8" << endl;
    
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums) << endl;
    
    return 0;
}