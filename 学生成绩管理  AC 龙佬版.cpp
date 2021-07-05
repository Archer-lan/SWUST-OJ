#include<stdio.h>
struct student {
    long id;
    char classes[15];
    char name[10];
    float score[3];
    float p;
};
student t;
student stu[1000];
void read(int N);
void p(int N);
void search(int N);
int main() {
    int N;
    scanf("%d",&N);
    read(N);
    p(N);
    search(N);
    for(int i=0; i<N; i++) {
        printf("%s %.1f\n",stu[i].name,stu[i].p);
    }
    printf("%ld %s %s %.1f %.1f %.1f %.1f\n"
           ,t.id,t.classes,t.name,t.score[0],t.score[1],t.score[2],t.p);
    return 0;
}
void read(int N) {
    for(int i=0; i<N; i++) {
        scanf("%ld%s%s%f%f%f",&stu[i].id,stu[i].classes,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
    }
}
void p(int N) {
    for(int i=0; i<N; i++) {
        stu[i].p=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3;
    }
}
void search(int N) {
    t=stu[0];
    for(int i=1; i<N; i++) {
        if(t.p<stu[i].p) {
            t=stu[i];
        }
    }
}

