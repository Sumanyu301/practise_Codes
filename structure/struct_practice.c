// design a structure to represent customer and create an array of structures for nearby 
// stores develop a c program that utilizes the pythagorian theoram calculate distances 
// the closest store for the customers to place their orders

#include <stdio.h>
#include <math.h>
#include <limits.h>

struct distance {
    char name[20];
    int x;
    int y;
};

int shortest_distance(struct distance arr[], int a, int b) {
    int min_distance = INT_MAX;
    int x=0;
    for (int i = 0; i < 4; i++) {
        int distance = sqrt((arr[i].x - a) * (arr[i].x - a) + (arr[i].y - b) * (arr[i].y - b));
        if (distance < min_distance) {
            min_distance = distance;
            x=i;
        }
    }
    printf("NAME of the hotel = %s",arr[x].name);
    return min_distance;
}

int main() {
    struct distance arr[4];
    arr[0] = (struct distance){"a", 2, 3};
    arr[1] = (struct distance){"b", 7,  9};
    arr[2] = (struct distance){"c", 13, 14};
    arr[3] = (struct distance){"d", 93, 17};
    int a ;
    int b ;
    printf("the coordinates of customer = ");
    scanf("%d %d",&a,&b);
    int closest_dist = shortest_distance(arr, a, b);
    printf("\n");
    printf("%d", closest_dist);
    return 0;
}
