
int d = 1000 ;

int red =8 ;
int yellow =9 ;
int green =10 ;

void setup()                                   
{
  pinMode( 8 , OUTPUT);
  pinMode( 9 , OUTPUT);
  pinMode( 10, OUTPUT);
                
  
}

void loop()
{
 digitalWrite(red,1);
 delay(d);
 digitalWrite(yellow,1);
 delay(d);
 digitalWrite(yellow,0);
   delay(d);
 digitalWrite(yellow,1);
 delay(d);
 digitalWrite(yellow,0);
 delay(d);
 digitalWrite(yellow,1);
 delay(d);
 digitalWrite(yellow,0);
 digitalWrite(red,0);
 digitalWrite(green,1);
 delay(d);
 digitalWrite(green,0);     
}