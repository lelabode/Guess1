# include <stdio.h>
# include <unistd.h>
# include <time.h>

int main(){
time_t now = time(NULL);
printf("%ld\n",now);
/*sleep(2);
time_t two_sec = time(NULL);
printf("%ld\n",two_sec);
double diff = difftime(two_sec,now);
printf("%f",diff);*/
char *string_now =ctime(&now);
printf("%s\n", string_now);
struct tm *gm_time= gmtime(&now);

printf("tm_sec: %d\n",gm_time->tm_sec);
printf("tm_min: %d\n",gm_time->tm_min);
printf("tm_hour: %d\n",gm_time->tm_hour);
printf("tm_mday: %d\n",gm_time->tm_mday);
printf("tm_mon: %d\n",gm_time->tm_mon);
printf("tm_year: %d\n",gm_time->tm_year);
printf("tm_wday: %d\n",gm_time->tm_wday);
printf("tm_yday: %d\n",gm_time->tm_yday);
printf("tm_isdst: %d\n",gm_time->tm_isdst);
printf("\n");
struct tm *cur_time = localtime(&now);
printf("tm_sec: %d\n",cur_time->tm_sec);
printf("tm_min: %d\n",cur_time->tm_min);
printf("tm_hour: %d\n",cur_time->tm_hour);
printf("tm_mday: %d\n",cur_time->tm_mday);
printf("tm_mon: %d\n",cur_time->tm_mon);
printf("tm_year: %d\n",cur_time->tm_year);
printf("tm_wday: %d\n",cur_time->tm_wday);
printf("tm_yday: %d\n",cur_time->tm_yday);
printf("tm_isdst: %d\n",cur_time->tm_isdst);
char *other_string = asctime(cur_time);
printf("%s\n", other_string);
cur_time->tm_sec = cur_time->tm_sec+1;
time_t new_time = mktime(cur_time);
printf("now:%ld\n", now);
printf("new_time: %ld\n",new_time);
char s[100];
strftime(s,100,"%A %B %d",cur_time);
printf("%s\n",s);
 int strlen = strftime(s,100,"%A %B %d",cur_time);
 printf("%d\n", strlen);
 clock_t start, end;
 start = clock();
 for (int i = 0; i <100000000; i++){}
 end = clock();
  double total = (double) (end-start)/
  CLOCKS_PER_SEC;


 printf("Time:%fs\n",total);

  return 0;
}
