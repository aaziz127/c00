#include<unistd.h>

void ft_print_numbers(void){
  
  char c=47;
  while(++c < 58){
    write(1,&c,sizeof(c));
  }
  write(1,"\n",1);
}

int main(){
  ft_print_numbers();
  return 0;
}
