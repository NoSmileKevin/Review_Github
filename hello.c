#include <stdio.h>
void main(){
	printf("Hello World\n");
	printf("There is only one World\n");
	int class_num = 288;
	char my_array[10];
	char another_array[10] = "Goodbye";
	sprintf(my_array, "Hello CPRE %d", class_num);
	printf("%s", another_array);
}
