#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key ){
    int start =0;
    int end = size -1 ;  // because counting start in arry 0
    int mid =start + (start + end ) /2 ; //mid of array
    while (start<= end) {
        if ( arr[mid]== key){      // find the element = key
            return mid;
        } 
        if(key> arr[mid]){         // Right wala part
            start = mid + 1;
        }
        else {
            end = mid - 1;      // move the left wala part
        }
        mid = start + (start + end ) /2;    // mid is update again because the any value of start and the mid is updated
    }
    return -1;      // key not fird write this 
}
int main(){
    int even[6] = {3,6,8,9,10,25} ;
    int odd[5]  = {1,3,5,7,9};
     int evenindex = binarySearch( even , 6 , 10);
     cout << "Index of 10 is :" << evenindex << endl;
     int oddindex = binarySearch( odd , 5 , 9);
     cout << "Index of 9 is: " << oddindex << endl;
     return 0;
}
