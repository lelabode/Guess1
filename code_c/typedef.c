# include <stdio.h>

#include <string.h>

typedef struct{
char name[25];
char password[12];
int id;

}User;

int main(){
User user1={"BEEN", "password123",123};
User user2 = { "Michael", "password456", 345};
printf("%s\n",user1.name);
printf("%s\n", user1.password);
printf("%d\n", user1.id);
printf("\n");
printf("%s\n", user2.name);
printf("%s\n", user2.password);
printf("%d", user2.id);



  return 0;
}
