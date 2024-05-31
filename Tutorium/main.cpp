#include <iostream>

typedef struct {
    char option ;
    unsigned votes ;
} poll_t ;

void print_poll_chart(poll_t poll_data[], unsigned nr) {

    int max = 0;

    for(int i = 0; i < nr; i++){
        if(max < poll_data[i].votes){
            max = poll_data[i].votes;
        }
        printf("option %c:", poll_data[i].option);
        int prozentual = poll_data[i].votes*30/100;
        for(int y = 0; y < prozentual; y++){
            printf("#");
        }


        printf("\n");
    }
}

int main() {
    poll_t poll_data [] = {{ 'A', 100} , {'B', 50} , {'C', 75}};

    print_poll_chart(poll_data, 3);

    return 0;
}



