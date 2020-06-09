#include <opencv2/opencv.hpp>
#include <raspicam_cv.h>
#include <iostream>
#include <ctime>
#include <wiringPi.h>
#include <wiringSerial.h>




using namespace std;
using namespace cv;
using namespace raspicam;


 
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
    
    int x=2,y=1;
    int i=0;
    while(1)
    {  
        cout<<"sending...try-"<<i<<endl;
            if(x>y)
            serialPutchar(fd,'9');
            else if(x<y)
            serialPuts(fd,"1");
            else if(x==y)
            serialPuts(fd,"2");
            
           // serialPutchar(fd,'A');
           //  serialPuts(fd1,"A");
            //cout<<"data recieved = "<<serialGetchar(fd)<<endl;
        delay(300);
        i++;
    }  
    serialClose(fd);
    return 0;
}
