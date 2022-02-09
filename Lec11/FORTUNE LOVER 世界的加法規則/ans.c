void addition(){
    int a,b;
	scanf("%d%d", &a,&b);
    float aa = (float)a,bb = (float)b;
    printf("   ");
    print_binary(&aa);
    printf("\n");
    printf("+) ");
    print_binary(&bb);
    printf("\n");
    printf("---------------------------------------\n");
    int ans = *(int *)&aa + *(int *)&bb;
    printf("   ");
    print_binary(&ans);
    printf("\n");
    printf("%d + %d = %d", a, b, ans);
}