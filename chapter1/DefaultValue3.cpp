#include<iostream>

int BoxVolume(int length,int width=1, int height=1);

int main(void)
{
    printf("3,3,3 : %d \n",BoxVolume(3,3,3));
    printf("5,5,D : %d\n",BoxVolume(5,5));
    printf("7,D,D : %d\n",BoxVolume(7));
    // printf("D,D,D : %d\n",BoxVolume());
    return 0;
}

int BoxVolume(int length,int width, int height)
{
    return length*width*height;
}