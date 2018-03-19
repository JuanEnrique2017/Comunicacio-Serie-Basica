/******************************************************************* 
**                                                                **
**                            TITOL:                              **
**                          Hello Word                            **
**                                                                **               
**  Nom: Juan Enrique Fernandez                 Data: 18/01/2017  **                                                                   
*******************************************************************/
//************************** INCLUDE *******************************


//************************* VARIEBLES ******************************



//*************************** SETUP ********************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
}


//*************************** LOOP *********************************
void loop()                 // run over and over again
{
  Serial.println("Hello world!");  
  delay(1000);
}


//************************* FUNCIONES ******************************
// Este programa dice HELLO WORD cada 1s y la diferencia es que lo dice uno debajo del otro
