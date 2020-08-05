#include<stdio.h>

void main(){
  char *titles[] = {"A tale of Two cities","wuthering heights","don quixote","odyssey","moby-dick","hamlet","gulliver's travels"};
  char **bestBooks[3];
  char **englishBooks[4];
  bestBooks[0]=&titles[0];
  bestBooks[1]=&titles[3];
  bestBooks[2]=&titles[5];

  englishBooks[0]=&titles[0];
  englishBooks[1]=&titles[1];
  englishBooks[2]=&titles[5];
  englishBooks[3]=&titles[6];

  printf("%s\n%s\n",*englishBooks[1],*(titles+1));
}
