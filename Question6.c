#include<stdio.h>
#define SIZE 5
struct Quene{
	int font;
	int rear;
	int que[SIZE];
}q;
void unit(){
	q.rear = q.font -1;	
}
int Full(){
	if(q.rear >= SIZE- 1)
	return 1;
	else 
	return 0;
}

int Empty(){
	if((q.font ==-1)||(q.font > q.rear))
	return 1;
	else 
	return 0;
}
int Insert(int item){
	if(q.font==-1)
       q.font++;
	   q.que[++q.rear]= item;
	   return q.rear;
}
int Delete(){
	int item;
	item=q.que[q.font];
	q.font++;
	printf("in this delected item %d", item);
	return q.font;
	
}
void Display(){
	int i;
	for(i = q.font; i <=q.rear; i++){
		printf(" %d \n", q.que[i]);
	}
}
int main(){
	unit();
    Insert(58);
	Insert(89);
	Insert(90);
	Insert(100);
	Display();
	Delete();
	Display();

	return 0;
}


