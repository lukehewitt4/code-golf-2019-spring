#include<string>
#include<iostream>
void l(std::string p){std::cout<<p<<std::endl;}
void p(std::string n){int a=n.length();if(a==1){l(n);}else if(a> 1){l(n);p(n.substr(0,a-1));l(n);}}
int main(){p("JAVA");}