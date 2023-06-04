//1
#include <iostream>
int main()
{
int number{0};
std::cout<<"number: ",std::cin>>number;
int sum{0};
while(number != 0){
    sum += number%10;
    number = (number - (number% 10))/10;
}
std::cout<<"digit sum: "<<sum<<std::endl;
return 0;
} 

//2

#include <iostream>
int main()
{
int number{0};
std::cout<<"number: ",std::cin>>number;
int sum{0};
int p{1};
while(number != 0){
    p *= number%10;
    sum += number%10;
    number = (number - (number% 10))/10;
}
std::cout<<"digits multiplication - sum: "<<p-sum<<std::endl;
return 0;
} 

//3

#include <iostream>
int numberOddCounts(int a, int b);
int main()
{
  int a{0};
  int b{0};
  std::cout<<"a: "; std::cin>>a;
  std::cout<<"b: "; std::cin>>b;
  if(a < b){
    int count = numberOddCounts(a , b);
    std::cout<<"odd count: "<<count<<std::endl;
    }else{
        std::cout<<"a must be less than b"<<std::endl;
        return -1;
    }
  return 0;
}
int numberOddCounts(int a, int b)
{
 int count = 0;
 for(int i = a; i <= b; ++i){
     if(i % 2 != 0){
         std::cout<<i<<std::endl;
         count++;
         }
     }
     return count;
}

//4


#include <iostream>
#include <vector>


int main()
{ 
  int count{0};
  std::vector<int> arr = {4, 1, 3, 3, 4};
  for(int i = 1; i < arr.size(); ++i){
      if(arr[i] % i == 0){
          count++;
          }
      }
  std::cout<<"the number of array members that are divisible by their index without remainder: "<<count<<std::endl;
  return 0;
}

