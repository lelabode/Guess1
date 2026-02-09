# include<stdio.h>

int main(){
/*FILE *pF = fopen("test.txt", "w");
fprintf(pF, "SPONGEBOB SQARE PANTS");

fclose(pF);
*/
if(remove("test.txt")==0){
  printf("That file has deleted successfully!");
}
else{

  printf("That file was not deleted!");
}



  return 0;
}
