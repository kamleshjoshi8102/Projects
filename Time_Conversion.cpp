#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='P')
        {
            if((s[0]=='1')&&(s[1]=='2'))
            {
            break;
            }
            else{
            s[0]=s[0]+1;
            s[1]=s[1]+2;
            break;
            }
        }
        else if(s[i]=='A')
            {
                if(s[0]=='1'&&s[1]=='2')
                {
             s[0]='0';
            s[1]='0';
            break;
            }
    }
    }
    s.pop_back(); //Last Element popped 
    s.pop_back(); //Last Element popped
    return s;

}

int main()
{
    

    string s;
    cout<<"\n Enter Time as follow (HH:MM:SSXX) "; //HERE XX IS THE AM OR PM
    getline(cin, s);
    string time = timeConversion(s);

    cout <<"\n The Coverted Format is "<< time << "\n";

    

    return 0;
}
