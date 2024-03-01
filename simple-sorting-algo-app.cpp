#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Sort {
 public:
  string displayLine(){
   return "===========================";
  }

  string displayTitle(){
   return "\n\t" + displayLine() + "\n\tSimple Sorting Algo App\n";
  }
  
  string displayMenu(){
   return "\t\tMain Menu\n"
    "\t1.) Bubble Sort\n"
    "\t2.) Selection Sort\n"
    "\t3.) Insertion Sort\n"
    "\t4.) Merge Sort\n"
    "\t5.) Quick Sort\n"
    "\t6.) Heap Sort\n"
    "\t7.) Redix Sort\n"
    "\t8.) Exit\n\t" + 
    displayLine();
  }
};

vector<string> splitString(const string& s, char delimiter) {
  vector<string> tokens;

  stringstream ss(s); // 4 1 5 2 3

  string token;
  
  while (getline(ss, token, delimiter)) {
      tokens.push_back(token);
  }
    
 return tokens;
}

void bubbleSort(Sort &sort);
void selectionSort(Sort &sort);
void insertionSort(Sort &sort);
void mergeSort(Sort &sort);
void quickSort(Sort &sort);
void heapSort(Sort &sort);
void redixSort(Sort &sort);
void header(Sort &sort, string title);


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

void header(Sort &sort, string title){
 system("clear");

 cout << sort.displayLine();
 cout << title;
 cout << sort.displayLine();
}

void bubbleSort(Sort &sort){
 string sequence;
 char delimiter = ' ';
 header(sort, "\nBubble Sort\n");

 cout << "\nEnter a sequence of numbers <separated by space>: ";
 cin.ignore(numeric_limits<streamsize>::max(), '\n');
 getline(cin, sequence);

 vector<string> data = splitString(sequence, delimiter);

cout << "\n Printing Unsorted List: ";
for (int i = 0; i < data.size(); ++i)
  cout << data[i] << " ";

// Descending
 for (int i = 0; i < data.size() - 1; ++i) {
  for (int j = 0; j < data.size() - i - 1; ++j) {
    if(data[j] < data[j+1]){
      string temp_str = data[j]; 
      data[j] = data[j + 1]; 
      data[j + 1] = temp_str;
    }
  }
 }

cout << "\n Printing in Descending Order: ";
for (int i = 0; i < data.size(); ++i)
  cout << data[i] << " ";

// Ascending
 for (int i = 0; i < data.size() - 1; ++i) {
  for (int j = 0; j < data.size() - i - 1; ++j) {
    if(data[j] > data[j+1]){
      string temp_str = data[j]; 
      data[j] = data[j + 1]; 
      data[j + 1] = temp_str;
    }
  }
 }

 cout << "\n Printing in Ascending Order: ";
 for (int i = 0; i < data.size(); ++i)
  cout << data[i] << " ";

}

void selectionSort(Sort &sort){
 cout << "Section Sort";
}

void insertionSort(Sort &sort){
 cout << "Insertion Sort";
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
