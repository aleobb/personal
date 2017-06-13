/******************************************************************
* Programa: Ejemplo de uso del LCD Keypad Shield
*
* Objetivo:
*   Mostrar los aspectos básicos de funcionamiento del LCD Keypad Shield
*   Manejar una entrada analógica
*
* Aspectos a destacar:
*   -Lectura de la entrada analogica 
*
* Versión: 0.3 del 5 de marzo de 2017
* Autor: Mauricio Dávila
* Revisión: -
*
* *******************************************************************/

#include <LiquidCrystal.h>


#define btnRIGHT 0
#define btnUP 1
#define btnDOWN 2
#define btnLEFT 3
#define btnSELECT 4
#define btnNONE 5

LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // Pines utilizados en la Mega2560


int read_LCD_buttons(void);

int horas = 0;
int minutos = 0;
int segundos = 0;
int decimas = 0;
long milisegundos = 0;

/** \brief  Se invoca una sola vez cuando el programa empieza. 
 *          Se utiliza para inicializar los modos de trabajo 
 *          de los pines, el puerto serie, etc... 
 * \param void
 * \return void
 */
void setup(void)
{
  setup_reloj(); // inicializo el reloj
  //setup_calefa(); // inicializo el reloj
  //setup_semaforo(); // inicializo el reloj


  lcd.begin(16, 2); // inicializo la biblioteca indicando 16 caracteres por 2 lineas
}


/** \brief  Contiene el programa que se ejecutará cíclicamente
 *          
 * \param void
 * \return void
 */
void loop(void)
{
    loop_reloj();
    //loop_calefa();
    //loop_semaforo();






  int lcd_key = 0;
  lcd.setCursor(0,0);
 // lcd.print("Boton_v2:"); // imprime por el lcd
  lcd.setCursor(0,1); // mueve el cursor a la primer linea "0" y lo desplaza "0" espacios
  lcd_key = read_LCD_buttons(); // read the buttons
  
  switch (lcd_key) // depending on which button was pushed, we perform an action
  {
     case btnRIGHT:
     {
       lcd.print("RIGHT   ");
       break;
     }
     case btnLEFT:
     {
       lcd.print("LEFT   ");
       
       break;
     }
     case btnUP:
     {
        horas = 0;
        minutos = 0;
        segundos = 0;
        decimas = 0;
        lcd.clear();
        break;
     }
     case btnDOWN:
     {
       lcd.print("DOWN   ");
       break;
     }
     case btnSELECT:
     {
       lcd.print("SELECT");
       break;
     }
     case btnNONE:
     {

       break;
     }
  }

  milisegundos = millis();
  if(milisegundos % 100 == 0){ //Only enter if it has passed tenth of a second
    decimas++;
    if(decimas == 10){ //When it has passed 10 tenths of a second it count one second
      decimas = 0;
      segundos++;
    }
    if(segundos == 60){ //When it has passed 60 seconds it count one minute
      segundos = 0;
      minutos++;
    }
    if(minutos == 60){ //When it has passed 60 minutes it count one hour
      minutos = 0;
      horas++;
    }
    
    //Print Time
    lcd.setCursor(0,1);
    if(horas < 10){
      lcd.print("0");
    }
    lcd.print(horas);
    lcd.print(":");
    lcd.setCursor(3,1);
    if(minutos < 10){
      lcd.print("0");
    }
    lcd.print(minutos);
    lcd.print(":");
    lcd.setCursor(6,1);
    if(segundos < 10){
      lcd.print("0");
    }
    lcd.print(segundos);
    lcd.print(":");
    lcd.setCursor(9,1);
    lcd.print(decimas);
  }
  
  
}

/** \brief  Realiza la lectura de la entrada analogica y determina según su valor
 *          a que botón hace referencia.
 * \param void
 * \return int: Que representa el botón pulsado
 */
int read_LCD_buttons(void)
{
  int lcd_key = btnNONE; // el valor inicial es NONE
  int adc_key_in = 0;
  adc_key_in = analogRead(0); // lectura de la entrada analogica

  if (adc_key_in > 1000)
    lcd_key = btnNONE; 
  else if (adc_key_in < 50) 
    lcd_key = btnRIGHT;
  else if (adc_key_in < 195) 
    lcd_key = btnUP;
  else if (adc_key_in < 380) 
    lcd_key = btnDOWN;
  else if (adc_key_in < 555)  
    lcd_key = btnLEFT;
  else if (adc_key_in < 790) 
    lcd_key = btnSELECT;

  return lcd_key; 
}
