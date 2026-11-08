#include <cmath>
#include <iostream>
#include <vector>
struct S{double x,v;};
S truth(S s,double u){return {s.x+s.v,.92*s.v+.25*u-.03*std::tanh(s.x)};}
S model(S s,double u){return {s.x+s.v,.92*s.v+.25*u};}
int main(){for(double action:{-1.,0.,1.}){S a{.2,.1},b=a;double err=0;for(int t=0;t<30;++t){a=truth(a,action);b=model(b,action);err+=(a.x-b.x)*(a.x-b.x)+(a.v-b.v)*(a.v-b.v);}std::cout<<"intervention="<<action<<" horizon=30 rollout_rmse="<<std::sqrt(err/60)<<"\n";}}
