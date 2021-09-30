

void add ();
void sub ();
void mul ();
void div ();
void sqr ();
void prime_factorization ();
void factorial ();
void sel_func (int);


           if (s > 7 | s < 1){
                  printf("Please input again\n");
                  goto Input;
           }
           sel_func (s);
    
           goto Input;
}

void sel_func (int s)
{
        void (*fptr)(void);
        switch (s){
        case 1:
                fptr = add;
                break;
        case 2:
                fptr = sub;
                break;
        case 3:
                fptr = mul;
                break;
        case 4:
                fptr = div;
                break;
        case 5:
                fptr = sqr;
                break;
        case 6:
                fptr = prime_factorization;
                break;
        case 7:
                fptr = factorial;
                break;        
        }
    
        fptr();
}

void add ()
{
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a + b);
}

void sub ()
{
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n" , a - b);
}

