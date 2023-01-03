#include<iostream>
using namespace std;

// template for selection sort
template <class T>
void SelectionSort(T *array,int size)
{
    // selection sort logic : 
    for (int i = 0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[j]<array[i])
            {
                T temp = array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }

    // display the sorted array
    cout<<"Sorted array : ";
    for(int i = 0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int size = 5;

    // Selection sort on Integer array :
    int intArr[] = {43,23,2,57,65};
    SelectionSort(intArr,size);

    // Selection sort on Float array :
    float fltArr[] = {34.5f,45.0f,2.2f,43.5f,54.3f};
    SelectionSort(fltArr,size);


    return 0; 
}