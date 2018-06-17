#include "stringReverse.h"
#include <stdio.h>

int FindStrLength (char *str){
  int i=0;
  while(str[i]!= '\0'){
    i++;
  }
  return i;	//the length is from 0-8 in an array but will output 9 character
}


char *reverseString(char *str){
    int len = FindStrLength(str);
	char *result= (char *)malloc((len)*sizeof(char));
	printf("len from strlength %d\n",len);
	len--;	//since character is fill from 0-8 array, must minus 1 from FindStrLength will have value of 9
	printf("len from strlength %d\n",len);
	int i=len;
    while (i>=0)
    {
      result[len-i] = str[i];
	  i--;
    }
	result[len+1]='\0';
    return result;
}
