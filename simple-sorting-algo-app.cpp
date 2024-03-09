#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <chrono>
#include "Sort.h"

using namespace std;

void bubbleSort(Sort &sort);
void selectionSort(Sort &sort);
void insertionSort(Sort &sort);

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

/*
vector<string> data = sort.splitString("9 5 1 7", ' ');
 BubbleSort bubble_sort = BubbleSort(data);
 auto start = std::chrono::steady_clock::now();
 bubble_sort.displayInAscendingOrder();
 auto end = std::chrono::steady_clock::now();
 chrono::duration<double> bubbleSortTime = end - start;
 cout << "\n\nBubble Sort Time: " << bubbleSortTime.count() << " seconds" << endl;
 
 data = sort.splitString("9 5 1 7", ' ');
 SelectionSort selection_sort = SelectionSort(data);
 start = std::chrono::steady_clock::now();
 selection_sort.displayInAscendingOrder();
 end = std::chrono::steady_clock::now();
 chrono::duration<double> selectionSortTime = end - start;
 cout << "\n\nSelection Sort Time: " << selectionSortTime.count() << " seconds" << endl;

 data = sort.splitString("9 5 1 7", ' ');
 InsertionSort insertion_sort = InsertionSort(data);
 start = std::chrono::steady_clock::now();
 insertion_sort.displayInAscendingOrder();
 end = std::chrono::steady_clock::now();
 chrono::duration<double> insertionSortTime = end - start;
 cout << "\n\nInsertion Sort Time: " << insertionSortTime.count() << " seconds" << endl;


*/