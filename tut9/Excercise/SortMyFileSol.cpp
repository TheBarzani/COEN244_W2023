#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

class SortMyFile{
public:

    
    SortMyFile():size(0){

    }

    SortMyFile(const char * filename):size(0){
        my_file.open(filename, ios::in);
        try{
            if(!my_file.is_open()) throw "File not found exception";

            while(my_file >> input[size]){
                size++;
            }
        }
        catch(char * e){
            cout << e << endl;
            cout << "Check if you are in the correct directory!";
        }
        my_file.close();
    }

    bool open(const char* filename){
        my_file.open(filename, ios::in);
        bool file_opened = my_file.is_open();
        try{
            if(!file_opened) throw "File not found exception";

            while(my_file >> input[size]){
                size++;
            }
        }
        catch(char * e){
            cout << e << endl;
            cout << "Check if you are in the correct directory!";
        }
        my_file.close();
        return file_opened;

    }

    //A simple selection sort
    int * sort(char order){
        for (int i =0; i <size ; i++){
            sorted[i] = input[i];
        }
        switch (order)
        {
        case 'a':
            {
                for (int step = 0; step < size - 1; step++) {
                    int min_idx = step;
                    for (int i = step + 1; i < size; i++) {
                    // Select the minimum element in each loop.
                        if (sorted[i] < sorted[min_idx])
                            min_idx = i;
                    }
                    // put min at the correct position
                    swap(&sorted[min_idx], &sorted[step]);
                }
                break;
            }
        case 'd':
            {
                for (int step = 0; step < size - 1; step++) {
                    int min_idx = step;
                    for (int i = step + 1; i < size; i++) {
                    // Select the maximum element in each loop.
                        if (sorted[i] > sorted[min_idx])
                            min_idx = i;
                    }
                    // put max at the correct position
                    swap(&sorted[min_idx], &sorted[step]);
                }
                break;
            }
        default:
            {
                cout << "Please specify the order as 'a' or 'd'";
                break;
            }
            
        }
        
                        for(int i=0;i<size;i++){
                    cout << sorted[i] << " ";
                }
        return sorted;
    }

    bool write(const char* filename){
        my_file.open(filename, ios::out);
        bool file_opened = my_file.is_open();
        try{
            if (!file_opened) throw "Unable to open file";
            for(int count = 0; count < size; count ++)
                my_file << sorted[count] << " " ;
        }
        catch(char * e){
            cout<< e << endl; 
        }
        return file_opened;
    }

private:
    static const int MAXSIZE = 100;
    fstream my_file;
    int input[MAXSIZE] = {};
    int sorted[MAXSIZE] = {};
    int size; 
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