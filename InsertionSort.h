#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
 class InsertionSort: public Sort {
  std::vector<std::string> data;

  public:
   InsertionSort(std::vector<std::string> temp_data){
    data = temp_data;
   }

   void displayInAscendingOrder(){

     std::cout << "\n\n\tData size: " << data.size();
     // 9 5 1 7
    // data[0] = 1
    // data[1] = 5
    // data[2] = 9
    // data[3] = 7
    for (int i = 1; i < data.size(); ++i) {
      std::string key = data[i]; // data[1] = 5
      int j = i - 1; // j = 0 , data[0] = 9

      std::cout << "\n\tCondition limit: " << i << " < " << data.size() << "(" << (i < data.size()) <<")";
      std::cout << "\n\tFirst Loop, data size: " << data.size(); 
      std::cout << "\n\tLoop(i): " << i;
      std::cout << "\n\t current data: ";
      displaySort(data);
      std::cout << "\n";

      std::cout << "\n\tkey = " << key << "( data[" << i << "])";
      std::cout << "\n\tj = " << j << "(" <<  i << " - 1 )";


      // Move elements of arr[0..i-1], that are greater than key,
      // to one position ahead of their current position
      // 0 >= 0 ? true &&  data[0] (9) > (5)  ? true
      // -1 >= 0 ? false
      std::cout << "\n\t j >= 0 && data[j] > key"; 
      std::cout << "\n\t" << j << " >= 0 && "<< data[j] << " > " << key; 
      
      while (j >= 0 && data[j] > key) {
         // data[0 + 1]; data[1] = 9
          data[j + 1] = data[j];
         std::cout<< "\n\tdata[j + 1] = data[j]";
         std::cout << "\n\tdata[" << j <<" + 1] = data[" << j << "]("<< data[j] <<")";
         std::cout << "\n\t swap 1: ";
         displaySort(data);
         std::cout << "\n";
         // 9 9 1 7
          j = j - 1;
         std::cout << "\n\tj = j - 1 ("<< j <<")";
          // -1
      }
     std::cout << "\n\t--------";
      data[j + 1] = key;
      std::cout << "\n\t data[j + 1] = key;";
      std::cout << "\n\t " << j << " + 1 = " << (j + 1); 
      std::cout << "\n\tdata["<< j + 1 <<"] = " << key;
      std::cout << "\n\t swap 2: ";
      displaySort(data);
      std::cout << "\n";
      // -1 + 1 = 0; data[0] = 5
      // 5 9 1 7

      std::cout << "\n\t============================";
    }

    std::cout << "\nPrinting in Ascending Order: ";
    displaySort(data);
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