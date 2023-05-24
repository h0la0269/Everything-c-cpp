#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *arr;
    int capacity;
    int curr_last_index;
}ADT;

ADT *create(int);
void display(ADT *);
void sort(ADT *);
int search(ADT *, int);
int insert(ADT *, int, int);
int delete_index(ADT *, int);
int delete_element(ADT *, int);

int main()
{
    ADT *a = NULL;
    int n, i, key, index, ch, result;
    printf("Enter the number of elements in the array: ");  scanf("%d",&n);
    printf("Enter the elements: ");
    a = create(n);
    a->curr_last_index = n-1;
    for(i = 0; i < n; i++){
        scanf("%d", &(a->arr[i]));
    }
    while(1){
        printf("******M E N U*****\n");
        printf("Press 1 to view the array.\n");
        printf("Press 2 to sort the array.\n");
        printf("Press 3 to search the array.\n");
        printf("Press 4 insert an element in the array\n");
        printf("Press 5 to delete an element from the array.\n");
        printf("Press 6 to delete an element from a specific index in the array.\n");
        printf("Press 7 to EXIT.\n");
        printf("Enter your choice: ");  scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                display(a);
                break;
            case 2:
                sort(a);
                break;
            case 3:
                printf("Enter the element you want to search: ");   scanf("%d",&key);
                result = search(a, key);
                if(result < 0){
                    printf("\n%d is not present in the array\n", key);
                    break;
                }
                printf("\n%d is present at %d index of the array.\n", key, result);
                break;
            case 4:
                printf("Enter the element you want to insert: ");   scanf("%d",&key);
                printf("Enter the index at which you want to insert: "); scanf("%d",&index);
                result = insert(a, key, index);
                if(result){
                    printf("\nSuccessfully Inserted!\n");
                    break;
                }
                printf("\nInsertion Unsuccessfull!\n");
                break;
            case 5:
                printf("Enter the element you want to delete: ");   scanf("%d",&key);
                result = delete_element(a, key);
                if(result){
                    printf("\nElement succesfully deleted\n");
                    break;
                }
                printf("\nDeletion Unsuccessfull\n");
                break;
            case 6:
                printf("Enter the index of the element you want to delete: ");  scanf("%d",&index);
                result = delete_index(a, index);
                if(result){
                    printf("\nElement at index %d Successfully deleted!\n", index);
                    break;
                }
                printf("\nDeletion Unsuccessfull\n");
                break;
            case 7:
                return 0;
            default:
                printf("\nEnter a Valid Choice!\n");
        }
    }
}

ADT *create(int n){
    ADT *a;
    a = (ADT *)malloc(sizeof(ADT));
    a->capacity = n;
    a->arr = (int *)malloc(sizeof(int) * n);
    a->curr_last_index = -1;
}

void display(ADT *a){
    int i;
    for(i = 0; i <= a->curr_last_index; i++){
        printf("%d ",a->arr[i]);
    }
    printf("\n");
}

void sort(ADT *a){
    int i, j, flag;
    for(i = 1, flag = 1; i < a->curr_last_index && flag == 1; i++){
        for(j = 0, flag = 0; j <= a->curr_last_index - i; j++){
            if(a->arr[j] > a->arr[j+1]){
                a->arr[j] = a->arr[j] ^ a->arr[j+1];
                a->arr[j+1] = a->arr[j] ^ a->arr[j+1];
                a->arr[j] = a->arr[j] ^ a->arr[j+1];
                flag = 1;
            }
        }
    }
}

int search(ADT *a, int key){
    int si = 0, ei = a->curr_last_index, mid;
    while(si <= ei){
        mid = si + (ei - si)/2;
        if(a->arr[mid] == key){
            return mid;
        }
        else if(a->arr[mid] > key){
            ei = mid-1;
        }
        else{
            si = mid+1;
        }
    }
    return -1;
}

int insert(ADT *a, int key, int req_index){
    if((a->capacity-1 == a->curr_last_index) || (req_index - a->curr_last_index > 1) || (req_index < 0)){
        return 0;
    }
    int i = a->curr_last_index + 1;
    while(i > req_index){
        a->arr[i] = a->arr[i-1];
        i--;
    }
    a->arr[i] = key;
    a->curr_last_index++;
    return 1;
}

int delete_index(ADT *a, int req_index){
    if(req_index < 0 || req_index > a->curr_last_index){
        return 0;
    }
    while(req_index < a->curr_last_index){
        a->arr[req_index] = a->arr[req_index + 1];
        req_index++;
    }
    a->curr_last_index--;
    return 1;
}

int delete_element(ADT *a, int key){
    int index = search(a, key);
    if(index >= 0){
        delete_index(a, index);
        return 1;
    }
    return 0;
}