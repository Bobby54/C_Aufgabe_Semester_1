#include "string_utils.h"
#include <stdio.h>
#include <stdbool.h>

//--------------------------------------num_chars

int num_chars(char input[]){

  int numc = 0;
  
  while(input[numc] != '\0' && input[numc] != 10){

    numc++;

  }

  return numc;

}



//------------------------------------- uppercase



void to_uppercase (char input[]){
  int count = 0;
  while(input[count] != '\0' && input[count] != 10) 
  {
    if(input[count] >= 'a' && input[count] <= 'z')
    {
      input[count] = input[count] - 32;
    }
    count++;
  }

}

//------------------------------------- invert


void invert(char input[]){

  int num_c = num_chars(input);
  char output[num_c + 1]; 
  output[num_c] = '\0';

  if(input[0] == '\0'){

    printf("Kein Text vorhanden.\n");

  }else{

    // input:   a b c \n \0 
    // i:       0 1 2  3  4
    // output:  
   
    for(int i = 0; i < num_c; i++){
      printf("text[%d] = %d\n",num_c-1-i, input[num_c-1-i]); //MF: debug ausgabe
      output[i] = input[num_c-1-i];
    }
    printf("output: %s\n", output);
    for(int x = 0; x < num_c; x++){
     
      input[x] = output[x];
    
    }
    printf("input: %s\n", input);
    
  }

  
}

//----------------------------------num_words


int num_words(char input[]){

  int num_w = 0;
  int i = 0;
  int n = num_chars(input);
  bool k;
  bool l;

  while(i < n){
  
     
    

    if(is_char(input[i]) == true) {

      if(is_char(input[i+1])){
        
        if(n == i + 1){

          return num_w += 1;

        }
        
      }else if(is_char(input[i+1]) == false){

        num_w += 1;
      
      }

    }

    i++;

  }

  return num_w;
  
}

bool is_char(char text){

  char symbol[] = {' ', ',', '.', ';', '-', ':', '?', '!'};
  int i = 0;
  while(i < 8){
    
    if(text == symbol[i]){
  
      return false;

    }else{
      
      i++;

    }

  }

  return true;

}
