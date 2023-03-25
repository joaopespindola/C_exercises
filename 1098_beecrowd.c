int main(){
    int i,j;
    double x;
    x=0;
    for(i=0;i<11;i++){
        j=1;
        if(i==0||i==5||i==10){
            printf("I=%d J=%d\n",(int)(i*0.2),(int)(i*0.2)+j++);
            printf("I=%d J=%d\n",(int)(i*0.2),(int)(i*0.2)+j++);
            printf("I=%d J=%d\n",(int)(i*0.2),(int)(i*0.2)+j);
        }
        else {
            printf("I=%.1lf J=%.1lf\n",x,x+j++);
            printf("I=%.1lf J=%.1lf\n",x,x+j++);
            printf("I=%.1lf J=%.1lf\n",x,x+j);
        }
        x = x + 0.2;
    }
    return 0;
}