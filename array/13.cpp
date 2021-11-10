#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    getchar();
    int num = 0;
    int alpha = 0;
    int blank = 0;
    int ascll = 0;
    for (int i=0;i<n;i++){
        char str[80];
        scanf("%[^\n]",&str);
        getchar();
        for (int j=0;j<strlen(str);j++){
            if(str[j]>='0' && str[j]<='9'){
                num+=1;
            }
            else if ((str[j]>='a' && str[j]<='z') || (str[j]>='A' && str[j]<='Z')){
                alpha+=1;
            }
            else {
                ascll+=1;
            }
			if (str[j]==' ') blank+=1;
        }
    }
    cout<<"英文字母："<<alpha<<endl<<"数字："<<num<<endl<<"其他字符："<<ascll-blank;
    return 0;
}
