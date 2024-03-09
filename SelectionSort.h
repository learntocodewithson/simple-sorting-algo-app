#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
 class SelectionSort: public Sort {
  std::vector<std::string> data;

  public:
   SelectionSort(std::vector<std::string> temp_data){
    data = temp_data;
   }

   void displayInAscendingOrder(){
     for (int i = 0; i < data.size() - 1; ++i) {
      int minIndex = i;
         for (int j = i + 1; j < data.size(); ++j) {
             if (data[j] < data[minIndex]) {
                 minIndex = j;
             }
         }
       
        if(i != minIndex){
         std::string temp = data[minIndex];
         data[minIndex] = data[i];
         data[i] = temp;
        }
     }

    //  std::cout << "\nPrinting in Ascending Order: ";
    //  displaySort(data);
   }

   void displayInDescendingOrder(){
     for (int i = 0; i < data.size() - 1; ++i) {
         int minIndex = i;
         for (int j = i + 1; j < data.size(); ++j) {
             if (data[j] > data[minIndex]) {
                 minIndex = j;
             }
         }
         // Swap the found maximum element with the first element
         std::string temp = data[minIndex];
         data[minIndex] = data[i];
         data[i] = temp;
     }

     std::cout << "\nPrinting in Descending Order: ";
     displaySort(data);
   }
 };
#endif