//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_YourLastName

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <map>
#include <algorithm>
#include <stack>
#include <utility>
#include <cassert>
#include <set>

using namespace std;
typedef map<string, int> MapT;
typedef MapT::const_iterator MapIterT;
bool less_than_7(int);
//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added


class MyClassVector1
{
private:
    vector<int> vec;
public:
    MyClassVector1(vector<int> vi)  //parameterized constructor
    {
        vec = vi;
    }

    void print()
    {
        /// print the value of vector 
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
    }
};

class MyClassVector2
{
private:
    vector<int> vec;
public:
    MyClassVector2(vector<int> vi) : vec(vi){}
    
    void print()
    {
        // print the value of vector 
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
    }
};

class MyClassVector3
{
private:
    vector<int> vec;
public:
    MyClassVector3(vector<int>& v) : vec(v){}

    void print()
    {
        // print the value of vector 
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
    }
};
int main()
{
    /****Section_Name***Vectors*/
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1.1);
    vd.push_back(2.2);
    vd.push_back(3.3);

    //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);
    // add 3 elements to the vs vector
    vs.push_back("one");
    vs.push_back("two");
    vs.push_back("three");
    // display the 3 elements in the vd vector
    cout << "\nValues in vd: \n";
    for (double vals : vd)
    {
        cout << vals << endl;
    }
    cout << "\nAnother way to print vector: " << endl;
    for (int i = 0; i < vd.size(); i++)
    {
        cout << vd[i] << endl;
    }

    //display the 3 elements in the vi vector
    cout << "\nValues in vi: \n";
    for (int vals : vi)
    {
        cout << vals << endl;
    }
    cout << "\nAnother way to print vector: " << endl;
    for (int j = 0; j < vi.size(); j++)
    {
        cout << vi[j] << endl;
    }
    // display the 3 elements in the vs vector
    cout << "\nValues in vs: \n";
    for (string vals : vs)
    {
        cout << vals << endl;
    }
    cout << "\nAnother way to print vector: " << endl;
    for (int a = 0; a < vs.size(); a++)
    {
        cout << vs[a] << endl;
    }
    /****Section_Name***Vector_as_Class_Member*/
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

    cout << "\nVector_as_Class_Member" << endl;
    vector<int> vec1;
    for (int i = 1; i <= 5; i++)
        vec1.push_back(i);
    MyClassVector1 obj(vec1);
    obj.print();


    //Continue with MyClassVector2 and MyClassVector3

    cout << "\nMyClassVector2" << endl;
    vector<int> vec2;
    for (int i = 1; i <= 5; i++)
        vec2.push_back(i);
    MyClassVector2 obj2(vec2);
    obj2.print();

    cout << "\nMyClassVector3" << endl;
    vector<int> vec3;
    for (int i = 1; i <= 5; i++)
        vec3.push_back(i);
    MyClassVector3 obj3(vec3);
    obj3.print();

    
  /****Section_Name***STL_Iterators*/

    vector<int> vint(10);
    vint[0] = 10;
    vint[1] = 20;
    vint[2] = 30;
    vint[3] = 40;
    vint[4] = 50;
    vint[5] = 60;
    vint[6] = 70;
    vint[7] = 80;
    vint[8] = 90;
    vint[9] = 100;

    //Displays elements of vector.
    vector<int> ::iterator it;
    for (it = vint.begin(); it != vint.end(); it++)
        cout << "\n" << *it;

  /****Section_Name*** Stack*/
    
    stack<int> st;
    st.push(100);               //push number 100 on the stack
    cout << "\n" << st.top();
    st.top() = 345;             // assign new element: 345
    cout << "\n" << st.top();
    st.pop();                   //remove element 345
    assert(st.empty() == true); //verify the stack is empty

  //Write comments that help one better understand what the code is doing.

  /****Section_Name**** Set*/
  //Write the code as presented in: 3. std::set

    set<int> iset;
    iset.insert(22);
    iset.insert(-22);
    iset.insert(55);
    iset.insert(11);
    iset.insert(11);
    if (iset.find(55) != iset.end()) //is value already stored??
        iset.insert(55);
    set<int>::iterator is;
    for (is = iset.begin(); is != iset.end(); is++)
        cout << "\n" << *is;
   
    // ===> set the unique values by order: 


  //Write comments that help one better understand what the code is doing.

  /****Section_Name****Pair_Structure*/
  //Write the code as presented in: 4. std::pair structure

    pair<string, string> strstr; 
    strstr.first = "Hello";
    strstr.second = "World!";
    cout << "\n" << strstr.first << " " << strstr.second << endl;

    pair<int, string> intstr;
    intstr.first = 1;
    intstr.second = "one";
    cout << "\n" << intstr.first << " : " << intstr.second << endl;

    pair<string, int> strint("two", 2);
    assert(strint.first == "two");
    assert(strint.second == 2);
    cout << "\n" << strint.first << " : " << strint.second << endl;

    //===> can hold 2 different or 2 same. object of type 

  //Write comments that help one better understand what the code is doing.

  /****Section_Name**** Map_Insert*/
  //Write the code as presented in: 14. std::map::insert
   
    MapT amap;
    pair<MapIterT, bool>
        result = amap.insert(make_pair("Fred", 45));
    assert(result.second == true);
    assert(result.first->second == 45);
    result = amap.insert(make_pair("Fred", 54));
    //Fred was already in the map
    assert(result.second == false);                       
    assert(result.first->second == 45);                  //check the mapped value.
    //OR
    cout << "\n" << result.first->second << "\n"<< endl; 

  //Write comments that help one better understand what the code is doing.

  /****Section_Name****Map_Summary*/
  //Write the code as presented in: 16. Map summary

    // map is a container that holds unique pairs of keys and values;
    // always sorted by its keys.
    map<string, string> phone_book;
    phone_book["411"] = "Directory";
    phone_book["911"] = "Emergency";
    phone_book["508-678-2811"] = "BCC";
    if (phone_book.find("411") != phone_book.end())
        phone_book.insert(make_pair("411", "Directory"));
    map<string, string> ::iterator info;
    for (info = phone_book.begin(); info != phone_book.end(); info++)
        cout << " " << info->first << " " << info->second << endl;

  //Write comments that help one better understand what the code is doing.

  /****Section_Name**** Sort_Algorithm*/
  //Write the code as presented in: 23. sort example
    
    int arr[10] = { 1, 15, 3, 22, 17, 5, 17, 1, 2};
    cout << "Size of array is: " << sizeof(arr) << endl;
    cout << "=== Before sorting ====";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
    cout << "=== After sorting ====";  
    sort(arr, arr + 10);
    for (int j = 0; j < 10; j++) {
        cout << arr[j] << endl;
    }
    vector<int> v1;
    sort(v1.begin(), v1.end());
    
 
  //Write comments that help one better understand what the code is doing.

  /****Section_Name****Predicate_Algorithm*/
  //Write the code as presented in: 25. count_if and predicate function

    bool less_than_7(int value)
    {
        return value < 7;
    }
    vector<int> v;
    int count_less = count_if(v.begin(), v.end(), less_than_7);

  //Write comments that help one better understand what the code is doing. 
    return 0;
}
