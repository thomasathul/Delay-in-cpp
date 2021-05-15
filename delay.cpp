#include <unistd.h>
#include<iostream>
using namespace std; 

int main()
{
	int delay;
	cout<<"Enter delay time (sec)"<<"\n";
	cin>>delay;

    //Looping till interupt
	while(1)
	{
	cout<<"Delay "+to_string(delay)+ "s"<<endl;

	    //Displaying delay sequence
	   for(int i=1;i<=delay;i++)
       {
    	if(i*100/delay!=100)
    	{
    	    cout<<float((i*100)/delay)<<"...";
        }
        else
        {
        	cout<<float((i*100)/delay)<<endl;
        }
        //Sleep for 1 sec
    	sleep(1);
       }
    }
    
 }

