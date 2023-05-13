// Nadhif Fauzil Adhim
//22.11.5035 
//Tugas sorting 
//Informatika 08


#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
using namespace std;
int main (){
	
	const int SIZE = 500;
	int src_data[SIZE];
	
	srand(time(NULL));
	for (int i =0; i<SIZE; i++){
		src_data[i] = rand () % 1000;
	}
	
	for (int s : src_data) {
		cout << "Generate random data: ";
		cout << s <<" " << endl;
	}
	Sleep(3000);
	system("cls");
	int dst_data[SIZE];
	
	//Bubble Short

	copy(begin(src_data), end(src_data), begin(dst_data));
	cout <<"Metode Bubble sort " <<endl;
	auto time_start = time(NULL);
	
 int temp;
 for (int i = 0; i < SIZE-1; i++)
    {
      for (int j = i+1; j < SIZE; j++)
     {
        if (dst_data[i]>dst_data[j])
        {
            temp = dst_data[i];
            dst_data[i]=dst_data[j];
            dst_data[j]=temp;
			Sleep(0.5);
        }   

		Sleep(0.5);
     }
	 Sleep(0.5);
    }

	auto time_stop = time(NULL);
	auto diff_time = time_stop - time_start;
	cout << "Waktu sorting adalah : "<< diff_time << endl;

     //selectionsort
	copy(begin(src_data), end(src_data), begin(dst_data)); 
	cout <<"Metode Selection sort " <<endl;
	auto time_start2 = time(NULL);
  int loc_min;
  for(int i = 0; i < SIZE; i++){
    loc_min = i;
    for (int j = i; j < SIZE; j++){
      if (dst_data[j] < dst_data[loc_min]){
       loc_min = j;
	   Sleep(0.5);
     }
	 Sleep(0.5);
   }
   temp = dst_data[i];
   dst_data[i] = dst_data[loc_min];
   dst_data[loc_min] = temp;
  } 


	auto time_stop2 = time(NULL);
	auto diff_time2 = time_stop2 - time_start2;
	cout << "Waktu sorting adalah : "<< diff_time2 << endl;

copy(begin(src_data), end(src_data), begin(dst_data));
	cout <<"Metode inserection sort " <<endl;
	auto time_start3 = time(NULL);

for(int i = 1; i < SIZE; ++i) 
 { 
 int m = dst_data[i]; 
 int s = i; 
 while(s >= 0 && m < dst_data[s - 1]) 
 { 
 dst_data[s] = dst_data[s]; 
 Sleep(0.5); 
 } 
 
 dst_data[s] = m; 
 Sleep(0.5); 
 } 	


	
auto time_stop3 = time(NULL);
	auto diff_time3 = time_stop3 - time_start3;
	cout << "Waktu sorting adalah : "<< diff_time3 << endl;
}
