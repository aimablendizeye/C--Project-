
#include <stdio.h>
#include<math.h>

int main () {

  float free_storage_gb;
  float file_size;
  float free_storage_mb;
  float remaining_space;
  int max_num_file;

  printf("Enter Free Storage in(GB) : " );
  scanf("%f",&free_storage_gb);
  
  printf("Enter file size : " );
  scanf("%f",&file_size);

  if(free_storage_gb < 0 || file_size <=0) {
    printf("\nInvalid input.\n");
    return 1;
  }

   free_storage_mb = free_storage_gb * 1024;
   max_num_file = free_storage_mb / file_size;
   remaining_space = fmodf(free_storage_mb, file_size);

   printf("\nStorage in MB:\t\t%.2f\n", free_storage_mb);
   printf("Maxmum file:\t\t%d\n", max_num_file);
   printf("Remaining Space:\t%.2f\n", remaining_space);



    return 0;
}