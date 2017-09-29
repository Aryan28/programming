#include<stdio.h>


struct image{
	int x,y;
	int height, width;
};

void getinput(struct image *ptr){
	printf("enter the coordinates for the image: x and y\n");
	scanf("%d", &ptr->x);
	scanf("%d", &ptr->y);
	printf("enter the dimensions for the image: height and width\n");
	scanf("%d", &ptr->height);
	scanf("%d", &ptr->width);
	
}

void main()
{
	int i;
	int option, index;
	struct image img[3];
	for(i=0;i<3;i++){
		getinput(&img[i]);
		//printf("(x,y) of image %d:(%d, %d)\n", i+1, img[i].x,img[i].y);
		//printf("height and width: %dx%d\n", img[i].height, img[i].width);
	}
	printf("enter 1 to resize and 2 to move");
	scanf("%d",&option);
	if(option==1){
		
		printf("enter the image number to be resized:");
		scanf("%d",&index);
		index=index-1;
		printf("enter the height and width of the image to resize:\n");
		scanf("%d", &img[index].height);
		scanf("%d", &img[index].width);
		printf("(x,y) of image %d:(%d, %d)\n", index+1, img[index].x,img[index].y);
		printf("height and width: %dx%d\n", img[index].height, img[index].width);

	}
	else if(option==2){

		printf("enter the image number to be moved");
		scanf("%d",&index);
		index=index-1;
		printf("enter the x and y of the image to move:\n");
		scanf("%d", &img[index].x);
		scanf("%d", &img[index].y);
		printf("(x,y) of image %d:(%d, %d)\n", index+1, img[index].x,img[index].y);
		printf("height and width: %dx%d\n", img[index].height, img[index].width);

	}
	else{
		printf("\nyou didn't enter a valid option");
	}

	
}