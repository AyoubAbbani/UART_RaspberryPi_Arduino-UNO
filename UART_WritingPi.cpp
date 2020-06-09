#include <iostream>
#include <ctime>
#include <wiringPi.h>
#include <wiringSerial.h>




using namespace std;




 
int main()
{
    int fd;
     char a='0';
    if (wiringPiSetup () == -1)					/* initializes wiringPi setup */
  {
    fprintf (stdout, "Unable to start wiringPi: %s\n", strerror (errno)) ;
    return 1 ;
  }

    if((fd = serialOpen ("/dev/ttyAMA0", 9600)) < 0){
        fprintf (stderr, "Unable to open serial device: %s\n", strerror (errno)) ;
        return 1;
    }
    printf("serial test start ...\n");
    
   
    int i=0;
    while(1)
    {  
        cout<<"sending...try-"<<i<<endl;
            
            serialPutchar(fd,'9');
           
           
          
        delay(300);
        i++;
    }  
    serialClose(fd);
    return 0;
}
