#include <iostream>
void s(int n){for(int i=0;i<n;i++){std::cout<<" ";}}
void a(int n){for(int i=0;i<n;i++){std::cout<<"*";}}
void l(){std::cout<<std::endl;}
void o(int n){s(n+52);a(9);l();s(n+5);a(3);s(53);a(3);l();s(n+7);a(5);s(45);a(2);s(2);a(3);l();s(n+10);a(7);s(33);a(7);s(3);a(2);l();s(n+14);a(14);s(12);a(13);s(6);a(2);l();s(n+18);a(30);s(10);a(1);l();s(n+25);a(16);l();l();l();}
int main(){o(0);o(10);o(20);return 0;}
