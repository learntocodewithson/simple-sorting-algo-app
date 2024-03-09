#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
 class InsertionSort: public Sort {
  std::vector<std::string> data;

  public:
   InsertionSort(std::vector<std::string> temp_data){
    data = temp_data;
   }

   void displayInAscendingOrder(){
    for (int i = 1; i < data.size(); ++i) {
      std::string key = data[i];
      int j = i - 1;
      while (j >= 0 && data[j] > key) {
       j = j - 1;
      }
      data[j + 1] = key;
    }
    // std::cout << "\nPrinting in Ascending Order: ";
    // displaySort(data);
   }

   void displayInDescendingOrder(){
    for (int i = 1; i < data.size(); ++i) {
      std::string key = data[i];
      int j = i - 1;

      // Move elements of arr[0..i-1], that are less than key,
      // to one position ahead of their current position
      while (j >= 0 && data[j] < key) {
          data[j + 1] = data[j];
          j = j - 1;
      }
      data[j + 1] = key;
    }

    std::cout << "\nPrinting in Descending Order: ";
    displaySort(data);
   }
 };
#endif