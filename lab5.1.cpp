#include<iostream>
#include<cstring>
using namespace std;

void comparestrings(char *array1, char *array2, int array_size){
	
	int flag =0;
	int i=1;
	
	while(i<array_size){
		if(array1[i] != array2[1]){
			flag = 0;
			break;
		}
	i++;	
	}
	if(flag = 1){
		cout<<"Both strings are same !"<<endl;}
	else {
		cout<<"Both strings are not same!"<<endl;
		
	}	
	
	}

int main(){
	char first_array[20];
	char second_array[20];
	
	cout<<"Enter first name : ";
	cin.getline(first_array, sizeof(first_array));
	
	cout<<"\nEnter second name : ";
	cin.getline(second_array, sizeof(second_array));
	
	if(strlen(first_array) == strlen(second_array))
	{
		int array_size = strlen(first_array);
		comparestrings(first_array,second_array,array_size);
		
	}
	else{
		cout<<"Size of both strings are not same !"<<endl;
		
	}
	return 0;
}
