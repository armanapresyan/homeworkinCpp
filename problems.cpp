//1.calculator
#include <iostream>
#include <map>

int sum(int a, int b){
  return a + b;
}

int sub(int a, int b){
  return a - b;
}

int mul(int a, int b){
  return a * b;
}

int division(int a, int b){
  return a / b;
}


int main(){
  char ch;
  std::cout<<"inputs operation  character : "; std::cin>>ch;
  int a{0};
  int b{0};
  std::cout<<"input a : "; std::cin>>a;
  std::cout<<"input b : "; std::cin>>b;

  std::map <char, int(*)(int , int)> calculator;

  calculator['+'] = sum;
  calculator['-'] = sub;
  calculator['*'] = mul;
  calculator['/'] = division;

  int res = calculator[ch](a, b);

  std::cout<<"result : "<<res<<std::endl;
  return 0;

}

//2.even or odd


#include <iostream>

int main(){
 int number{0};
 std::cout<<"input number : "; std::cin>>number;

 if(number % 2 == 0){
  std::cout<<"the number entered is even"<<std::endl;
 }else{
  std::cout<<"the number entered is odd"<<std::endl;
 }

 return 0;

}


//3.Celsius to Fahrenheit

#include <iostream>

int main(){
  double celsius{0};
  std::cout<<"input the temperature in Celsius : "; std::cin>>celsius;
  double fahrenheit = (celsius * 9/5) + 32;

  std::cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << std::endl;

  return 0;

}

//4.Largest Number

#include <iostream>

int main(){
  int a{0};
  int b{0};
  int c{0};
  std::cout<<"input number one : "; std::cin>>a;
  std::cout<<"input number two : "; std::cin>>b;
  std::cout<<"input number three : "; std::cin>>c;

  int max = a;

  if(b > max){
    max = b;
  }else if(c > max){
    max = c;
  }

  std::cout<<max<<" is the largest number"<<std::endl;
  return 0;

}


//5.Fibonacci

#include <iostream>

void fibonacci (int number){
  int first = 0;
  int second = 1;

  if(number >= 1){
    std::cout<<first;
  }


  for(int i = 2; i <= number; ++i){
    std::cout<<" "<<second;
    int next = first + second;
    first = second;
    second = next;
  }
}

int main(){
  int number{0};

  std::cout<<"please input number : "; std::cin>>number;
  fibonacci(number);

  return 0;

}


//6. Maximum Element in an Array

#include <iostream>

int maxElement(int* arr, int size){
  int max = arr[0];
  for(int i = 1; i < size; ++i){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}

int main(){
  int size{0};
  std::cout<<"input array size : "; std::cin>>size;
  int * arr = new int[size];
  std::cout<<"input array elemnt : "<<std::endl;
   for(int i = 0; i < size; ++i){
    std::cin>>arr[i];
   }

   int res = maxElement(arr, size);

   std::cout<<"is the largest element of the array : "<<res<<std::endl;
   delete[] arr;
   return 0;

}

//7. Average of a List of Numbers

#include <iostream>

int average(int* arr, int size){
  int sum{0};
  for(int i = 0; i < size; ++i){
   sum += arr[i];
  }

  return sum/size;
}

int main(){
  int size{0};
  std::cout<<"input array size : "; std::cin>>size;
  int * arr = new int[size];
  std::cout<<"input array elemnt : "<<std::endl;
   for(int i = 0; i < size; ++i){
    std::cin>>arr[i];
   }

   int res = average(arr, size);

   std::cout<<"the average of the given list is equal : "<<res<<std::endl;
   delete[] arr;
   return 0;

}

//8. Multiples of 3 or 5 [Euler 1]


#include <iostream>

int main(){
  int number{0};
  std::cout<<"input please number : "; std::cin>>number;
  int sum{0};
  for(int i = 1; i < number; ++i){
    if(i % 3 == 0 || i % 5 == 0){
     sum += i;
    }
  }

  std::cout <<"The sum of multiples of 3 or 5 below " << number << " is: " << sum << std::endl;
  return 0;

}

//9. Sum Up to N

#include <iostream>

int main(){
  int number{0};
  std::cout<<"please input number : "; std::cin>>number;
  int sum{0};

  for(int i = 1; i <= number; ++i){
    sum += i;
  }

  std::cout<<"Sum Up to Number : "<<sum<<std::endl;
  return 0;

}

//10. Pangram

#include <iostream>
#include <string>

bool isPangram(std::string& str){
   bool letters[26] = {false};
   
   for(int i = 0; i < str.size(); ++i){
        char lowercase = std::tolower(str[i]);
        letters[lowercase - 'a'] = true;
        
   }

   for(bool letter : letters){
    if(!letter){
      return false;
    }
   }
  return true;
}

int main(){
  
  std::string str;
  std::cout<<"please Enter a sentence : "; std::cin>>str;

  if(isPangram(str)){
    std::cout<<"The sentence is a pangram." << std::endl;
  }else{
     std::cout << "The sentence is not a pangram." << std::endl;
  }

return 0;

}

//11.Vowel Counter

#include <iostream>

int counterVowel(std::string& str){
  int counter{0};
 
  for(int i = 0; i < str.size(); ++i){
    char lowercase = std::tolower(str[i]);
    if(lowercase =='a' || lowercase  == 'e' || lowercase  == 'i' || lowercase  =='o' || lowercase  == 'u'){
      counter++;
    }
  }
  return counter;
}


int main(){
  
  std::string str;
  std::cout<<"please Enter a sentence : "; std::cin>>str;
  int res = counterVowel(str);

  std::cout<<"count of Vowel : "<<res<<std::endl;

  return 0;
}

//12.Longest Word

#include <iostream>
#include <map>
#include <string>

int main(){
  std::string str;
  std::cout<<"please enter a sentence: "; 
  std::getline(std::cin, str);

  std::string word;
  
  int length = 0;
  int size = str.size();

  std::map<std::string, int> wordLength;
  for(int i = 0; i < size; ++i){
    if(str[i] == ' ' || i == size - 1){
     wordLength[word] = length;
     word = "";
     length = 0;
    }
    if(str[i] != ' '){
      word += str[i];
      length++;
      
  }

}
  
  int largestValue = 0;
  for (auto pair : wordLength) {
    if (pair.second > largestValue) {
      largestValue = pair.second;
    }
  }

  std::cout<<"is the length of the longest word "<< largestValue<<std::endl;

  return 0;
}





