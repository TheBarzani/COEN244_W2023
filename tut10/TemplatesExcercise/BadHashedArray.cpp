#include <iostream>
#include <string>
using namespace std;

/** EXCERCISE: Turn this into a template class!*/

class HashedArray{
    public:

    HashedArray(){}


    // Inserts a key value pair in the specified position.
    void insert(int key, int val, int pos){
        if(pos < SIZE){
            this->key[pos] = key;
            this->val[pos] = val;
        }
        else{
            cout << "Out of bounds error." << endl;
        }
    }

    // This function returns a value based on a key.
    int get(int key){
        for(int i = 0; i < SIZE;i++){
            if (this->key[i] == key){
                return val[i];
            }
        }

        cout << key<<" does not exist!"<< endl;
        return NULL;
    }

    void display(){
        for(int i=0; i<SIZE; i++){
            cout << key[i] << " : " << val[i] << endl;
        }
    }


    private:
    
    // The type of these two arrays should be changed based on the template
    static const int SIZE = 10;
    int key[SIZE];
    int val[SIZE];
};

int main(){
    // After the conversion, turn this into HashedArray<int, int> my_hash;
    //HashedArray<int, int> my_hash;
    HashedArray my_hash;
    
    my_hash.insert(1,1,0);
    my_hash.insert(2,2,1);
    my_hash.insert(3,3,2);
    my_hash.insert(4,4,3);
    my_hash.insert(5,5,4);
    my_hash.insert(6,6,5);
    my_hash.insert(7,7,6);
    my_hash.insert(8,8,7);
    my_hash.insert(9,9,8);
    my_hash.insert(10,10,9);

    my_hash.display();

    //UNCOMMENT THIS Later
    //Using templates implement for the following test code
    
    // HashedArray<int, string> my_hash;
    
    // my_hash.insert(1,"one",0);
    // my_hash.insert(2,"two",1);
    // my_hash.insert(3,"three",2);
    // my_hash.insert(4,"four",3);
    // my_hash.insert(5,"five",4);
    // my_hash.insert(6,"six",5);
    // my_hash.insert(7,"seven",6);
    // my_hash.insert(8,"eight",7);
    // my_hash.insert(9,"nine",8);
    // my_hash.insert(10,"ten",9);

    // my_hash.display();

    // string ten = my_hash.get(10);
    // cout <<endl<< ten << endl;


}
