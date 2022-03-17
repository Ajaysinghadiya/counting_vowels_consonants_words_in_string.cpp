#include<iostream>
using namespace std;

int main()
{
    char str[]="how are you";//String as the input
    int vcount=0,ccount=0;//Initialising the variable vcount and c count by 0 
    int word=1;//Initialising the variable word to count the number of word in a given string by 1
    for(int i=0;str[i]!='\0';i++)//Going through the complete string 
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')/*
        Checking whether the present element or character is a vovel or not*/
        {
            vcount++;//If it is a vowel then increase it by one
        }
        else if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))//If it is a consonant then increase by one
        {
            ccount++;
        }
    }

    cout<<"So,the number of vowels in this string are :"<< vcount<<endl;
    cout<<"and the number of consonants in this string are :"<< ccount<<endl;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ' && str[i-1]!=' ')//For checking the number of word in the string by checking that whether the present character is a space or not and the previous element must not be a space as well
        {
            word++;
        }
    }

    cout<<"The number of words are :"<< word<<endl;

    return 0;
}
