#ifndef BUBBLESORT_H
#define BUBBLESORT_H
 class BubbleSort: public Sort {
   std::vector<std::string> data;

   public:
    BubbleSort(std::vector<std::string> temp_data){
     data = temp_data;
    }

    void displayInAscendingOrder(){
     // data: 4 7 1
     std::cout << "\n\n\tData size: " << data.size();

     // 3 < 3
     for (int i = 0; i < data.size() - 1; ++i) {
      std::cout << "\n\tCondition limit: " << i << " < " << data.size() - 1;
      std::cout << "\n\tsize formula: " << data.size() << " - 1";
      std::cout << "\n\tFirst Loop, data size: " << data.size() - 1; 
      std::cout << "\n\tLoop(i): " << i;
      std::cout << "\n\t current data: ";
      displaySort(data);
      std::cout << "\n";
      // 2 < 2
      // j < 3; 3 < 3 = false
      // 2 < 2
      // 1 < 1
      // data[0] = 9
      // data[1] = 5
      // data[2] = 1
      // 9 > 5
       for (int j = 0; j < data.size() - i - 1; ++j) {
        std::cout << "\n\tCondition limit: " << j << " < " << data.size() - i - 1;
        std::cout << "\n\tsize formula: " << data.size() << " - " << i << " - 1";
        std::cout << "\n\tSecond Loop, data size: " << data.size() - i - 1;
        std::cout << "\n\tLoop(j): " << j;
        std::cout << "\n";
        std::cout << "\n\tdata[" << j << "] (" << data[j] << ") > data["<< j+1 <<"](" << data[j+1] <<")";
         if(data[j] > data[j+1]){
           // 9 5 1
           std::string temp_str = data[j];
           std::cout << "\n\ttemp_str = " <<  data[j];
           // 5 5 1
           data[j] = data[j + 1]; 
           std::cout << "\n\tdata["<< j <<"] = " << data[j + 1];
           std::cout << "\n\t swap 1: ";
           displaySort(data);
           // 5 9 1
           data[j + 1] = temp_str;
           std::cout << "\n\tdata["<< j + 1 <<"] = " << temp_str;
           std::cout << "\n\t swap 2: ";
           displaySort(data);
           std::cout << "\n";

           // data[0] = 5
           // data[1] = 9
           // data[2] = 1
         }else{
          std::cout << "\n\tSkip swapping...\n";
         }
       }

       std::cout << "\n\t============================";
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