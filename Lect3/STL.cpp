//STL is divided in four parts
//1. Algorithms
//2. Containers
//3. Functions
//4. Iterators

// #include<iostream>
// #include<math.h>
// #include<string.h>
#include<bits/stdc++.h> //Include all at once
#include<vector>
#include<list>
using namespace std;

//Pairs
void explainPair(){
    pair<int, int> o = make_pair(1,3); //pair of int type

    cout << o.first << " " << o.second << " "; //access elements of pair

    pair<int, pair<int, int> > p = make_pair(1, make_pair(3, 4)); //nested pair of int type

    cout << p.first << " " << p.second.first << " " << p.second.second << " "; //access elements of nested pair

    pair<int, int> arr[] = { make_pair(1, 2), make_pair(2, 5), make_pair(5, 1)}; //pair array of int type

    cout << arr[1].second; //access elements of pair array
}

//Vectors
void explainVector(){
    // Creating and taking input in vector
    vector<int> v; //int type vector
    v.push_back(1);
    v.emplace_back(2); //Faster as compared to push_back

    vector<pair<int, int> > ve; //pair type vector
    ve.push_back({1, 2});
    ve.emplace_back(1, 2); //Automatically makes pair and insert

    vector<int> vec(5, 100); //specifies the first 5 places with 100

    vector<int> vect(5); //specifies the first 5 values with 0 or some garbage value

    vector<int> vecto(vect); //vecto will copy all the values from vect

    //Accessing the vector values
    vector<int>::iterator it = v.begin(); //it will point at the start
    it++;
    cout << *it << " ";

    it+=2;
    cout << *it << " ";

    vector<int>::iterator it1 = v.end(); //it will point to the next elements right after the last element
    it1--;
    cout << *it1 << " ";

    vector<int>::reverse_iterator it2 = v.rend(); //reverse end it will point to the next elements right before the first element
    it2--;
    cout << *it2 << " ";

    vector<int>::reverse_iterator it3 = v.rbegin(); //reverse begin
    cout << *it3 << " ";

    cout << v[0] << " " << v.at(0) << " "; //print value at index

    cout << v.back() << " "; //last value of vector

    cout << "\n";

    // Accessing the vector values with the help of loop using iterator
    for(vector<int>::iterator it = v.begin() ; it!=v.end() ; it++){
        cout << *it << " ";
    }

    cout << "\n";

    for(auto it=v.begin() ; it!=v.end() ; it++){
        cout << *it << " ";
    }

    cout << "\n";

    for(auto it :v){ //for each it in v
        cout << it << " "; //{1, 2} for each it in v
    }

    //Deletion in vector
    
    // {10,11,12,13}
    v.erase(v.begin()+1);
    // {10,12,13}

    // {10,20,12,23,35}
    v.erase(v.begin()+2, v.begin()+4);
    // {10,20,35}


    //Insertion in vector

    //{100,200}
    v.insert(v.begin(),300);
    //{300,100,200}
    v.insert(v.begin()+1,2,10);
    //{300,10,10,100,200}


    //Size of a vector
    cout << v.size();

    //Pop out last element
    v.pop_back();

    //Swapping
    v.swap(vec);

    //Erase the entire vector
    v.clear();

    //Is empty or Is not empty
    cout << v.empty();
}

void explainList(){
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);
    ls.emplace_front(9);

    for(auto it : ls){
        cout << it << "\t";
    }
    
    //Rest all the functions for vectors are same for the list also
    //begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque(){
    deque<int> dq;

    dq.push_back(3);
    dq.emplace_back(4);
    dq.push_front(2);
    dq.emplace_front(1);

    dq.pop_back();
    dq.pop_front();

    cout << dq.back() << "\n";
    cout << dq.front() << "\n";

    for(auto it : dq){
        cout << it << "\t";
    }
    
    //Rest functions same as vectors
    //begin, end, rbegin, rend, clear, insert, size, swap
}

void explainStack(){
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);
    //Tell the element at the top
    cout << st.top() << "\t";
    //Delete
    st.pop();
    cout << st.top() << "\t";
    //Tell the size of Stack
    cout << st.size() << "\t";
    //Is the stack empty
    cout << st.empty(); 
    //Swap it to some other Stack f
}

void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);

    q.back()+=10;
    cout << q.back() << "\t";
    cout << q.front() << "\t";
    q.pop();
    cout << q.front() << "\t";

    //swap, size and empty same as stack
}

void explainPQ(){
    priority_queue<int> pq; //Max heap
    //Time Complexity of push, pop is O(logn)
    //Time Complexity of top is O(1)
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top() << "\t"; //prints 10

    pq.pop(); // {8, 5, 2}

    cout << pq.top() << "\n"; //prints 8

    priority_queue<int, vector<int>, greater<int> > pqm; //Min heap
    pqm.push(5); // {5}
    pqm.push(2); // {2, 5}
    pqm.push(8); // {2, 5, 8}
    pqm.emplace(10); // {2, 5, 8, 10}

    cout << pqm.top() << "\t"; //prints 2
}

void explainSet(){
    set<int> s;
    s.insert(1); // {1}
    s.insert(2); // {1, 2}
    s.insert(2); // {1, 2} Does not repeat the element
    s.insert(4); // {1, 2, 4}
    s.insert(3); // {1, 2, 3, 4} Automatically sorts the elements

    //Functionality of insert in vector
    //can be used also, that only increases efficiency

    // begin(), end(), rbegin(), rend(), size(), swap() and empty() are same as those above

    // {1, 2, 3, 4}
    auto it = s.find(3); //returns the iterator pointing to 3
    cout << *it << "\t"; //prints 3
    it = s.find(6); //if the element is not present, it will return s.end()
    cout << *it << "\t"; //prints 4
    s.erase(3); // {1, 2, 4}
    int cnt = s.count(1); //returns 1 if the element is present, 0 if not

    it = s.find(4);
    cout << *it << "\t"; //prints 4
    s.erase(it);

    auto it1 = s.find(2);
    cout << *it1 << "\t"; //prints 2
    auto it2 = s.find(4);
    cout << *it2 << "\t"; //prints 4
    s.erase(it1, it2); // {1}

    //Lower bound and Upper bound
    set<int> st = {2, 3, 4, 5};
    it = st.lower_bound(3); //returns iterator of 3
    cout << *it << "\t"; //prints 3
    it = st.upper_bound(3); //returns iterator of 4
    cout << *it << "\t"; //prints 4
    it = st.lower_bound(6); //returns iterator of 5
    cout << *it << "\t"; //prints 5
    it = st.upper_bound(6); //returns iterator of 5
    cout << *it << "\t"; //prints 5
}

void explainMultiSet(){
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(2); // {1, 1, 2}
    ms.insert(2); // {1, 1, 2, 2}
    ms.insert(4); // {1, 1, 2, 2, 4}
    ms.insert(3); // {1, 1, 2, 2, 3, 4} Automatically sorts the elements
    //print the elements
    for(auto it : ms){
        cout << it << "\t";
    }
    cout<<"\n";

    ms.erase(1); // {2, 2, 3, 4} Removes all the 1's
    for(auto it : ms){
        cout << it << "\t";
    }
    cout<<"\n";
    int cnt = ms.count(2); //returns 2

    ms.erase(ms.find(2)); // {2, 3, 4} Removes only one 2
    for(auto it : ms){
        cout << it << "\t";
    }
    cout<<"\n";
}

void explainUSet(){
    unordered_set<int> st;
    st.insert(1); // {1}
    st.insert(2); // {1, 2}
    st.insert(2); // {1, 2} Does not repeat the element
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4} It does not stores in sorted order it stores in random order
    //lower_bound and upper_bound are not available in unordered_set
    for(auto it : st){
        cout << it << "\t";
    }
    cout<<"\n";
}

void explainMap(){
    map<int, int> m;
    map<int, pair<int, int> > mp;
    map< pair<int, int>, int> mpp;
    
    m[1]=2; // {1:2}
    m.insert({4, 5}); // {1:2, 4:5}

    for(auto it : m){
        cout << it.first << " " << it.second << "\n";
    }

    cout << m[1] << "\n"; //prints 2
    cout << m[4] << "\n"; //prints 5

    auto it = m.find(1); //returns iterator pointing to 1
    cout << it->first << " " << it->second << "\n"; //prints 1 2

    m.erase(1); // {4:5}
    m.erase(m.find(4)); // {}
}

void explainMultiMap(){
    //Same as map but can have multiple values for a single key
    // {1:2, 1:3, 2:4, 2:5}
}

void explainUnorderedMap(){
    //same as set and unordered_set difference
}

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first > p2.second) return true;
    return false;
}
    

void explainExtra(){

    //Sorting
    // sort(a, a+n); //sorts the array
    // sort(v.begin, v.end); //sorts the vector

    // sort(a+2, a+4); //sorts the array from 2 to 4

    // sort(a, a+n, greater<int>); //sorts the array in descending order

    // Sorting according to my way
    pair<int, int> a[] = { {1, 2}, {2, 1}, {4, 1} };
    // sort it according to the second element
    // if second element is same then sort according to the first element
    for(int i=0 ; i<3 ; i++){
        cout << a[i].first << " " << a[i].second << "\n";
    }
    sort(a, a+3, comp);
    for(int i=0 ; i<3 ; i++){
        cout << a[i].first << " " << a[i].second << "\n";
    }
    // {{4, 1}, {2, 1}, {1, 2}}
    int num = 7;
    // int cnt = __builtin_popcount();
}

int main(){
    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPQ();
    // explainSet();
    // explainMultiSet();
    // explainUSet();
    // explainMap();
    // explainMultiMap();
    // explainUnorderedMap();
    explainExtra();
    return 0;
}



