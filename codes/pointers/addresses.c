main()
{
    int i = 0;
    int *p = &i;
    //*p = 123;
    //for( ; ; )
    //{/
        //printf("%p\n", i++);
    //}
    for ( ; ; )
    {
        p++;
        (*p)++;
        printf("%d", i);
        printf("%d", *(p));
    }
}
