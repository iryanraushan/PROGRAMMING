#include <iostream>

using namespace std;

int main(){

    int  index;

 int arr[5];

arr.fill(10);

arr.at(index);

for(int i = 1; i < 5; i++){

    cout<<arr.at(i)<<endl;

}

return 0;

 }

 int arr[5]={1,3,4,5,6}

 for(auto it=arr.begin();it!=arr.end();it++){

     cout<<*it<<endl;

 

     for(auto it=arr.rbegin();it>arr.rend();it++){

     cout<<*it<<endl;

 }

for (auto it:arr){

cout <<it<<"";

}

//string 

string s="tdyfgk";

for(auto c:s){

    cout<<c<<"";//t d y f g k

}

//size

cout<<arr.size();

//front 

cout<<arr.front();/*first element*/ //arr.at(0)

//back 

cout<<arr.back();//last element//arr.at(arr.size()-1)



//vector

vector<int>arr; //{}

arr.push_back(0);//{0}

arr.push_back(2);//{0,2}

arr.pop_back();//{0}

 

arr.push_back(0);//{0.0}

arr.push_back(2);//{0,,0,2}

vect.clear();//erase all element at once {}

 

vector<int> vec1(4,0);//{0,0,0,0}

vector<int> vec2(4,10);//{10,10,10,10}

//copy vec2 in vec3

vector<int> vec3(vec2.begin(),vec2.end());//[)

vector<int> vec3(vec2);//copy intire vec2 in vec 3

 

vector <int>raj;

raj.push_back(1);

raj.push_back(3);

raj.push_back(2);

raj.push_back(5);//{1,3,2,4}

 

vector<int>raj1(raj.begin(),raj.begin()+2);//{1,3}

 

//to 2d vector

vector<vector<int>> vec;

 

vector <int>raj1;

raj1.push_back(1);

raj1.push_back(2);

 

vector <int>raj2;

raj2.push_back(10);

raj2.push_back(20);

 

vector <int>raj3;

raj3.push_back(19);

raj3.push_back(24);

raj3.push_back(27);

 

for(auto vctr: vec){  //to print a 2D vector

    for(auto it:vect){

        cout<<it<"";

    }

    cout<<endl;

}

for(int i =0;i<vec.size();i++){  //to print a 2D vector

    for(int j=0 ;j<vec[i].size();j++){

        cout<<vec[i][j]<"";

    }

    cout<<endl;

}

 

//10 x 20

vector<vector<int>> vec(10, vector<int>(20,0));

vec.push_back(vector<int>(20,0))

vector <int> arr[4];

 

vector<int> arr[4]; //vector in array

 

 //3D vector

 // 10 X 20X 30

 vector<vector<vector<int>>> vec(10,vector<vector<int>> vec(20, vector<int>(30,0));)

 

//set 

 

arry[]={2,3,2,1,5};

 

set<int>sr;

for(int i=0;i<n;i++){

    int x;

    cin>>x;

    st.insert(x);

}

//st-> {1,2,5}

//erase functionality

st.erase(st.begin()); //st.erase(iterator)//st-> {2,5}

 

st.erase(st.begin(),st.begin()+2);  //st-> {5};

 

st.erase(5) // delete 5

 

set<int>st={1,5,7,8};

 

auto it = st.find(7);

auto it = st.find(9); //it =st.end

 

cout<<st.size()<<" ";

 

set <node>st;//node

 set<int>st;

 st.insert(5);

 

     for(auto it=st.rbegin();it!=st.end();it++){

     cout<<*it<<endl;

 }

for (auto it:st){

cout <<it<<"";

}

 

st.erase(st.begin(),st.end());

 

unordered_set<int>st;

 

st.insert(2);

st.insert(3);

st.insert(4);

// average time complexity is 0(1);

//but in worst case     0( set size );

 

multiset<int>ms;

ms.insert(1);

ms.insert(1);

ms.insert(2);

ms.insert(2);

ms.insert(3); //st-> {1,1,2,2,3}

 

ms.erase(2); //all the instances will be erased

 auto it =ms.find(2); // it of first element of 2

 

 ms.clear(); //delete the entire set

 

 st.count(2);// no of occurance of 2

 

 //map

 

 map<string, int>mpp;

 mpp["raj"]=27;

 mpp["hima"]=31;

 mpp["sandeep"]=67;

 mpp["tank"] =89;       //-> a/c to the alphabets

 mpp["raj"] =29;        //map stores only unique value,it overwrite 29;

 

 mpp.emplace("raj",45);

 mpp.erase(mpp.begin());

 mpp.clear();

 mpp.erase(mpp.begin(),mpp.begin()+2);

 auto it = mpp.find("raj"); //points to where raj lies

 

 if(mpp.empty()){

     cout<<"yes it is empty";

 

 }

mpp.count("raj"); //always returns 1 as it stores only 1

 // pair

 pair<int,int>pr;

 pr.first=1;

 pr.second=10;

 

 //printing map

for(auto it: mpp){

    cout<<it.first<< ""<< it.second<<endl;

}

for (auto it =mpp.begin();it!=mpp.end();i++){

    cout<<it->first<<""<<it->second<<endl;

}

 

unordered_map<int,int>mpp; //doesn't store any order

//unordered map not use in pair 

 

//pair class

pair<int,int>pr={1,2};

pair<pair<int,int>,int>pr={{1,2},2};

cout<<pr.first.second<<endl // first 2 will be print

pair<pair<int,int>,pair<int,int>>pr={{1,2},{2,4}};

cout<<pr.first.first;  //->1

cout<<pr.second.second; //->4

 

vector<pair<int,int>> vec;

set<pair<int,int>> st;

map< pair<int,int>,int> mpp;

 

multimap<string,int>mpp;

mpp["raj"]=2;

mpp["raj"]=4;

 

 

 //stack and queue

 stack<int>st;

 //pop

 //top

 //size

 //empty

 //push or emplace

 st.push(2);

 st.push(4);

 st.push(3);

 st.push(1);

 

 cout<<st.top(); //print 1

 st.pop();   //delete the last entered element 

 cout<<st.top(); //prints 3

 st.pop();

 

 bhool flag =st.empty(); //returns true if stacks is empty ,or false

 while(!st.empty()){

     st.pop();

 }

 

 cout<<st.size()<<endl;

 

 stack.<int>st;

 if(!st.empty()){

    cout<<st.top()<<endl;

 }

 

 //queue  //fifo operation ds

 //push

 //front

 //size

 //empty

 

 queue<int>q;

 q.push(1);

 q.push(5);

 q.push(3);

 q.push(6);

 cout << q.front(); //print 1

 q.pop();

 cout<<q.front();   //print 5

 

 while (!q.empty()){

     q.pop;

 }

queue<int> q;

for(i=1;i<=10;i++){ q.push(i)}

 //no iterator in stack queue




// priority_queue

//push

//size   top  pop empty

priority_queue<int>pq;

pq.push(1);

pq.push(5);

pq.push(2);

pq.push(6);  //priority_queue -> {1,2,5,6}

 

cout<<pq.top(); //prints 6

pq.pop();

cout<<pq.top(); //prints 5

 

priority_queue<pair<int,int>>pq;

pq.push(1,5);

pq.push(1,6);

pq.push(1,7);

  

  //min priority_queue

priority_queue<int ,vector<int>,greater<int>>pq

pq.push(2);

pq.push(5);

pq.push(7);

pq.push(1);

cout<<pq.top()<<endl; //print 1

 

dequeue<int>dq;

//push_front();

//push_back();

//pop_front();

//pop_back();

// begin(),end(),rend(),rbegin();

 //size()   clear()   empty() at()

 

list<int>ls;

//push_front();

//push_back();

//pop_front();

//pop_back();

// begin(),end(),rend(),rbegin();

 //size()   clear()   empty() at();

 //remove ->0(1)

 

 ls.push_front(1);

 ls.push_front(5);

 ls.push_front(3);

 ls.remove(1); 

 

// given N element ,print the elements thst occurs maximum 

//no of times

//input 

//5

//1 3 3 3 2

//output 

 // 3

 

int n;

cin>>n;

map<int,int>mpp;

int maxi=0;

for(int i=0;i<n;i++){

    int x;

    cin>>x;

    mpp[x]++;                   //{  (1,1)   (3,1)  (3,2)  (3,3)  (2,1)}

   if( mpp[x]>mpp[maxi]){

       maxi=x;

   }

}

cout<<maxi<<x<<endl;



//day 3

 //bitset

 //int ->16 bits

 //char -> 8 bits

//bitset -> 1 bit

 bitset<5>bt;   

 cin>>bt; //10101

 //all

 cout<<bt.all();  //returns a true or false

 //any

 cout<<bt.any();   //true

 //count

 cout<<bt.count(); //no of set bits 

 //flip

//bt->10100

cout<<bt.flip(2); //bt-> 10000

 

 //none

 bt->00000

 cout<<bt.none(); //true

 //set

 cout<<bt.set();  //11111

 

 cout<<bt.set(2);  //sets 2nd index

 

 cout<<bt.set(2,0);   //sets 2nd index 0

 //reset

 bt.reset(); //sets all indexes to 0

 //size

 bt.size();  //5

 //test

 cout<<bt.test(1); //checks if the bit is set or not at index 1;



 //algorithms

 //sorting

 //array,vector

 int n;

 cin>>n;

 int arr[n]

 for(int i=0;i<n;i++){cin>>arr[i];}

 sort(arr, arr+n);

 sort(arr+1,arr+4)

 

 vector<int>vec(5,0);

 for(int i=0;i<n;i++){

     cin>>vec[i];

 }sort(vec.begin(),vec.end());

 

 //vec->{1,6,2,7,4}

 //sort it so that only indexesbfrom 1 to 3

 sort(vec.begin()+1,vec.begin()+4)  //[1,4)

  

 

  //reverse

 

  reverse(arr,arr+n)   //[arr, arr+n)

  reverse(vec.begin(),vec.end());



  int el=*max_element(arr,arr+n);

  int el=*min_element(arr,arr+n);

 

  int el=*max_element(vec.begin(),vec.end());

  int el=*min_element(vec.begin(),vec.end());

 

   // to find the sum in range 

 

   int sum=0;

   for(int k=i;k<=j;k++){

  sum+=arr[k];

   }

   //accumulator(initialiterator,lastiterator,initialSum);

   int sum = accumulate(arr,arr+n,0);

   int sum = accumulate(vec.begin(),vec.end(),0);

   

   // arr[]-> {1,6,7,1,2,1,3}

   //x=1

   // count how many times 1 occurs

   int cnt=0;

   for(int i =0;i<n;i++){

       if(arr[i]==x){

           cnt++;

       }

       cout<<cnt;

   }

 

//count(initialiterator,lastiterator,x)

int cnt=count(arr,arr+n,1);

int cnt=count(vec.begin(),vec.end(),1);

 

//arr[]->{ 1,,5,1,2,4,4,}

//i want to find the first occurance of 2

 

int ind=-1

for(i=0;i<n;i++){

    if(arr[i]=x){

        ind=i;

        break;

    }

}

cout<<ind;

auto it=find(arr,arr+n,2); //it -begin()=index

 

int ind =it-arr;

auto it =find(vec.begin(),vec.endl(),2);

int ind =it-vec.vec.begin();

 

// binary search

//binary_search works on sorted array

//arr[]={1,5,7,9,10}

//x=9

//true

//x=8

//false

 

//binary_search(firstiterator,lastiterator,x)

//returns true or false

bhool res=binary_search(arr,arr+n,8);

bhoolres=binary_search(vec.begin(),vec.end(),8);

 

//lower_bound function

//return an iterator pointing to the first

//element which is not less than x

//arr[]={1,5,7,7,8,10,10,10,11,11,12}

//x=10

 

 auto it=lower_bound(arr,arr+n,x);

 ind=it-arr;

 

 //upper_bound

 //returns an iterator which points to just greater to the x

 //arr[]={1,2,5,7,9,7}

 

 auto it=upper_bound(arr,arr+n,8)  //it =9

 ind= it-arr;

 autoit =upper_bound(vec.begin(),vec.end(),8)

 ind=it-vec.begin();

 

 //find the last occurance of  x in an arr

 //arr[]={1,5,7,7,8,10,10,10,11,12}

 

 int ind =upper_bound(arr,arr+n,x)-arr;

 ind-=1;

 if(ind>=0 && arr[ind]==x){

     cout<<"last occurance"<<endl;

 }else{

     cout<<"does not exist";

 }

 

 //no of times x appears in arr

 //arr[]={1,5,7,7,8,10,10,10,11,12}

 //x=10 ,x=3

 //x=7  ,x=2

 //upper_bound - lower_index



 //next permutation 

 //string s ='abc'

 //all permutaions are as follows;

 //abc

 //acb

 //bac           //n!

//bca

//cab

//cba

 

 //s="bca"

 bhool res =next_permutation(s.begin(),s.end());

 

 //s="cba"

 

//i want to print all permutations

 

string s="bca";

sort(s.begin(),s.end());

 

do{

    cout<<s<<endl;

}while(next_permutation(s.begin(),s.end()));

 

//prev permutation

 

prev_permutation(s.begin(),s.end());

 

//COMPARATOR

 

arr[]

bhool comp(int el1,int el2){

   if(el1<=el2){

       return true;

   }

   return false;

}

//arr

//pair<int,int>arr[]={{1,4},{5,2},{5,9}}     //{ {1,4}  {5,9}  {5,2}}

 

bhool comp(pair<int,int>el1,pair<int,int>el2){

    if(el1.first<el2.first){

        return true;

    }

    if(el1.first==el2.first){

        if(el1.second >el2.second){

            return true

        }

    }

    return false;

}




sort(arr, arr+3,comp);

 

//desending

sort(arr,arr+n,comp)

 

sort(arr,arr+n); //(ascending,ascending,ascending......)

 

//descending

//greater<int> is an inbuilt comparator

//which works only if you wanna do this in descending 

sort(arr, arr+n,greater<int>);

//(descending,descending,descending,......)

sort(arr,arr+n,greater<pair<int,int>>);




//           the end



 