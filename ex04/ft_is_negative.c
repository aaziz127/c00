#include<unistd.h>

void ft_is_negative(int n){
  char c;
  (n<0)? (c='N') : (c='P');
  write(1,&c,1);
  write(1,"\n",1);
}

int main(){
  int n=-1;
  int p=4;
  int pn=0;
  ft_is_negative(n);
  ft_is_negative(p);
  ft_is_negative(pn);
  return 0;
}
