//////////////////////////////////////////////////////////////
// 
// Name:        A2Q3.c
// Description: Program to print "Hello' otherwise print "Demo"
// Author:      Pradhumnya Changdev Kalsait
// Assignment:  Assignement 2 Question 3
// Date:        09-05-25
// 
////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello...\n");
    }
    else
    {
        printf("Demo...\n")
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number: ");
    scanf("%d", &iValue);
    
    Display(iValue);
    
    return 0;
}