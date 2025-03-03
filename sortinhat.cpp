#include<iostream>
#include<cstdlib>

using namespace std ;

int main(){

  int answer1 , answer2 , answer3 ,answer4 ;
  std::string house ;
  int gryffindor = 0, hufflepuff=0 ,slytherin=0, ravenclaw=0;

  cout<<"The Sorting Hat Quizz !"<<endl;
  
  std ::cout << " Q1) When I'm dead , I want people to remember me as : "<<endl ;

  cout<< "       1) The Good "<<endl ;
  cout<<"        2) The Great"<<endl ;
  cout<<"        3) The wise"<<endl ;
  cout<<"        4) The Bold"<<endl ;

  cin>>answer1 ;

  if(answer1==1){

    chufflepuff = 1 ;
  }else if (answer1 == 2){

    slytherin = 1  ;
  }else if(answer1==3){

    ravenclaw= 1 ;
  }else if (answer1==4){

    gryffindor=1;
  }else{

    cout<<"Invalide input "<<endl ;
  }
  cout<<"Q2) Dawn or Dusk ?"<<endl ;

  cout<<"  1)  Drawn"<<endl ;

  cout<<"  2)  Drusk"<<endl ;

  cin>>answer2:

  if( answer2==1){

    gryffindor=gryffindor +1 ;

    ravenclaw=ravenclaw+1;

  }else if (answer2== 2){

    hufflepuff=hufflepuff+1 ;

    slytherin= slytherin+1 ;
  }else {

    cout<<"Invalide" ;
  }
  cout<<" Q3) which kind of instrument most pleases your ear ?";

  cout<<"    1) The violin"<<endl ;

  cout<<"    2) The trumpet"<<endl ;

  cout<<"    3) The piano"<<endl ;

  cout<<"    4) The drum "<<endl ;

  cin>> answer3 ;

  if (answer3==1){

    slytherin=slytherin+1 ;

  } else if (answer3==2){

   hufflepuff=hufflepuff+1 ;

  } else if(answer3==3){

 ravenclaw= ravenclaw+1 ;

  }else if (answer3==4){

    gryffindor=gryffindor+1 ;
  }else {

    cout<<" Invalid input"<<endl ;
  }

cout<<" Q4) which road tempt you most ?"<<endl ;

cout<<" 1) The wide , sunny grassy lane "<<endl ;

cout<<" 2) The narrow , dark , lanternlit alley"<<endl ;


cout<<" 3) The twisting , leaf-strewn path through woods "<<endl ;

cout<<" 4) The cobbled street lined (ancient builidings)"<<endl;

cin>>answer4 ;

if (answer4==1){
    
    hufflepuff=hufflepuff+1 ;

}else if (answer4==2 ){

  slytherin= slytherin+1 ;

}else if(answer4==3){

  gryffindor=gryffindor ;

}else if (answer4 == 4){

 ravenclaw= ravenclaw + 1;
}else{

  cout<<"Invalid input"<<endl ;
}
if(gryffindor > max){

  max = gryffindor ;
  house = "Gryffindor";
}
if(hufflepuff > max ){

  max=hufflepuff ;
  house="Hufflepuff";
}
if(ravenclaw >max){

  max=ravenclaw;
  house="Ravenclaw";
}
if(slytherin > max){

  max = slytherin ;
  house="Slytherin";
}
std::cout<<house<<"!\n";

  return 0 ;
}