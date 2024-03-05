#ifndef SORT_H
#define SORT_H
 class Sort {
  public:
   std::string displayLine(){
    return "===========================";
   }

   std::string displayTitle(){
    return "\n\t" + displayLine() + "\n\tSimple Sorting Algo App\n";
   }
   
   std::string displayMenu(){
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

   std::vector<std::string> rangeInput(std::string headerTitle){
    std::string sequence;
    char delimiter = ' ';
    header(headerTitle);

    std::cout << "\nEnter a sequence of numbers <separated by space>: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(std::cin, sequence);

    return splitString(sequence, delimiter);
   }


   std::vector<std::string> splitString(const std::string& s, char delimiter) {
     std::vector<std::string> tokens;

     std::stringstream ss(s); // 4 1 5 2 3

     std::string token;
     
     while (getline(ss, token, delimiter)) {
         tokens.push_back(token);
     }
       
    return tokens;
   }

   void header(std::string title){
    std::cout << displayLine();
    std::cout << title;
    std::cout << displayLine();
   }

   void displaySort(std::vector<std::string> data){
    for (int i = 0; i < data.size(); ++i)
     std::cout << data[i] << " ";
   }
 };

 // intended to declare here at the bottom to make the inheritance works 
 #include "BubbleSort.h"
 #include "SelectionSort.h"
 #include "InsertionSort.h"
 // other sort here
#endif