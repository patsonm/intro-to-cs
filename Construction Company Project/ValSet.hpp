/*******************************************************
Michael Patosn
November 10th 2017
Project: HW 8A this is a template class which represents a mathmatical set of values"t".
*******************************************************/

#include <vector>
using std::vector;

template <typename T>
class ValSet 
{
   private:
       T* tArray;
       int arraySize;
       int arrayV;
   public:
       ValSet(); //default constructor
       ValSet(ValSet &); //copy constructor
       ~ValSet(); //destructor
       ValSet& operator=(ValSet &OVL);//overloaded  operator
       int size(); //returns size of array
       bool isEmpty(); //returns true if blank
       bool contains(T); //returns true if array isn't blank
       void add(T); //adds value T to array if not duplicate
       void remove(T); //removes T by shifting elements to left
       vector<T> getAsVector(); //returns a vector of values in array  
};

/*******************************************************
Description: Default constructor, size 10 value 0
*******************************************************/
template <typename T>
ValSet<T>::ValSet()
{
    tArray = new T[10];

    arraySize = 10;

    arrayV = 0;
}

/*******************************************************
Description: Copy constructor for ValSet. 
*******************************************************/
template <typename T>
ValSet<T>::ValSet( ValSet &ValSet) 
{  
    vector<T> oldVector = ValSet.getAsVector(); 
    
    arraySize = oldVector.size();  
    
    arrayV = ValSet.size();   
    
    tArray = new T[oldVector.size()];             
    for (int i=0; i<arraySize; i++) //copes
        {                   
            tArray[i] = oldVector[i];
        }
}



/*******************************************************
Description: Overloaded assignment operator for ValSet
*******************************************************/
template <typename T>
ValSet<T>& ValSet<T>::operator=(ValSet<T> &OVL) 
{
    arraySize = OVL.size();
    vector<T> oldVector = OVL.getAsVector();
    arrayV = oldVector.size();
    
    if (this != &OVL) 
    {
        delete tArray; //delete pointer
        tArray = new T[arraySize];                            
        
        for (int i=0; i<arraySize; i++) 
        {
            tArray[i] = oldVector[i];
        }
    }
    return *this;
}

/*******************************************************
Description: Destructor for ValSet
*******************************************************/
template <typename T>
ValSet<T>::~ValSet() 
{
    delete tArray;
}

/*******************************************************
Description: Returns the number of elements set
*******************************************************/
template <typename T>
int ValSet<T>::size() 
{
    return arrayV;
}

/*******************************************************
Description: Returns true if element is blank
*******************************************************/
template <typename T>
bool ValSet<T>::isEmpty() 
{
    bool blank = false;
    
    if (arrayV == 0) 
    {
       blank = true;
    }
    return blank;
}

/*******************************************************
Description: Returns a true if value is in set
*******************************************************/
template <typename T>
bool ValSet<T>::contains(T search) 
{
    bool present = false;
    for (int i = 0; i < arrayV; i++) 
    {
    if (search == tArray[i]) 
        {
        present = true;
        }
    }
    return present;
}

/*******************************************************
Description: The add() method adds a paramenter if it 
is not present already
*******************************************************/
template <typename T>
void ValSet<T>::add(T newVal) 
{
    if (!this->contains(newVal)) 
    {
    
        if (arrayV == arraySize) 
        {
            T* newArray = new T[arraySize*2];
            
            for (int i =0; i<arraySize; i++) 
            {
                newArray[i] = tArray[i];
            }
            arraySize *= 2;
            
            delete tArray;
            
            tArray = newArray;
        }

    tArray[arrayV] = newVal;
    
    arrayV++;

    }
}



/*******************************************************
Description: The remove() methods removes if present and
shifts to the left
*******************************************************/
template <typename T>
void ValSet<T>::remove(T dVal) 
{
    if (this->contains(dVal)) 
    {
        int foundIndex;
        
        for (int i = 0; i < arrayV; i++) 
        {
        
            if (tArray[i] == dVal) 
            {
                foundIndex = i;
            }
        }
        
        for (int i = foundIndex; i<(arrayV-1); i++) 
        {
            tArray[i] = tArray[i+1];
        }
        
        arrayV--;
    }
}

/*******************************************************
Description: getAsVector returns vector of type T
*******************************************************/
template <typename T>
vector<T> ValSet<T>::getAsVector() 
{
    vector<T> returnVector;
        
    for (int i=0; i<arraySize; i++) 
    {
        returnVector.push_back(tArray[i]);//using lib
    }
    return returnVector;
}






/*int main(){
    


ValSet<char> mySet;
mySet.add('A');
mySet.add('j');
mySet.add('&');
mySet.remove('j');
mySet.add('#');
int size = mySet.size();
ValSet<char> mySet2 = mySet;
bool check1 = mySet2.contains('&');
bool check2 = mySet2.contains('j');
ValSet<char> myUnion = mySet + mySet2;
    
return 0;
}*/
    