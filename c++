#include<iostream>
#include<cstdlib>

/* Rock peper scissors lizard spock
(The Big Bang Theory)
*/

using namespace std ;

int main(){

srand (time(NULL));

int rand = std:: rand() % 5 + 1 ;

 int User=0 ;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) rock \n";
std::cout << "2) paper \n";
std::cout << "3) scissors \n";
std::cout<<"  4) lizard \n";
std::cout<<"  5) spock \n";

std::cout <<" shoot! \n";

std::cin>> User ;

if(User==rand){

std::cout<<"we got no winner try again\n";

}else if(User==3 && rand==2||User== 2 && rand==1||
        User==1 && rand==4||User==4 && rand==5|| 
        User==5 && rand==3|| User==3 && rand==4|| 
        User==4 && rand==2|| User==2 && rand==5|
        |User==5 && rand==1||User==1 && rand==3){

  std::cout<<"You The User are the winner\n";

  std::cout<<rand<<endl ;
}else {

  std::cout<<"I'm the winner ! \n " ;

  std::cout<<rand<<endl ;

}

return 0 ;

}
