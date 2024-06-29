//a simple to-do list project with add view and deletion of task.

#include<iostream>
#include<windows.h>
#include<string>
#include<cstdio>

using namespace std;

void adding(string arr[1000],string task){
	
	int index;
	for(int i=0;i<1000;i++){
		if(arr[i] == "0"){
			index=i;
			break;
		}
	}
	arr[index]=task;
	
}

void deleting(string arr[1000],int no){
	no--;
	//arr[no]=" ";
	
	for(int i=no;i<1000;i++){
		if(arr[i] == "0"){
			break;
		}
		arr[i]=arr[i+1];
	}
	
}

void listing(string arr[1000]){
	
	for(int i=0;i<1000;i++){
		if(arr[i] == "0"){
			break;
		}else{
			cout<<i+1<<". "<<arr[i]<<endl;
		}
	}
	
}


int main(){
	
	
int ch;
string arr[1000];

for(int i=0;i<1000;i++){
	arr[i]="0";
}

while(1){
	
	
	cout<<"Press 1 to View all Tasks"<<endl;
	cout<<"Press 2 to add a new Task"<<endl;
	cout<<"Press 3 to Delete a Task"<<endl;
	cout<<"Press 0 Close the app"<<endl;
	
	cin>>ch;
	
	if(ch == 1){
		cout<<endl;
		listing(arr);
		cout<<endl<<endl;
		cout<<"Enter 1 to clear screen : ";
		char choice;
		cin>>choice;
		system("cls");
	}else if(ch == 2){
		string task;
		cout<<endl;
		cout<<"Enter Your Task = ";
		fflush(stdin);
		getline(cin,task);
		fflush(stdin);
		adding(arr,task);
		system("cls");
	}else if(ch == 3){
		int no;
		cout<<endl;
		cout<<"Enter Task No = ";
		cin>>no;
		deleting(arr,no);
		system("cls");
	}else if(ch == 0){
		break;
	}else{
		cout<<"You have Entered a Invalid Option!"<<endl;	
	}
	
	
	
}	
	
	
	
}
