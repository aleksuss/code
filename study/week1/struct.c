#include <stdio.h>

struct user {
    char *name;
    char *sername;
    int age;  
};

int main() {
    struct user me;
    
    //printf("Enter you name: ");
    //scanf("%s", me.name);
    me.name = "Spiky";
    me.sername = "Doggy";
    me.age = 25;
    printf("Hello, %s ! U're %s ! And u're %d\n", me.name, me.sername, me.age);
}