#include<iostream>
#include<cstdlib>

using namespace std ;

int main(){

 cout<<"MAGIC 8-BALL :"<<endl ;

 cout<<"\n" ;

 srand(time(NULL));

   int answer  ;
   answer = std::rand()%10 ;


 cout<<answer<<endl;

  if (answer == 0){
    
    cout<<"It is certain" <<endl ;
}
 else if (answer == 1){

 cout<<"Very doubtful\n";
}
 else if (answer == 2){

 cout<<"It is decidely so.\n";
}
 else if(answer == 3){
  
  cout<<" Yes - definitely\n";
}
 else if (answer == 4){
 
 cout<<"You may rely on it\n";
}
 else if (answer == 5){
 
 cout<<"As I see it , yes.\n";
}
 else if (answer == 6){
 
 cout<<"Most likely\n" ;
}
 else if (answer == 7){

 cout<<"Outlook good.\n";
}

 else if (answer == 8){
     cout<<"yes.\n";
}
 else if(answer == 9){
  
   cout <<"Signs point to yes\n" ;
}

 else if (answer == 10){
  
  cout<<"Ask again later.\n";
 }
 else{

   cout<<"Cannot predict now ";
 }

 return 0  ;


}



