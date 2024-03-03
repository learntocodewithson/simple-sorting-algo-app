#ifndef BUBBLESORT_H
#define BUBBLESORT_H
 class BubbleSort: public Sort {
   std::vector<std::string> data;

   public:
    BubbleSort(std::vector<std::string> temp_data){
     data = temp_data;
    }

    void displayInAscendingOrder(){
     
     for (int i = 0; i < data.size() - 1; ++i) {
       for (int j = 0; j < data.size() - i - 1; ++j) {
         if(data[j] > data[j+1]){
           std::string temp_str = data[j]; 
           data[j] = data[j + 1]; 
           data[j + 1] = temp_str;
         }
       }
     }

     std::cout << "\nPrinting in Ascending Order: ";
     displaySort(data);
    }

    void displayInDescendingOrder(){
     for (int i = 0; i < data.size() - 1; ++i) {
        for (int j = 0; j < data.size() - i - 1; ++j) {
          if(data[j] < data[j+1]){
            std::string temp_str = data[j]; 
            data[j] = data[j + 1]; 
            data[j + 1] = temp_str;
          }
        }
      }

      std::cout << "\nPrinting in Descending Order: ";
      displaySort(data);
    }
 };
#endif