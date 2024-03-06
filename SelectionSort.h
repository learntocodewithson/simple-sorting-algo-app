#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
 class SelectionSort: public Sort {
  std::vector<std::string> data;

  public:
   SelectionSort(std::vector<std::string> temp_data){
    data = temp_data;
   }

   void displayInAscendingOrder(){
    // 9 5 1
    // data[0] = 9
    // data[1] = 5
    // data[2] = 1
    std::cout << "\n\n\tData size: " << data.size();

     for (int i = 0; i < data.size() - 1; ++i) {
      int minIndex = i;

      std::cout << "\n\tCondition limit: " << i << " < " << data.size() - 1;
      std::cout << "\n\tsize formula: " << data.size() << " - 1";
      std::cout << "\n\tFirst Loop, data size: " << data.size() - 1; 
      std::cout << "\n\tLoop(i): " << i;
      std::cout << "\n\t current data: ";
      displaySort(data);
      std::cout << "\n";

      std::cout << "\n\t minIndex: " << i;
      std::cout << "\n";
        // first loop: initial = 0
        // second loop: initial = 1 (0 + 1)
   
         for (int j = i + 1; j < data.size(); ++j) {
          std::cout << "\n\tStarting nested loop";
          std::cout << "\n\tCondition limit: " << j << " < " << data.size();
          std::cout << "\n\tsize formula: " << data.size();
          std::cout << "\n\tSecond Loop, data size: " << data.size();
          std::cout << "\n\tLoop(j): " << j;
          std::cout << "\n";
          std::cout << "\n\tdata[" << j << "] (" << data[j] << ") < data["<< minIndex <<"](" << data[minIndex] <<")";
          // data[0](9) < data[0](9) = false
          // data[1](5) < data[0](9) = true
          // data[2](1) < data[1](5) = true
             if (data[j] < data[minIndex]) {
                // replace the minindex
                // minindex = 1
                // minindex = 2
                 minIndex = j;
                 std::cout << "\n\tMin-index: " << minIndex;
             }else{
              std::cout << "\n\tSkip replacing minindex...\n";
             }
         }
         // Swap the found minimum element with the first element

        // data[0] = 1
        // data[1] = 5
        // data[2] = 9
        // 1 5 9

        // minindex = i (replace itself)
        if(i != minIndex){
         std::string temp = data[minIndex]; // 1
         std::cout << "\n\tdata[" << minIndex <<"] = " << data[minIndex]; 
         std::cout << "\n\ttemp_str = " <<  data[minIndex];

         data[minIndex] = data[i]; // 9 5 9
         std::cout << "\n\tdata["<< minIndex <<"] = " << data[i];
         std::cout << "\n\t swap 1: ";
         displaySort(data);

         data[i] = temp; // 1 - 1 5 9
         std::cout << "\n\tdata["<< i <<"] = " << temp;
         std::cout << "\n\t swap 2: ";
         displaySort(data);
         std::cout << "\n";
        }else{
         std::cout << "\n\tSkip swapping itself...\n";
        }
         
         std::cout << "\n\t============================";
     }

     std::cout << "\nPrinting in Ascending Order: ";
     displaySort(data);
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