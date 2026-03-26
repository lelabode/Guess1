# include <stdio.h>
typedef enum{
  SUCCESS,FAILURE,PENDING
}Status;
void connectionStatus(Status staus);



int main(){
Status status =PENDING ;
connectionStatus(status);


  return 0;
}
void connectionStatus(Status status){
  switch(status){
    case SUCCESS:
         printf("Successfully connected");
         break;
    case FAILURE:
         printf("Not connected");
         break;
    case PENDING:
         printf("Waiting for conection");
         break;

  }
}
