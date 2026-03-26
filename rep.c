# include <stdio.h>
 typedef enum {
  Success,Failure,Pending
}Status;
void connectStaus(Status status);

int main(){
 Status status = Success;
connectStaus(status);


  return 0;
}
void connectStaus(Status status){
  switch(status){
      case Success:
           printf("Connection was successful!");
           break;
      case Failure:
           printf("Connection failed!");
           break;
      case Pending:
           printf("Still waiting");
           break;
  }

}
