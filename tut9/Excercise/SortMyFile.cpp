#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

class SortMyFile{
public:

    SortMyFile():size(0){
        input[MAXSIZE] = {0};
        sorted[MAXSIZE] = {0};
    }

    SortMyFile(const char * filename):size(0){
        // TODO: Open the file and store the values in the input array 
    }

    // A method to open and read from a file
    bool open(const char* filename){
        // TODO: Open the file and store the values in the input array
        // Return true if the operation successful
        return false;

    }

    //Try to sort the input values, you can implement selection, bubble or insertion sort
    int * sort(char order){
        // Sort the contents and store them inside the sorted array
        // Return true if operation successful
        return nullptr;
    }

    // A method to create and write to a file
    bool write(const char* filename){
        // TODO: Create a file and store the values from the sorted array inside it
        // Return true if the operation successful
        return false;
    }

private:
    
    static const int MAXSIZE = 100; // Max size of the array
    fstream my_file; // File stream object
    int input[MAXSIZE]; // input array
    int sorted[MAXSIZE]; // sorted array
    int size; // Size of the input 
    
    // function to swap the the position of two elements
    void swap(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
   
};

int main(){
    SortMyFile myfile;
    myfile.open("unsorted.txt");
    //Ascending order sort
    myfile.sort('a');
    //Descending order sort
    //myfile.sort('d');
    myfile.write("sorted.txt");
    
    return 0;
}