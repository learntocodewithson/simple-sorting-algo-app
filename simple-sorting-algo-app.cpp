#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Sort.h"

using namespace std;

void bubbleSort(Sort &sort);
void selectionSort(Sort &sort);
void insertionSort(Sort &sort);
void mergeSort(Sort &sort);
void quickSort(Sort &sort);
void heapSort(Sort &sort);
void redixSort(Sort &sort);

int main(){
 Sort sort;
 int choice;
 bool exit_program = false;

 do {
  // system("clear");

  cout << sort.displayTitle();
  cout << sort.displayMenu();

  cout << "\n\n< Enter from 1 to 8 >";
  cout << "\nWhat do you want to do?: ";
  cin >> choice;

  switch (choice){
  case 1:
   bubbleSort(sort);
   break;
  case 2:
   selectionSort(sort);
   break;
  case 3:
   insertionSort(sort);
   break;
  case 4:
   mergeSort(sort);
   break; 
  case 5:
   quickSort(sort);
   break; 
  case 6:
   heapSort(sort);
   break;
  case 7:
   redixSort(sort);
   break;  
  default:
   exit_program = true;
   cout << "\nThank you for using this app.\n";
   break;
  }

 } while(!exit_program);

 return 0;
}

// first loop
  // second loop
    // condition
      // swap
void bubbleSort(Sort &sort){
  system("clear");

  string headerTitle = "\nBubble Sort\n";
  
  vector<string> data = sort.rangeInput(headerTitle);
  BubbleSort bubble_sort = BubbleSort(data);
  
  cout << endl << headerTitle;
  cout << "Printing Unsorted List: ";
  bubble_sort.displaySort(data);

  bubble_sort.displayInAscendingOrder();
  bubble_sort.displayInDescendingOrder();
}


// first loop
  // second loop
    // condition
  // swap
void selectionSort(Sort &sort){
 system("clear");

 string headerTitle = "\nSelection Sort\n";

 vector<string> data = sort.rangeInput(headerTitle);
 SelectionSort selection_sort = SelectionSort(data);

 cout << endl << headerTitle;
 cout << "Printing Unsorted List: ";
 selection_sort.displaySort(data);

 selection_sort.displayInAscendingOrder();
 selection_sort.displayInDescendingOrder();
}

// first loop
  // second loop (while)
  // assignment
void insertionSort(Sort &sort){
 system("clear");

 string headerTitle = "\nInsertion Sort\n";

 vector<string> data = sort.rangeInput(headerTitle);
 InsertionSort insertion_sort = InsertionSort(data);

 cout << endl << headerTitle;
 cout << "Printing Unsorted List: ";
 insertion_sort.displaySort(data);

 insertion_sort.displayInAscendingOrder();
 insertion_sort.displayInDescendingOrder();
}

void mergeSort(Sort &sort){
 cout << "Merge Sort";
}

void quickSort(Sort &sort){
 cout << "Quick Sort";
}

void heapSort(Sort &sort){
 cout << "Heap Sort";
}

void redixSort(Sort &sort){
 cout << "Redix Sort";
}
