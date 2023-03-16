#include <iostream>
#include <exception>
using namespace std;

// Inheriting from the exception class 
class OverSpeed : public exception{
    
	public :
    	const char* what(){
        	return "\nIllegal: check out your car speed, you are in the car not in an aeroplane ";
    	}
};

// Excercise 2 
class car{
	int speed;
	public:
	car(): speed(0) {}

	// Define this method
	// Add 's' to the speed and speed up
	// If above 100, then throw an exception 
	void speed_up(int s){

	}
};

int main()
{
	int carspeed=0;
	try
   	{
    	while(1)
   	 	{
    	    carspeed+=10;
    	    if(carspeed>100)
    		{
		
    			OverSpeed s;
    			throw s;
    		}
    	    cout<<"Carspeed: "<<carspeed<<endl;
		}
	
	}
	catch(OverSpeed ex)
	{
		cout << ex.what();
	}
	
	return 0;
}